/*
 *  Copyright (c) 2015, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once

#include <string>
#include <sys/time.h>
#include <vector>

namespace facebook { namespace memcache {

/**
 * Return a list of strings that describes the flags present in
 * "flags" argument.
 */
std::vector<std::string> describeFlags(uint64_t flags);

std::string printTimeAbsolute(const struct timeval& ts);
std::string printTimeDiff(const struct timeval& ts, struct timeval& prev);
std::string printTimeOffset(const struct timeval& ts, struct timeval& prev);

}} // facebook::memcache
