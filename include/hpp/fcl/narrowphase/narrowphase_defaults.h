/*
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2024, INRIA
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Open Source Robotics Foundation nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/// This file defines different macros used to characterize the default behavior
/// of the narrowphase algorithms GJK and EPA.

#ifndef HPP_FCL_NARROWPHASE_DEFAULTS
#define HPP_FCL_NARROWPHASE_DEFAULTS

/// GJK
#define GJK_DEFAULT_MAX_ITERATIONS 128
#define GJK_DEFAULT_TOLERANCE 1e-6
/// Note: if the considered shapes are on the order of the meter, and the
/// convergence criterion of GJK is the default VDB criterion,
/// setting a tolerance of 1e-6 on the GJK algorithm makes it precise up to
/// the micro-meter.
/// The same is true for EPA.
#define GJK_MINIMUM_TOLERANCE 1e-6

/// EPA
#define EPA_DEFAULT_MAX_ITERATIONS 255
#define EPA_DEFAULT_TOLERANCE 1e-6
#define EPA_MINIMUM_TOLERANCE 1e-6
#define EPA_DEFAULT_MAX_FACES 128
#define EPA_DEFAULT_MAX_VERTICES 64

#endif  // HPP_FCL_NARROWPHASE_DEFAULTS
