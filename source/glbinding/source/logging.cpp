#include <glbinding/logging.h>

#include <atomic>
#include <condition_variable>
#include <fstream>
#include <mutex>
#include <sstream>
#include <thread>

#include "RingBuffer.h"

namespace
{
    const unsigned int LOG_BUFFER_SIZE = 1000000;

    std::atomic<bool> g_stop{false};
    std::atomic<bool> g_persisted{false};
    std::mutex g_lockfinish;
    std::condition_variable g_finishcheck;

    using FunctionCallBuffer = glbinding::RingBuffer<glbinding::logging::BufferType>;
    FunctionCallBuffer g_buffer{LOG_BUFFER_SIZE};
}

namespace glbinding
{

namespace logging
{

void start()
{
    auto now = std::chrono::system_clock::now();


    auto now_ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch());
    auto ms = now_ms.count() % 1000;

    auto now_c = std::chrono::system_clock::to_time_t(now);
    char time_string[20];
    std::strftime(time_string, sizeof(time_string), "%F_%H-%M-%S", std::localtime(&now_c));

    std::ostringstream ms_os;
    ms_os << std::setfill('0') << std::setw(3) << ms;

    std::ostringstream os;
    os << "logs/";
    os << time_string << "-" << ms_os.str();
    os << ".log";
    
    auto logname = os.str();

    start(logname);
}

void start(const std::string & filepath)
{
    addCallbackMask(CallbackMask::Logging);

    g_stop = false;
    g_persisted = false;

    std::thread writer([filepath]()
    {
        auto key = g_buffer.addTail();
        std::ofstream logfile;
        logfile.open (filepath, std::ios::out);

        while (!g_stop || (g_buffer.size(key) != 0))
        {
            auto i = g_buffer.cbegin(key);

            while (g_buffer.valid(key, i))
            {
                logfile << (*i)->toString();
                i = g_buffer.next(key, i);
            }

            logfile.flush();

            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }

        logfile.close();
        g_buffer.removeTail(key);
        g_persisted = true;
        g_finishcheck.notify_all();
    });

    writer.detach();
}

void stop()
{
    g_stop = true;
    std::unique_lock<std::mutex> locker(g_lockfinish);

    // Spurious wake-ups: http://www.codeproject.com/Articles/598695/Cplusplus-threads-locks-and-condition-variables
    while(!g_persisted)
    {
        g_finishcheck.wait(locker);
    }

    removeCallbackMask(CallbackMask::Logging);
}

void pause()
{
    removeCallbackMask(CallbackMask::Logging);
}

void resume()
{
    addCallbackMask(CallbackMask::Logging);
}

void log(bool enable)
{
    if (enable)
    {
        start();
    }
    else
    {
        stop();
    }
}

void log(FunctionCall * call)
{
    delete g_buffer.hat();

    while(!g_buffer.push(call))
    {
    }
}

TailIdentifier addTail()
{
    return g_buffer.addTail();
}

void removeTail(TailIdentifier key)
{
    g_buffer.removeTail(key);
}

const std::vector<BufferType>::const_iterator cbegin(TailIdentifier key)
{
    return g_buffer.cbegin(key);
}

bool valid(TailIdentifier key, const std::vector<BufferType>::const_iterator & it)
{
    return g_buffer.valid(key, it);
}

const std::vector<BufferType>::const_iterator next(TailIdentifier key, const std::vector<BufferType>::const_iterator & it)
{
    return g_buffer.next(key, it);
}

unsigned int size(TailIdentifier key)
{
    return g_buffer.size(key);
}

} // namespace logging
} // namespace glbinding
