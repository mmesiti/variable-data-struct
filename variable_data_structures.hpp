#ifndef VARIABLE_DATA_STRUCTURES_H_
#define VARIABLE_DATA_STRUCTURES_H_
#if defined(__STDC__)
#if (__STDC_VERSION__ >= 199901L)
#define _XOPEN_SOURCE 700
#endif
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#if !defined(_GNU_SOURCE_)
#define DO_PRAGMA(x) _Pragma(#x)
#endif

#if !defined(NDIM)
#define NDIM 3
#endif

#define _X_ 0
#if (NDIM > 1)
#define _Y_ 1
#if (NDIM > 2)
#define _Z_ 2
#endif
#endif

#include "types.h"

#endif // VARIABLE_DATA_STRUCTURES_H_
