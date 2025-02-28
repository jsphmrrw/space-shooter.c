////////////////////////////////////////////////////////////////////////////////////
// The MIT License (MIT)
// 
// Copyright (c) 2021 Tarek Sherif
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
////////////////////////////////////////////////////////////////////////////////////

#ifndef _DEBUG_H_
#define _DEBUG_H_

#include "platform-interface.h"

//////////////////////////////////////////////////////////////////
// Debug helpers that only run in a debug build.
//
// - DEBUG_LOG(): Print a debug message.
// - DEBUG_ASSERT(): If `condition` evaluates to false, print
// 		a debug message and crash the program.
//////////////////////////////////////////////////////////////////

#ifdef SPACE_SHOOTER_DEBUG
#define DEBUG_LOG(message) platform_debugLog(message)
#define DEBUG_ASSERT(condition, message) if (!(condition)) { DEBUG_LOG(message); *(int *)0 = 0;}
#else
#define DEBUG_LOG(message)
#define DEBUG_ASSERT(condition, message)
#endif

#endif