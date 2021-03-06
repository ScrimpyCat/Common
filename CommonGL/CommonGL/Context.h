/*
 *  Copyright (c) 2011, 2013, Stefan Johnson
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without modification,
 *  are permitted provided that the following conditions are met:
 *
 *  1. Redistributions of source code must retain the above copyright notice, this list
 *     of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright notice, this
 *     list of conditions and the following disclaimer in the documentation and/or other
 *     materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef CommonGL_Context_h
#define CommonGL_Context_h

#import <CommonC/Platform.h>
#import <CommonGL/Defined.h>

#if CC_PLATFORM_OS_X
typedef CGLContextObj CCGLContext;
#elif CC_PLATFORM_IOS
typedef EAGLContext *CCGLContext;
#else
typedef void *CCGLContext;
#endif


CCGLContext CCGLContextRetain(CCGLContext Context);
void CCGLContextRelease(CCGLContext Context);
CCGLContext CCGLContextGetCurrent(void);
_Bool CCGLContextSetCurrent(CCGLContext Context);
_Bool CCGLContextTryLock(CCGLContext Context);
void CCGLContextLock(CCGLContext Context);
void CCGLContextUnlock(CCGLContext Context);
id CCGLContextGetAssociatedObject(CCGLContext Context, void *Key);
void CCGLContextSetAssociatedObject(CCGLContext Context, void *Key, id Object);

#endif
