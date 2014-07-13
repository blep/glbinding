#pragma once

#include <glbinding/nogl.h>
#include <glbinding/featured/gl42core.h>

#include <glbinding/FunctionObjects.h>


namespace gl42core
{

using namespace gl;


inline void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
   	return FunctionObjects::ActiveShaderProgram(pipeline, program);
}

inline void glActiveTexture(gl42core::GLenum texture)
{
   	return FunctionObjects::ActiveTexture(texture);
}

inline void glAttachShader(GLuint program, GLuint shader)
{
   	return FunctionObjects::AttachShader(program, shader);
}

inline void glBeginConditionalRender(GLuint id, gl42core::GLenum mode)
{
   	return FunctionObjects::BeginConditionalRender(id, mode);
}

inline void glBeginQuery(gl42core::GLenum target, GLuint id)
{
   	return FunctionObjects::BeginQuery(target, id);
}

inline void glBeginQueryIndexed(gl42core::GLenum target, GLuint index, GLuint id)
{
   	return FunctionObjects::BeginQueryIndexed(target, index, id);
}

inline void glBeginTransformFeedback(gl42core::GLenum primitiveMode)
{
   	return FunctionObjects::BeginTransformFeedback(primitiveMode);
}

inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
   	return FunctionObjects::BindAttribLocation(program, index, name);
}

inline void glBindBuffer(gl42core::GLenum target, GLuint buffer)
{
   	return FunctionObjects::BindBuffer(target, buffer);
}

inline void glBindBufferBase(gl42core::GLenum target, GLuint index, GLuint buffer)
{
   	return FunctionObjects::BindBufferBase(target, index, buffer);
}

inline void glBindBufferRange(gl42core::GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
   	return FunctionObjects::BindBufferRange(target, index, buffer, offset, size);
}

inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
   	return FunctionObjects::BindFragDataLocation(program, color, name);
}

inline void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
   	return FunctionObjects::BindFragDataLocationIndexed(program, colorNumber, index, name);
}

inline void glBindFramebuffer(gl42core::GLenum target, GLuint framebuffer)
{
   	return FunctionObjects::BindFramebuffer(target, framebuffer);
}

inline void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, gl42core::GLenum access, gl42core::GLenum format)
{
   	return FunctionObjects::BindImageTexture(unit, texture, level, layered, layer, access, format);
}

inline void glBindProgramPipeline(GLuint pipeline)
{
   	return FunctionObjects::BindProgramPipeline(pipeline);
}

inline void glBindRenderbuffer(gl42core::GLenum target, GLuint renderbuffer)
{
   	return FunctionObjects::BindRenderbuffer(target, renderbuffer);
}

inline void glBindSampler(GLuint unit, GLuint sampler)
{
   	return FunctionObjects::BindSampler(unit, sampler);
}

inline void glBindTexture(gl42core::GLenum target, GLuint texture)
{
   	return FunctionObjects::BindTexture(target, texture);
}

inline void glBindTransformFeedback(gl42core::GLenum target, GLuint id)
{
   	return FunctionObjects::BindTransformFeedback(target, id);
}

inline void glBindVertexArray(GLuint array)
{
   	return FunctionObjects::BindVertexArray(array);
}

inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::BlendColor(red, green, blue, alpha);
}

inline void glBlendEquation(gl42core::GLenum mode)
{
   	return FunctionObjects::BlendEquation(mode);
}

inline void glBlendEquationSeparate(gl42core::GLenum modeRGB, gl42core::GLenum modeAlpha)
{
   	return FunctionObjects::BlendEquationSeparate(modeRGB, modeAlpha);
}

inline void glBlendEquationSeparatei(GLuint buf, gl42core::GLenum modeRGB, gl42core::GLenum modeAlpha)
{
   	return FunctionObjects::BlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationi(GLuint buf, gl42core::GLenum mode)
{
   	return FunctionObjects::BlendEquationi(buf, mode);
}

inline void glBlendFunc(gl42core::GLenum sfactor, gl42core::GLenum dfactor)
{
   	return FunctionObjects::BlendFunc(sfactor, dfactor);
}

inline void glBlendFuncSeparate(gl42core::GLenum sfactorRGB, gl42core::GLenum dfactorRGB, gl42core::GLenum sfactorAlpha, gl42core::GLenum dfactorAlpha)
{
   	return FunctionObjects::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlendFuncSeparatei(GLuint buf, gl42core::GLenum srcRGB, gl42core::GLenum dstRGB, gl42core::GLenum srcAlpha, gl42core::GLenum dstAlpha)
{
   	return FunctionObjects::BlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFunci(GLuint buf, gl42core::GLenum src, gl42core::GLenum dst)
{
   	return FunctionObjects::BlendFunci(buf, src, dst);
}

inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, gl42core::ClearBufferMask mask, gl42core::GLenum filter)
{
   	return FunctionObjects::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glBufferData(gl42core::GLenum target, GLsizeiptr size, const void * data, gl42core::GLenum usage)
{
   	return FunctionObjects::BufferData(target, size, data, usage);
}

inline void glBufferSubData(gl42core::GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
   	return FunctionObjects::BufferSubData(target, offset, size, data);
}

inline GLenum glCheckFramebufferStatus(gl42core::GLenum target)
{
   	return static_cast<gl42core::GLenum>(FunctionObjects::CheckFramebufferStatus(target));
}

inline void glClampColor(gl42core::GLenum target, gl42core::GLenum clamp)
{
   	return FunctionObjects::ClampColor(target, clamp);
}

inline void glClear(gl42core::ClearBufferMask mask)
{
   	return FunctionObjects::Clear(mask);
}

inline void glClearBufferfi(gl42core::GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
   	return FunctionObjects::ClearBufferfi(buffer, drawbuffer, depth, stencil);
}

inline void glClearBufferfv(gl42core::GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
   	return FunctionObjects::ClearBufferfv(buffer, drawbuffer, value);
}

inline void glClearBufferiv(gl42core::GLenum buffer, GLint drawbuffer, const GLint * value)
{
   	return FunctionObjects::ClearBufferiv(buffer, drawbuffer, value);
}

inline void glClearBufferuiv(gl42core::GLenum buffer, GLint drawbuffer, const GLuint * value)
{
   	return FunctionObjects::ClearBufferuiv(buffer, drawbuffer, value);
}

inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::ClearColor(red, green, blue, alpha);
}

inline void glClearDepth(GLdouble depth)
{
   	return FunctionObjects::ClearDepth(depth);
}

inline void glClearDepthf(GLfloat d)
{
   	return FunctionObjects::ClearDepthf(d);
}

inline void glClearStencil(GLint s)
{
   	return FunctionObjects::ClearStencil(s);
}

inline GLenum glClientWaitSync(GLsync sync, gl42core::SyncObjectMask flags, GLuint64 timeout)
{
   	return static_cast<gl42core::GLenum>(FunctionObjects::ClientWaitSync(sync, flags, timeout));
}

inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
   	return FunctionObjects::ColorMask(red, green, blue, alpha);
}

inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
   	return FunctionObjects::ColorMaski(index, r, g, b, a);
}

inline void glColorP3ui(gl42core::GLenum type, GLuint color)
{
   	return FunctionObjects::ColorP3ui(type, color);
}

inline void glColorP3uiv(gl42core::GLenum type, const GLuint * color)
{
   	return FunctionObjects::ColorP3uiv(type, color);
}

inline void glColorP4ui(gl42core::GLenum type, GLuint color)
{
   	return FunctionObjects::ColorP4ui(type, color);
}

inline void glColorP4uiv(gl42core::GLenum type, const GLuint * color)
{
   	return FunctionObjects::ColorP4uiv(type, color);
}

inline void glCompileShader(GLuint shader)
{
   	return FunctionObjects::CompileShader(shader);
}

inline void glCompressedTexImage1D(gl42core::GLenum target, GLint level, gl42core::GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexImage2D(gl42core::GLenum target, GLint level, gl42core::GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage3D(gl42core::GLenum target, GLint level, gl42core::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1D(gl42core::GLenum target, GLint level, GLint xoffset, GLsizei width, gl42core::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTexSubImage2D(gl42core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, gl42core::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage3D(gl42core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, gl42core::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCopyBufferSubData(gl42core::GLenum readTarget, gl42core::GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
   	return FunctionObjects::CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

inline void glCopyTexImage1D(gl42core::GLenum target, GLint level, gl42core::GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
   	return FunctionObjects::CopyTexImage1D(target, level, internalformat, x, y, width, border);
}

inline void glCopyTexImage2D(gl42core::GLenum target, GLint level, gl42core::GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
   	return FunctionObjects::CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTexSubImage1D(gl42core::GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
   	return FunctionObjects::CopyTexSubImage1D(target, level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2D(gl42core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3D(gl42core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline GLuint glCreateProgram()
{
   	return FunctionObjects::CreateProgram();
}

inline GLuint glCreateShader(gl42core::GLenum type)
{
   	return FunctionObjects::CreateShader(type);
}

inline GLuint glCreateShaderProgramv(gl42core::GLenum type, GLsizei count, const GLchar *const* strings)
{
   	return FunctionObjects::CreateShaderProgramv(type, count, strings);
}

inline void glCullFace(gl42core::GLenum mode)
{
   	return FunctionObjects::CullFace(mode);
}

inline void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
   	return FunctionObjects::DeleteBuffers(n, buffers);
}

inline void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
   	return FunctionObjects::DeleteFramebuffers(n, framebuffers);
}

inline void glDeleteProgram(GLuint program)
{
   	return FunctionObjects::DeleteProgram(program);
}

inline void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
   	return FunctionObjects::DeleteProgramPipelines(n, pipelines);
}

inline void glDeleteQueries(GLsizei n, const GLuint * ids)
{
   	return FunctionObjects::DeleteQueries(n, ids);
}

inline void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
   	return FunctionObjects::DeleteRenderbuffers(n, renderbuffers);
}

inline void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
   	return FunctionObjects::DeleteSamplers(count, samplers);
}

inline void glDeleteShader(GLuint shader)
{
   	return FunctionObjects::DeleteShader(shader);
}

inline void glDeleteSync(GLsync sync)
{
   	return FunctionObjects::DeleteSync(sync);
}

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
   	return FunctionObjects::DeleteTextures(n, textures);
}

inline void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
   	return FunctionObjects::DeleteTransformFeedbacks(n, ids);
}

inline void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
   	return FunctionObjects::DeleteVertexArrays(n, arrays);
}

inline void glDepthFunc(gl42core::GLenum func)
{
   	return FunctionObjects::DepthFunc(func);
}

inline void glDepthMask(GLboolean flag)
{
   	return FunctionObjects::DepthMask(flag);
}

inline void glDepthRange(GLdouble near_, GLdouble far_)
{
   	return FunctionObjects::DepthRange(near_, far_);
}

inline void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
   	return FunctionObjects::DepthRangeArrayv(first, count, v);
}

inline void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
   	return FunctionObjects::DepthRangeIndexed(index, n, f);
}

inline void glDepthRangef(GLfloat n, GLfloat f)
{
   	return FunctionObjects::DepthRangef(n, f);
}

inline void glDetachShader(GLuint program, GLuint shader)
{
   	return FunctionObjects::DetachShader(program, shader);
}

inline void glDisable(gl42core::GLenum cap)
{
   	return FunctionObjects::Disable(cap);
}

inline void glDisableVertexAttribArray(GLuint index)
{
   	return FunctionObjects::DisableVertexAttribArray(index);
}

inline void glDisablei(gl42core::GLenum target, GLuint index)
{
   	return FunctionObjects::Disablei(target, index);
}

inline void glDrawArrays(gl42core::GLenum mode, GLint first, GLsizei count)
{
   	return FunctionObjects::DrawArrays(mode, first, count);
}

inline void glDrawArraysIndirect(gl42core::GLenum mode, const void * indirect)
{
   	return FunctionObjects::DrawArraysIndirect(mode, indirect);
}

inline void glDrawArraysInstanced(gl42core::GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
   	return FunctionObjects::DrawArraysInstanced(mode, first, count, instancecount);
}

inline void glDrawArraysInstancedBaseInstance(gl42core::GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
   	return FunctionObjects::DrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

inline void glDrawBuffer(gl42core::GLenum mode)
{
   	return FunctionObjects::DrawBuffer(mode);
}

inline void glDrawBuffers(GLsizei n, const gl42core::GLenum * bufs)
{
   	return FunctionObjects::DrawBuffers(n, bufs);
}

inline void glDrawElements(gl42core::GLenum mode, GLsizei count, gl42core::GLenum type, const void * indices)
{
   	return FunctionObjects::DrawElements(mode, count, type, indices);
}

inline void glDrawElementsBaseVertex(gl42core::GLenum mode, GLsizei count, gl42core::GLenum type, const void * indices, GLint basevertex)
{
   	return FunctionObjects::DrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

inline void glDrawElementsIndirect(gl42core::GLenum mode, gl42core::GLenum type, const void * indirect)
{
   	return FunctionObjects::DrawElementsIndirect(mode, type, indirect);
}

inline void glDrawElementsInstanced(gl42core::GLenum mode, GLsizei count, gl42core::GLenum type, const void * indices, GLsizei instancecount)
{
   	return FunctionObjects::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

inline void glDrawElementsInstancedBaseInstance(gl42core::GLenum mode, GLsizei count, gl42core::GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
   	return FunctionObjects::DrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

inline void glDrawElementsInstancedBaseVertex(gl42core::GLenum mode, GLsizei count, gl42core::GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
   	return FunctionObjects::DrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

inline void glDrawElementsInstancedBaseVertexBaseInstance(gl42core::GLenum mode, GLsizei count, gl42core::GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
   	return FunctionObjects::DrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

inline void glDrawRangeElements(gl42core::GLenum mode, GLuint start, GLuint end, GLsizei count, gl42core::GLenum type, const void * indices)
{
   	return FunctionObjects::DrawRangeElements(mode, start, end, count, type, indices);
}

inline void glDrawRangeElementsBaseVertex(gl42core::GLenum mode, GLuint start, GLuint end, GLsizei count, gl42core::GLenum type, const void * indices, GLint basevertex)
{
   	return FunctionObjects::DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

inline void glDrawTransformFeedback(gl42core::GLenum mode, GLuint id)
{
   	return FunctionObjects::DrawTransformFeedback(mode, id);
}

inline void glDrawTransformFeedbackInstanced(gl42core::GLenum mode, GLuint id, GLsizei instancecount)
{
   	return FunctionObjects::DrawTransformFeedbackInstanced(mode, id, instancecount);
}

inline void glDrawTransformFeedbackStream(gl42core::GLenum mode, GLuint id, GLuint stream)
{
   	return FunctionObjects::DrawTransformFeedbackStream(mode, id, stream);
}

inline void glDrawTransformFeedbackStreamInstanced(gl42core::GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
   	return FunctionObjects::DrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

inline void glEnable(gl42core::GLenum cap)
{
   	return FunctionObjects::Enable(cap);
}

inline void glEnableVertexAttribArray(GLuint index)
{
   	return FunctionObjects::EnableVertexAttribArray(index);
}

inline void glEnablei(gl42core::GLenum target, GLuint index)
{
   	return FunctionObjects::Enablei(target, index);
}

inline void glEndConditionalRender()
{
   	return FunctionObjects::EndConditionalRender();
}

inline void glEndQuery(gl42core::GLenum target)
{
   	return FunctionObjects::EndQuery(target);
}

inline void glEndQueryIndexed(gl42core::GLenum target, GLuint index)
{
   	return FunctionObjects::EndQueryIndexed(target, index);
}

inline void glEndTransformFeedback()
{
   	return FunctionObjects::EndTransformFeedback();
}

inline GLsync glFenceSync(gl42core::GLenum condition, gl42core::NotUsedMask flags)
{
   	return FunctionObjects::FenceSync(condition, flags);
}

inline void glFinish()
{
   	return FunctionObjects::Finish();
}

inline void glFlush()
{
   	return FunctionObjects::Flush();
}

inline void glFlushMappedBufferRange(gl42core::GLenum target, GLintptr offset, GLsizeiptr length)
{
   	return FunctionObjects::FlushMappedBufferRange(target, offset, length);
}

inline void glFramebufferRenderbuffer(gl42core::GLenum target, gl42core::GLenum attachment, gl42core::GLenum renderbuffertarget, GLuint renderbuffer)
{
   	return FunctionObjects::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glFramebufferTexture(gl42core::GLenum target, gl42core::GLenum attachment, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture(target, attachment, texture, level);
}

inline void glFramebufferTexture1D(gl42core::GLenum target, gl42core::GLenum attachment, gl42core::GLenum textarget, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture1D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2D(gl42core::GLenum target, gl42core::GLenum attachment, gl42core::GLenum textarget, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture3D(gl42core::GLenum target, gl42core::GLenum attachment, gl42core::GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
   	return FunctionObjects::FramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferTextureLayer(gl42core::GLenum target, gl42core::GLenum attachment, GLuint texture, GLint level, GLint layer)
{
   	return FunctionObjects::FramebufferTextureLayer(target, attachment, texture, level, layer);
}

inline void glFrontFace(gl42core::GLenum mode)
{
   	return FunctionObjects::FrontFace(mode);
}

inline void glGenBuffers(GLsizei n, GLuint * buffers)
{
   	return FunctionObjects::GenBuffers(n, buffers);
}

inline void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
   	return FunctionObjects::GenFramebuffers(n, framebuffers);
}

inline void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
   	return FunctionObjects::GenProgramPipelines(n, pipelines);
}

inline void glGenQueries(GLsizei n, GLuint * ids)
{
   	return FunctionObjects::GenQueries(n, ids);
}

inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
   	return FunctionObjects::GenRenderbuffers(n, renderbuffers);
}

inline void glGenSamplers(GLsizei count, GLuint * samplers)
{
   	return FunctionObjects::GenSamplers(count, samplers);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
   	return FunctionObjects::GenTextures(n, textures);
}

inline void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
   	return FunctionObjects::GenTransformFeedbacks(n, ids);
}

inline void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
   	return FunctionObjects::GenVertexArrays(n, arrays);
}

inline void glGenerateMipmap(gl42core::GLenum target)
{
   	return FunctionObjects::GenerateMipmap(target);
}

inline void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, gl42core::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveSubroutineName(GLuint program, gl42core::GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
   	return FunctionObjects::GetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformName(GLuint program, gl42core::GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
   	return FunctionObjects::GetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformiv(GLuint program, gl42core::GLenum shadertype, GLuint index, gl42core::GLenum pname, GLint * values)
{
   	return FunctionObjects::GetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, gl42core::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetActiveUniform(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
   	return FunctionObjects::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
   	return FunctionObjects::GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
   	return FunctionObjects::GetAttachedShaders(program, maxCount, count, shaders);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetAttribLocation(program, name);
}

inline void glGetBooleani_v(gl42core::GLenum target, GLuint index, GLboolean * data)
{
   	return FunctionObjects::GetBooleani_v(target, index, data);
}

inline void glGetBooleanv(gl42core::GLenum pname, GLboolean * data)
{
   	return FunctionObjects::GetBooleanv(pname, data);
}

inline void glGetBufferParameteri64v(gl42core::GLenum target, gl42core::GLenum pname, GLint64 * params)
{
   	return FunctionObjects::GetBufferParameteri64v(target, pname, params);
}

inline void glGetBufferParameteriv(gl42core::GLenum target, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetBufferParameteriv(target, pname, params);
}

inline void glGetBufferPointerv(gl42core::GLenum target, gl42core::GLenum pname, void ** params)
{
   	return FunctionObjects::GetBufferPointerv(target, pname, params);
}

inline void glGetBufferSubData(gl42core::GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
   	return FunctionObjects::GetBufferSubData(target, offset, size, data);
}

inline void glGetCompressedTexImage(gl42core::GLenum target, GLint level, void * img)
{
   	return FunctionObjects::GetCompressedTexImage(target, level, img);
}

inline void glGetDoublei_v(gl42core::GLenum target, GLuint index, GLdouble * data)
{
   	return FunctionObjects::GetDoublei_v(target, index, data);
}

inline void glGetDoublev(gl42core::GLenum pname, GLdouble * data)
{
   	return FunctionObjects::GetDoublev(pname, data);
}

inline GLenum glGetError()
{
   	return static_cast<gl42core::GLenum>(FunctionObjects::GetError());
}

inline void glGetFloati_v(gl42core::GLenum target, GLuint index, GLfloat * data)
{
   	return FunctionObjects::GetFloati_v(target, index, data);
}

inline void glGetFloatv(gl42core::GLenum pname, GLfloat * data)
{
   	return FunctionObjects::GetFloatv(pname, data);
}

inline GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetFragDataIndex(program, name);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetFragDataLocation(program, name);
}

inline void glGetFramebufferAttachmentParameteriv(gl42core::GLenum target, gl42core::GLenum attachment, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

inline void glGetInteger64i_v(gl42core::GLenum target, GLuint index, GLint64 * data)
{
   	return FunctionObjects::GetInteger64i_v(target, index, data);
}

inline void glGetInteger64v(gl42core::GLenum pname, GLint64 * data)
{
   	return FunctionObjects::GetInteger64v(pname, data);
}

inline void glGetIntegeri_v(gl42core::GLenum target, GLuint index, GLint * data)
{
   	return FunctionObjects::GetIntegeri_v(target, index, data);
}

inline void glGetIntegerv(gl42core::GLenum pname, GLint * data)
{
   	return FunctionObjects::GetIntegerv(pname, data);
}

inline void glGetInternalformativ(gl42core::GLenum target, gl42core::GLenum internalformat, gl42core::GLenum pname, GLsizei bufSize, GLint * params)
{
   	return FunctionObjects::GetInternalformativ(target, internalformat, pname, bufSize, params);
}

inline void glGetMultisamplefv(gl42core::GLenum pname, GLuint index, GLfloat * val)
{
   	return FunctionObjects::GetMultisamplefv(pname, index, val);
}

inline void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, gl42core::GLenum * binaryFormat, void * binary)
{
   	return FunctionObjects::GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetProgramInfoLog(program, bufSize, length, infoLog);
}

inline void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

inline void glGetProgramPipelineiv(GLuint pipeline, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetProgramPipelineiv(pipeline, pname, params);
}

inline void glGetProgramStageiv(GLuint program, gl42core::GLenum shadertype, gl42core::GLenum pname, GLint * values)
{
   	return FunctionObjects::GetProgramStageiv(program, shadertype, pname, values);
}

inline void glGetProgramiv(GLuint program, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetProgramiv(program, pname, params);
}

inline void glGetQueryIndexediv(gl42core::GLenum target, GLuint index, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryIndexediv(target, index, pname, params);
}

inline void glGetQueryObjecti64v(GLuint id, gl42core::GLenum pname, GLint64 * params)
{
   	return FunctionObjects::GetQueryObjecti64v(id, pname, params);
}

inline void glGetQueryObjectiv(GLuint id, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryObjectiv(id, pname, params);
}

inline void glGetQueryObjectui64v(GLuint id, gl42core::GLenum pname, GLuint64 * params)
{
   	return FunctionObjects::GetQueryObjectui64v(id, pname, params);
}

inline void glGetQueryObjectuiv(GLuint id, gl42core::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetQueryObjectuiv(id, pname, params);
}

inline void glGetQueryiv(gl42core::GLenum target, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryiv(target, pname, params);
}

inline void glGetRenderbufferParameteriv(gl42core::GLenum target, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetRenderbufferParameteriv(target, pname, params);
}

inline void glGetSamplerParameterIiv(GLuint sampler, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetSamplerParameterIiv(sampler, pname, params);
}

inline void glGetSamplerParameterIuiv(GLuint sampler, gl42core::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetSamplerParameterIuiv(sampler, pname, params);
}

inline void glGetSamplerParameterfv(GLuint sampler, gl42core::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetSamplerParameterfv(sampler, pname, params);
}

inline void glGetSamplerParameteriv(GLuint sampler, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetSamplerParameteriv(sampler, pname, params);
}

inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

inline void glGetShaderPrecisionFormat(gl42core::GLenum shadertype, gl42core::GLenum precisiontype, GLint * range, GLint * precision)
{
   	return FunctionObjects::GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
   	return FunctionObjects::GetShaderSource(shader, bufSize, length, source);
}

inline void glGetShaderiv(GLuint shader, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetShaderiv(shader, pname, params);
}

inline const GLubyte * glGetString(gl42core::GLenum name)
{
   	return FunctionObjects::GetString(name);
}

inline const GLubyte * glGetStringi(gl42core::GLenum name, GLuint index)
{
   	return FunctionObjects::GetStringi(name, index);
}

inline GLuint glGetSubroutineIndex(GLuint program, gl42core::GLenum shadertype, const GLchar * name)
{
   	return FunctionObjects::GetSubroutineIndex(program, shadertype, name);
}

inline GLint glGetSubroutineUniformLocation(GLuint program, gl42core::GLenum shadertype, const GLchar * name)
{
   	return FunctionObjects::GetSubroutineUniformLocation(program, shadertype, name);
}

inline void glGetSynciv(GLsync sync, gl42core::GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
   	return FunctionObjects::GetSynciv(sync, pname, bufSize, length, values);
}

inline void glGetTexImage(gl42core::GLenum target, GLint level, gl42core::GLenum format, gl42core::GLenum type, void * pixels)
{
   	return FunctionObjects::GetTexImage(target, level, format, type, pixels);
}

inline void glGetTexLevelParameterfv(gl42core::GLenum target, GLint level, gl42core::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexLevelParameterfv(target, level, pname, params);
}

inline void glGetTexLevelParameteriv(gl42core::GLenum target, GLint level, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexLevelParameteriv(target, level, pname, params);
}

inline void glGetTexParameterIiv(gl42core::GLenum target, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameterIiv(target, pname, params);
}

inline void glGetTexParameterIuiv(gl42core::GLenum target, gl42core::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetTexParameterIuiv(target, pname, params);
}

inline void glGetTexParameterfv(gl42core::GLenum target, gl42core::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexParameterfv(target, pname, params);
}

inline void glGetTexParameteriv(gl42core::GLenum target, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameteriv(target, pname, params);
}

inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, gl42core::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

inline GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
   	return FunctionObjects::GetUniformBlockIndex(program, uniformBlockName);
}

inline void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
   	return FunctionObjects::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

inline GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetUniformLocation(program, name);
}

inline void glGetUniformSubroutineuiv(gl42core::GLenum shadertype, GLint location, GLuint * params)
{
   	return FunctionObjects::GetUniformSubroutineuiv(shadertype, location, params);
}

inline void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
   	return FunctionObjects::GetUniformdv(program, location, params);
}

inline void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
   	return FunctionObjects::GetUniformfv(program, location, params);
}

inline void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
   	return FunctionObjects::GetUniformiv(program, location, params);
}

inline void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
   	return FunctionObjects::GetUniformuiv(program, location, params);
}

inline void glGetVertexAttribIiv(GLuint index, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetVertexAttribIiv(index, pname, params);
}

inline void glGetVertexAttribIuiv(GLuint index, gl42core::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetVertexAttribIuiv(index, pname, params);
}

inline void glGetVertexAttribLdv(GLuint index, gl42core::GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetVertexAttribLdv(index, pname, params);
}

inline void glGetVertexAttribPointerv(GLuint index, gl42core::GLenum pname, void ** pointer)
{
   	return FunctionObjects::GetVertexAttribPointerv(index, pname, pointer);
}

inline void glGetVertexAttribdv(GLuint index, gl42core::GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetVertexAttribdv(index, pname, params);
}

inline void glGetVertexAttribfv(GLuint index, gl42core::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetVertexAttribfv(index, pname, params);
}

inline void glGetVertexAttribiv(GLuint index, gl42core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetVertexAttribiv(index, pname, params);
}

inline void glHint(gl42core::GLenum target, gl42core::GLenum mode)
{
   	return FunctionObjects::Hint(target, mode);
}

inline GLboolean glIsBuffer(GLuint buffer)
{
   	return FunctionObjects::IsBuffer(buffer);
}

inline GLboolean glIsEnabled(gl42core::GLenum cap)
{
   	return FunctionObjects::IsEnabled(cap);
}

inline GLboolean glIsEnabledi(gl42core::GLenum target, GLuint index)
{
   	return FunctionObjects::IsEnabledi(target, index);
}

inline GLboolean glIsFramebuffer(GLuint framebuffer)
{
   	return FunctionObjects::IsFramebuffer(framebuffer);
}

inline GLboolean glIsProgram(GLuint program)
{
   	return FunctionObjects::IsProgram(program);
}

inline GLboolean glIsProgramPipeline(GLuint pipeline)
{
   	return FunctionObjects::IsProgramPipeline(pipeline);
}

inline GLboolean glIsQuery(GLuint id)
{
   	return FunctionObjects::IsQuery(id);
}

inline GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
   	return FunctionObjects::IsRenderbuffer(renderbuffer);
}

inline GLboolean glIsSampler(GLuint sampler)
{
   	return FunctionObjects::IsSampler(sampler);
}

inline GLboolean glIsShader(GLuint shader)
{
   	return FunctionObjects::IsShader(shader);
}

inline GLboolean glIsSync(GLsync sync)
{
   	return FunctionObjects::IsSync(sync);
}

inline GLboolean glIsTexture(GLuint texture)
{
   	return FunctionObjects::IsTexture(texture);
}

inline GLboolean glIsTransformFeedback(GLuint id)
{
   	return FunctionObjects::IsTransformFeedback(id);
}

inline GLboolean glIsVertexArray(GLuint array)
{
   	return FunctionObjects::IsVertexArray(array);
}

inline void glLineWidth(GLfloat width)
{
   	return FunctionObjects::LineWidth(width);
}

inline void glLinkProgram(GLuint program)
{
   	return FunctionObjects::LinkProgram(program);
}

inline void glLogicOp(gl42core::GLenum opcode)
{
   	return FunctionObjects::LogicOp(opcode);
}

inline void * glMapBuffer(gl42core::GLenum target, gl42core::GLenum access)
{
   	return FunctionObjects::MapBuffer(target, access);
}

inline void * glMapBufferRange(gl42core::GLenum target, GLintptr offset, GLsizeiptr length, gl42core::BufferAccessMask access)
{
   	return FunctionObjects::MapBufferRange(target, offset, length, access);
}

inline void glMemoryBarrier(gl42core::MemoryBarrierMask barriers)
{
   	return FunctionObjects::MemoryBarrier(barriers);
}

inline void glMinSampleShading(GLfloat value)
{
   	return FunctionObjects::MinSampleShading(value);
}

inline void glMultiDrawArrays(gl42core::GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawArrays(mode, first, count, drawcount);
}

inline void glMultiDrawElements(gl42core::GLenum mode, const GLsizei * count, gl42core::GLenum type, const void *const* indices, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawElements(mode, count, type, indices, drawcount);
}

inline void glMultiDrawElementsBaseVertex(gl42core::GLenum mode, const GLsizei * count, gl42core::GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
   	return FunctionObjects::MultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

inline void glMultiTexCoordP1ui(gl42core::GLenum texture, gl42core::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP1ui(texture, type, coords);
}

inline void glMultiTexCoordP1uiv(gl42core::GLenum texture, gl42core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP1uiv(texture, type, coords);
}

inline void glMultiTexCoordP2ui(gl42core::GLenum texture, gl42core::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP2ui(texture, type, coords);
}

inline void glMultiTexCoordP2uiv(gl42core::GLenum texture, gl42core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP2uiv(texture, type, coords);
}

inline void glMultiTexCoordP3ui(gl42core::GLenum texture, gl42core::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP3ui(texture, type, coords);
}

inline void glMultiTexCoordP3uiv(gl42core::GLenum texture, gl42core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP3uiv(texture, type, coords);
}

inline void glMultiTexCoordP4ui(gl42core::GLenum texture, gl42core::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP4ui(texture, type, coords);
}

inline void glMultiTexCoordP4uiv(gl42core::GLenum texture, gl42core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP4uiv(texture, type, coords);
}

inline void glNormalP3ui(gl42core::GLenum type, GLuint coords)
{
   	return FunctionObjects::NormalP3ui(type, coords);
}

inline void glNormalP3uiv(gl42core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::NormalP3uiv(type, coords);
}

inline void glPatchParameterfv(gl42core::GLenum pname, const GLfloat * values)
{
   	return FunctionObjects::PatchParameterfv(pname, values);
}

inline void glPatchParameteri(gl42core::GLenum pname, GLint value)
{
   	return FunctionObjects::PatchParameteri(pname, value);
}

inline void glPauseTransformFeedback()
{
   	return FunctionObjects::PauseTransformFeedback();
}

inline void glPixelStoref(gl42core::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PixelStoref(pname, param);
}

inline void glPixelStorei(gl42core::GLenum pname, GLint param)
{
   	return FunctionObjects::PixelStorei(pname, param);
}

inline void glPointParameterf(gl42core::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PointParameterf(pname, param);
}

inline void glPointParameterfv(gl42core::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::PointParameterfv(pname, params);
}

inline void glPointParameteri(gl42core::GLenum pname, GLint param)
{
   	return FunctionObjects::PointParameteri(pname, param);
}

inline void glPointParameteriv(gl42core::GLenum pname, const GLint * params)
{
   	return FunctionObjects::PointParameteriv(pname, params);
}

inline void glPointSize(GLfloat size)
{
   	return FunctionObjects::PointSize(size);
}

inline void glPolygonMode(gl42core::GLenum face, gl42core::GLenum mode)
{
   	return FunctionObjects::PolygonMode(face, mode);
}

inline void glPolygonOffset(GLfloat factor, GLfloat units)
{
   	return FunctionObjects::PolygonOffset(factor, units);
}

inline void glPrimitiveRestartIndex(GLuint index)
{
   	return FunctionObjects::PrimitiveRestartIndex(index);
}

inline void glProgramBinary(GLuint program, gl42core::GLenum binaryFormat, const void * binary, GLsizei length)
{
   	return FunctionObjects::ProgramBinary(program, binaryFormat, binary, length);
}

inline void glProgramParameteri(GLuint program, gl42core::GLenum pname, GLint value)
{
   	return FunctionObjects::ProgramParameteri(program, pname, value);
}

inline void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
   	return FunctionObjects::ProgramUniform1d(program, location, v0);
}

inline void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniform1dv(program, location, count, value);
}

inline void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
   	return FunctionObjects::ProgramUniform1f(program, location, v0);
}

inline void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniform1fv(program, location, count, value);
}

inline void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
   	return FunctionObjects::ProgramUniform1i(program, location, v0);
}

inline void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::ProgramUniform1iv(program, location, count, value);
}

inline void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
   	return FunctionObjects::ProgramUniform1ui(program, location, v0);
}

inline void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::ProgramUniform1uiv(program, location, count, value);
}

inline void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
   	return FunctionObjects::ProgramUniform2d(program, location, v0, v1);
}

inline void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniform2dv(program, location, count, value);
}

inline void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
   	return FunctionObjects::ProgramUniform2f(program, location, v0, v1);
}

inline void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniform2fv(program, location, count, value);
}

inline void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
   	return FunctionObjects::ProgramUniform2i(program, location, v0, v1);
}

inline void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::ProgramUniform2iv(program, location, count, value);
}

inline void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
   	return FunctionObjects::ProgramUniform2ui(program, location, v0, v1);
}

inline void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::ProgramUniform2uiv(program, location, count, value);
}

inline void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
   	return FunctionObjects::ProgramUniform3d(program, location, v0, v1, v2);
}

inline void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniform3dv(program, location, count, value);
}

inline void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
   	return FunctionObjects::ProgramUniform3f(program, location, v0, v1, v2);
}

inline void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniform3fv(program, location, count, value);
}

inline void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
   	return FunctionObjects::ProgramUniform3i(program, location, v0, v1, v2);
}

inline void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::ProgramUniform3iv(program, location, count, value);
}

inline void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
   	return FunctionObjects::ProgramUniform3ui(program, location, v0, v1, v2);
}

inline void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::ProgramUniform3uiv(program, location, count, value);
}

inline void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
   	return FunctionObjects::ProgramUniform4d(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniform4dv(program, location, count, value);
}

inline void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
   	return FunctionObjects::ProgramUniform4f(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniform4fv(program, location, count, value);
}

inline void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
   	return FunctionObjects::ProgramUniform4i(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::ProgramUniform4iv(program, location, count, value);
}

inline void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
   	return FunctionObjects::ProgramUniform4ui(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::ProgramUniform4uiv(program, location, count, value);
}

inline void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

inline void glProvokingVertex(gl42core::GLenum mode)
{
   	return FunctionObjects::ProvokingVertex(mode);
}

inline void glQueryCounter(GLuint id, gl42core::GLenum target)
{
   	return FunctionObjects::QueryCounter(id, target);
}

inline void glReadBuffer(gl42core::GLenum mode)
{
   	return FunctionObjects::ReadBuffer(mode);
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, gl42core::GLenum format, gl42core::GLenum type, void * pixels)
{
   	return FunctionObjects::ReadPixels(x, y, width, height, format, type, pixels);
}

inline void glReleaseShaderCompiler()
{
   	return FunctionObjects::ReleaseShaderCompiler();
}

inline void glRenderbufferStorage(gl42core::GLenum target, gl42core::GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::RenderbufferStorage(target, internalformat, width, height);
}

inline void glRenderbufferStorageMultisample(gl42core::GLenum target, GLsizei samples, gl42core::GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

inline void glResumeTransformFeedback()
{
   	return FunctionObjects::ResumeTransformFeedback();
}

inline void glSampleCoverage(GLfloat value, GLboolean invert)
{
   	return FunctionObjects::SampleCoverage(value, invert);
}

inline void glSampleMaski(GLuint maskNumber, gl::GLbitfield mask)
{
   	return FunctionObjects::SampleMaski(maskNumber, mask);
}

inline void glSamplerParameterIiv(GLuint sampler, gl42core::GLenum pname, const GLint * param)
{
   	return FunctionObjects::SamplerParameterIiv(sampler, pname, param);
}

inline void glSamplerParameterIuiv(GLuint sampler, gl42core::GLenum pname, const GLuint * param)
{
   	return FunctionObjects::SamplerParameterIuiv(sampler, pname, param);
}

inline void glSamplerParameterf(GLuint sampler, gl42core::GLenum pname, GLfloat param)
{
   	return FunctionObjects::SamplerParameterf(sampler, pname, param);
}

inline void glSamplerParameterfv(GLuint sampler, gl42core::GLenum pname, const GLfloat * param)
{
   	return FunctionObjects::SamplerParameterfv(sampler, pname, param);
}

inline void glSamplerParameteri(GLuint sampler, gl42core::GLenum pname, GLint param)
{
   	return FunctionObjects::SamplerParameteri(sampler, pname, param);
}

inline void glSamplerParameteriv(GLuint sampler, gl42core::GLenum pname, const GLint * param)
{
   	return FunctionObjects::SamplerParameteriv(sampler, pname, param);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Scissor(x, y, width, height);
}

inline void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
   	return FunctionObjects::ScissorArrayv(first, count, v);
}

inline void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
   	return FunctionObjects::ScissorIndexed(index, left, bottom, width, height);
}

inline void glScissorIndexedv(GLuint index, const GLint * v)
{
   	return FunctionObjects::ScissorIndexedv(index, v);
}

inline void glSecondaryColorP3ui(gl42core::GLenum type, GLuint color)
{
   	return FunctionObjects::SecondaryColorP3ui(type, color);
}

inline void glSecondaryColorP3uiv(gl42core::GLenum type, const GLuint * color)
{
   	return FunctionObjects::SecondaryColorP3uiv(type, color);
}

inline void glShaderBinary(GLsizei count, const GLuint * shaders, gl42core::GLenum binaryformat, const void * binary, GLsizei length)
{
   	return FunctionObjects::ShaderBinary(count, shaders, binaryformat, binary, length);
}

inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
   	return FunctionObjects::ShaderSource(shader, count, string, length);
}

inline void glStencilFunc(gl42core::GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFunc(func, ref, mask);
}

inline void glStencilFuncSeparate(gl42core::GLenum face, gl42core::GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFuncSeparate(face, func, ref, mask);
}

inline void glStencilMask(GLuint mask)
{
   	return FunctionObjects::StencilMask(mask);
}

inline void glStencilMaskSeparate(gl42core::GLenum face, GLuint mask)
{
   	return FunctionObjects::StencilMaskSeparate(face, mask);
}

inline void glStencilOp(gl42core::GLenum fail, gl42core::GLenum zfail, gl42core::GLenum zpass)
{
   	return FunctionObjects::StencilOp(fail, zfail, zpass);
}

inline void glStencilOpSeparate(gl42core::GLenum face, gl42core::GLenum sfail, gl42core::GLenum dpfail, gl42core::GLenum dppass)
{
   	return FunctionObjects::StencilOpSeparate(face, sfail, dpfail, dppass);
}

inline void glTexBuffer(gl42core::GLenum target, gl42core::GLenum internalformat, GLuint buffer)
{
   	return FunctionObjects::TexBuffer(target, internalformat, buffer);
}

inline void glTexCoordP1ui(gl42core::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP1ui(type, coords);
}

inline void glTexCoordP1uiv(gl42core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP1uiv(type, coords);
}

inline void glTexCoordP2ui(gl42core::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP2ui(type, coords);
}

inline void glTexCoordP2uiv(gl42core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP2uiv(type, coords);
}

inline void glTexCoordP3ui(gl42core::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP3ui(type, coords);
}

inline void glTexCoordP3uiv(gl42core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP3uiv(type, coords);
}

inline void glTexCoordP4ui(gl42core::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP4ui(type, coords);
}

inline void glTexCoordP4uiv(gl42core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP4uiv(type, coords);
}

inline void glTexImage1D(gl42core::GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, gl42core::GLenum format, gl42core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

inline void glTexImage2D(gl42core::GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, gl42core::GLenum format, gl42core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTexImage2DMultisample(gl42core::GLenum target, GLsizei samples, gl42core::GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
   	return FunctionObjects::TexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexImage3D(gl42core::GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, gl42core::GLenum format, gl42core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexImage3DMultisample(gl42core::GLenum target, GLsizei samples, gl42core::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
   	return FunctionObjects::TexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTexParameterIiv(gl42core::GLenum target, gl42core::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameterIiv(target, pname, params);
}

inline void glTexParameterIuiv(gl42core::GLenum target, gl42core::GLenum pname, const GLuint * params)
{
   	return FunctionObjects::TexParameterIuiv(target, pname, params);
}

inline void glTexParameterf(gl42core::GLenum target, gl42core::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexParameterf(target, pname, param);
}

inline void glTexParameterfv(gl42core::GLenum target, gl42core::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexParameterfv(target, pname, params);
}

inline void glTexParameteri(gl42core::GLenum target, gl42core::GLenum pname, GLint param)
{
   	return FunctionObjects::TexParameteri(target, pname, param);
}

inline void glTexParameteriv(gl42core::GLenum target, gl42core::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameteriv(target, pname, params);
}

inline void glTexStorage1D(gl42core::GLenum target, GLsizei levels, gl42core::GLenum internalformat, GLsizei width)
{
   	return FunctionObjects::TexStorage1D(target, levels, internalformat, width);
}

inline void glTexStorage2D(gl42core::GLenum target, GLsizei levels, gl42core::GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::TexStorage2D(target, levels, internalformat, width, height);
}

inline void glTexStorage3D(gl42core::GLenum target, GLsizei levels, gl42core::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
   	return FunctionObjects::TexStorage3D(target, levels, internalformat, width, height, depth);
}

inline void glTexSubImage1D(gl42core::GLenum target, GLint level, GLint xoffset, GLsizei width, gl42core::GLenum format, gl42core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

inline void glTexSubImage2D(gl42core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, gl42core::GLenum format, gl42core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTexSubImage3D(gl42core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, gl42core::GLenum format, gl42core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, gl42core::GLenum bufferMode)
{
   	return FunctionObjects::TransformFeedbackVaryings(program, count, varyings, bufferMode);
}

inline void glUniform1d(GLint location, GLdouble x)
{
   	return FunctionObjects::Uniform1d(location, x);
}

inline void glUniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::Uniform1dv(location, count, value);
}

inline void glUniform1f(GLint location, GLfloat v0)
{
   	return FunctionObjects::Uniform1f(location, v0);
}

inline void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform1fv(location, count, value);
}

inline void glUniform1i(GLint location, GLint v0)
{
   	return FunctionObjects::Uniform1i(location, v0);
}

inline void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform1iv(location, count, value);
}

inline void glUniform1ui(GLint location, GLuint v0)
{
   	return FunctionObjects::Uniform1ui(location, v0);
}

inline void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform1uiv(location, count, value);
}

inline void glUniform2d(GLint location, GLdouble x, GLdouble y)
{
   	return FunctionObjects::Uniform2d(location, x, y);
}

inline void glUniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::Uniform2dv(location, count, value);
}

inline void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
   	return FunctionObjects::Uniform2f(location, v0, v1);
}

inline void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform2fv(location, count, value);
}

inline void glUniform2i(GLint location, GLint v0, GLint v1)
{
   	return FunctionObjects::Uniform2i(location, v0, v1);
}

inline void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform2iv(location, count, value);
}

inline void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
   	return FunctionObjects::Uniform2ui(location, v0, v1);
}

inline void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform2uiv(location, count, value);
}

inline void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Uniform3d(location, x, y, z);
}

inline void glUniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::Uniform3dv(location, count, value);
}

inline void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
   	return FunctionObjects::Uniform3f(location, v0, v1, v2);
}

inline void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform3fv(location, count, value);
}

inline void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
   	return FunctionObjects::Uniform3i(location, v0, v1, v2);
}

inline void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform3iv(location, count, value);
}

inline void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
   	return FunctionObjects::Uniform3ui(location, v0, v1, v2);
}

inline void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform3uiv(location, count, value);
}

inline void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::Uniform4d(location, x, y, z, w);
}

inline void glUniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::Uniform4dv(location, count, value);
}

inline void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
   	return FunctionObjects::Uniform4f(location, v0, v1, v2, v3);
}

inline void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform4fv(location, count, value);
}

inline void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
   	return FunctionObjects::Uniform4i(location, v0, v1, v2, v3);
}

inline void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform4iv(location, count, value);
}

inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
   	return FunctionObjects::Uniform4ui(location, v0, v1, v2, v3);
}

inline void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform4uiv(location, count, value);
}

inline void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
   	return FunctionObjects::UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

inline void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix2dv(location, count, transpose, value);
}

inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix2fv(location, count, transpose, value);
}

inline void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix2x3dv(location, count, transpose, value);
}

inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix2x3fv(location, count, transpose, value);
}

inline void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix2x4dv(location, count, transpose, value);
}

inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix2x4fv(location, count, transpose, value);
}

inline void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix3dv(location, count, transpose, value);
}

inline void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix3fv(location, count, transpose, value);
}

inline void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix3x2dv(location, count, transpose, value);
}

inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix3x2fv(location, count, transpose, value);
}

inline void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix3x4dv(location, count, transpose, value);
}

inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix3x4fv(location, count, transpose, value);
}

inline void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix4dv(location, count, transpose, value);
}

inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix4fv(location, count, transpose, value);
}

inline void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix4x2dv(location, count, transpose, value);
}

inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix4x2fv(location, count, transpose, value);
}

inline void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix4x3dv(location, count, transpose, value);
}

inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix4x3fv(location, count, transpose, value);
}

inline void glUniformSubroutinesuiv(gl42core::GLenum shadertype, GLsizei count, const GLuint * indices)
{
   	return FunctionObjects::UniformSubroutinesuiv(shadertype, count, indices);
}

inline GLboolean glUnmapBuffer(gl42core::GLenum target)
{
   	return FunctionObjects::UnmapBuffer(target);
}

inline void glUseProgram(GLuint program)
{
   	return FunctionObjects::UseProgram(program);
}

inline void glUseProgramStages(GLuint pipeline, gl42core::UseProgramStageMask stages, GLuint program)
{
   	return FunctionObjects::UseProgramStages(pipeline, stages, program);
}

inline void glValidateProgram(GLuint program)
{
   	return FunctionObjects::ValidateProgram(program);
}

inline void glValidateProgramPipeline(GLuint pipeline)
{
   	return FunctionObjects::ValidateProgramPipeline(pipeline);
}

inline void glVertexAttrib1d(GLuint index, GLdouble x)
{
   	return FunctionObjects::VertexAttrib1d(index, x);
}

inline void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib1dv(index, v);
}

inline void glVertexAttrib1f(GLuint index, GLfloat x)
{
   	return FunctionObjects::VertexAttrib1f(index, x);
}

inline void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib1fv(index, v);
}

inline void glVertexAttrib1s(GLuint index, GLshort x)
{
   	return FunctionObjects::VertexAttrib1s(index, x);
}

inline void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib1sv(index, v);
}

inline void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
   	return FunctionObjects::VertexAttrib2d(index, x, y);
}

inline void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib2dv(index, v);
}

inline void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
   	return FunctionObjects::VertexAttrib2f(index, x, y);
}

inline void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib2fv(index, v);
}

inline void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
   	return FunctionObjects::VertexAttrib2s(index, x, y);
}

inline void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib2sv(index, v);
}

inline void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::VertexAttrib3d(index, x, y, z);
}

inline void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib3dv(index, v);
}

inline void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::VertexAttrib3f(index, x, y, z);
}

inline void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib3fv(index, v);
}

inline void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::VertexAttrib3s(index, x, y, z);
}

inline void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib3sv(index, v);
}

inline void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
   	return FunctionObjects::VertexAttrib4Nbv(index, v);
}

inline void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttrib4Niv(index, v);
}

inline void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib4Nsv(index, v);
}

inline void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
   	return FunctionObjects::VertexAttrib4Nub(index, x, y, z, w);
}

inline void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
   	return FunctionObjects::VertexAttrib4Nubv(index, v);
}

inline void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttrib4Nuiv(index, v);
}

inline void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
   	return FunctionObjects::VertexAttrib4Nusv(index, v);
}

inline void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
   	return FunctionObjects::VertexAttrib4bv(index, v);
}

inline void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::VertexAttrib4d(index, x, y, z, w);
}

inline void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib4dv(index, v);
}

inline void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
   	return FunctionObjects::VertexAttrib4f(index, x, y, z, w);
}

inline void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib4fv(index, v);
}

inline void glVertexAttrib4iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttrib4iv(index, v);
}

inline void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
   	return FunctionObjects::VertexAttrib4s(index, x, y, z, w);
}

inline void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib4sv(index, v);
}

inline void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
   	return FunctionObjects::VertexAttrib4ubv(index, v);
}

inline void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttrib4uiv(index, v);
}

inline void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
   	return FunctionObjects::VertexAttrib4usv(index, v);
}

inline void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
   	return FunctionObjects::VertexAttribDivisor(index, divisor);
}

inline void glVertexAttribI1i(GLuint index, GLint x)
{
   	return FunctionObjects::VertexAttribI1i(index, x);
}

inline void glVertexAttribI1iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI1iv(index, v);
}

inline void glVertexAttribI1ui(GLuint index, GLuint x)
{
   	return FunctionObjects::VertexAttribI1ui(index, x);
}

inline void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI1uiv(index, v);
}

inline void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
   	return FunctionObjects::VertexAttribI2i(index, x, y);
}

inline void glVertexAttribI2iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI2iv(index, v);
}

inline void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
   	return FunctionObjects::VertexAttribI2ui(index, x, y);
}

inline void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI2uiv(index, v);
}

inline void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
   	return FunctionObjects::VertexAttribI3i(index, x, y, z);
}

inline void glVertexAttribI3iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI3iv(index, v);
}

inline void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
   	return FunctionObjects::VertexAttribI3ui(index, x, y, z);
}

inline void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI3uiv(index, v);
}

inline void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
   	return FunctionObjects::VertexAttribI4bv(index, v);
}

inline void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
   	return FunctionObjects::VertexAttribI4i(index, x, y, z, w);
}

inline void glVertexAttribI4iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI4iv(index, v);
}

inline void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttribI4sv(index, v);
}

inline void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
   	return FunctionObjects::VertexAttribI4ubv(index, v);
}

inline void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
   	return FunctionObjects::VertexAttribI4ui(index, x, y, z, w);
}

inline void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI4uiv(index, v);
}

inline void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
   	return FunctionObjects::VertexAttribI4usv(index, v);
}

inline void glVertexAttribIPointer(GLuint index, GLint size, gl42core::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribIPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribL1d(GLuint index, GLdouble x)
{
   	return FunctionObjects::VertexAttribL1d(index, x);
}

inline void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttribL1dv(index, v);
}

inline void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
   	return FunctionObjects::VertexAttribL2d(index, x, y);
}

inline void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttribL2dv(index, v);
}

inline void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::VertexAttribL3d(index, x, y, z);
}

inline void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttribL3dv(index, v);
}

inline void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::VertexAttribL4d(index, x, y, z, w);
}

inline void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttribL4dv(index, v);
}

inline void glVertexAttribLPointer(GLuint index, GLint size, gl42core::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribLPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribP1ui(GLuint index, gl42core::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP1ui(index, type, normalized, value);
}

inline void glVertexAttribP1uiv(GLuint index, gl42core::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP1uiv(index, type, normalized, value);
}

inline void glVertexAttribP2ui(GLuint index, gl42core::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP2ui(index, type, normalized, value);
}

inline void glVertexAttribP2uiv(GLuint index, gl42core::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP2uiv(index, type, normalized, value);
}

inline void glVertexAttribP3ui(GLuint index, gl42core::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP3ui(index, type, normalized, value);
}

inline void glVertexAttribP3uiv(GLuint index, gl42core::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP3uiv(index, type, normalized, value);
}

inline void glVertexAttribP4ui(GLuint index, gl42core::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP4ui(index, type, normalized, value);
}

inline void glVertexAttribP4uiv(GLuint index, gl42core::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP4uiv(index, type, normalized, value);
}

inline void glVertexAttribPointer(GLuint index, GLint size, gl42core::GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

inline void glVertexP2ui(gl42core::GLenum type, GLuint value)
{
   	return FunctionObjects::VertexP2ui(type, value);
}

inline void glVertexP2uiv(gl42core::GLenum type, const GLuint * value)
{
   	return FunctionObjects::VertexP2uiv(type, value);
}

inline void glVertexP3ui(gl42core::GLenum type, GLuint value)
{
   	return FunctionObjects::VertexP3ui(type, value);
}

inline void glVertexP3uiv(gl42core::GLenum type, const GLuint * value)
{
   	return FunctionObjects::VertexP3uiv(type, value);
}

inline void glVertexP4ui(gl42core::GLenum type, GLuint value)
{
   	return FunctionObjects::VertexP4ui(type, value);
}

inline void glVertexP4uiv(gl42core::GLenum type, const GLuint * value)
{
   	return FunctionObjects::VertexP4uiv(type, value);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Viewport(x, y, width, height);
}

inline void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
   	return FunctionObjects::ViewportArrayv(first, count, v);
}

inline void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
   	return FunctionObjects::ViewportIndexedf(index, x, y, w, h);
}

inline void glViewportIndexedfv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::ViewportIndexedfv(index, v);
}

inline void glWaitSync(GLsync sync, gl42core::NotUsedMask flags, GLuint64 timeout)
{
   	return FunctionObjects::WaitSync(sync, flags, timeout);
}


} // namespace gl42core
