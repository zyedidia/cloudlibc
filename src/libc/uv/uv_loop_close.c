// Copyright (c) 2017 Nuxi, https://nuxi.nl/
//
// This file is distributed under a 2-clause BSD license.
// See the LICENSE file for details.

#include <common/uv.h>

#include <stdlib.h>
#include <uv.h>

int uv_loop_close(uv_loop_t *loop) {
  if (!__uv_handles_empty(&loop->__handles))
    return UV_EBUSY;

  __uv_active_timers_destroy(&loop->__active_timers);
  free(loop->__subscriptions_buffer);
  free(loop->__events_buffer);
  return 0;
}
