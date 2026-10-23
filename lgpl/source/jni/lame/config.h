/* config.h for Android - Custom configuration for LAME MP3 encoder */

#ifndef LAME_CONFIG_H
#define LAME_CONFIG_H

/* We're building LAME encoder only, no decoder needed */
#define HAVE_CONFIG_H 1

/* Standard headers */
#define STDC_HEADERS 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STDINT_H 1
#define HAVE_LIMITS_H 1
#define HAVE_FLOAT_H 1
#define HAVE_ERRNO_H 1

/* Math functions */
#define HAVE_STRCHR 1
#define HAVE_MEMCPY 1

/* IEEE 754 floating point type - Critical for LAME */
#define HAVE_IEEE754_FLOAT32_T 1

/* Define the actual ieee754_float32_t type */
typedef float ieee754_float32_t;

/* Alternative: If you have IEEE float */
#ifdef __STDC_IEC_559__
#define HAVE_IEEE754_FLOAT 1
#endif

/* Types */
#define HAVE_INT8_T 1
#define HAVE_INT16_T 1
#define HAVE_INT32_T 1
#define HAVE_INT64_T 1
#define HAVE_UINT8_T 1
#define HAVE_UINT16_T 1
#define HAVE_UINT32_T 1
#define HAVE_UINT64_T 1
#define HAVE_SIZE_T 1

/* Sizes */
#define SIZEOF_SHORT 2
#define SIZEOF_INT 4
#define SIZEOF_LONG 8
#define SIZEOF_LONG_LONG 8
#define SIZEOF_FLOAT 4
#define SIZEOF_DOUBLE 8

/* Features to DISABLE */
#define NOANALYSIS 1    /* Disable analysis hooks */

/* CRITICAL: Disable MPGLIB decoder - we only need encoder! */
/* This prevents the hip_* undefined symbols */
#ifndef HAVE_MPGLIB
#define HAVE_MPGLIB 0
#endif

/* Also explicitly undefine decoder features */
#undef HAVE_MPGLIB
#undef DECODE_ON_THE_FLY

/* Package info */
#define PACKAGE "lame"
#define PACKAGE_NAME "lame"
#define PACKAGE_VERSION "3.100"
#define PACKAGE_STRING "lame 3.100"
#define PACKAGE_TARNAME "lame"
#define VERSION "3.100"

/* Platform */
#define __ANDROID__ 1

/* Inline */
#ifndef __cplusplus
#define inline __inline
#endif

/* Math constants if not defined */
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#ifndef M_SQRT2
#define M_SQRT2 1.41421356237309504880
#endif

/* Disable debug/analysis features for production */
#ifdef NDEBUG
#define NOANALYSIS 1
#endif

/* For va_list */
#include <stdarg.h>

#endif /* LAME_CONFIG_H */