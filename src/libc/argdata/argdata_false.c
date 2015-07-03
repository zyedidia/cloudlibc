// Copyright (c) 2015 Nuxi, https://nuxi.nl/
//
// This file is distrbuted under a 2-clause BSD license.
// See the LICENSE file for details.

#include <common/argdata.h>

#include <argdata.h>
#include <stdint.h>

static uint8_t buf_false[] = {ADT_BOOL};

const argdata_t argdata_false = {
    .type = AD_BUFFER, .buffer = buf_false, .length = sizeof(buf_false),
};
