/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_RENDERSCRIPT_TOOLKIT_UTILS_H
#define ANDROID_RENDERSCRIPT_TOOLKIT_UTILS_H

#include <android/log.h>

#define ALOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define ALOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define ALOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

namespace android {
namespace renderscript {

/**
 * Returns true if the processor we're running on supports the SIMD instructions that are
 * used in our assembly code.
 */
bool cpuSupportsSimd();

inline size_t divideRoundingUp(size_t a, size_t b) {
    return a / b + (a % b == 0 ? 0 : 1);
}

}  // namespace renderscript
}  // namespace android

#endif  // ANDROID_RENDERSCRIPT_TOOLKIT_UTILS_H
