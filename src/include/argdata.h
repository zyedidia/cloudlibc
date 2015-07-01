// Copyright (c) 2015 Nuxi, https://nuxi.nl/
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
// OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
// SUCH DAMAGE.

// <argdata.h> - argument data for programs

#ifndef _ARGDATA_H_
#define _ARGDATA_H_

#include <_/types.h>

#ifndef _ARGDATA_T_DECLARED
typedef __argdata_t argdata_t;
#define _ARGDATA_T_DECLARED
#endif

__BEGIN_DECLS
int argdata_get_bool(const argdata_t *, _Bool *);
int argdata_get_cstring(const argdata_t *, const char **);
int argdata_get_fd(const argdata_t *, int *);
int argdata_get_string(const argdata_t *, const char **, __size_t *);
int argdata_iterate_dict(const argdata_t *, void *,
                         _Bool (*)(const char *, const argdata_t *, void *));
int argdata_iterate_list(const argdata_t *, void *,
                         _Bool (*)(__size_t, const argdata_t *, void *));
__END_DECLS

#endif
