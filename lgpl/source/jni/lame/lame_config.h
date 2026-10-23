/* lame_config.h - Android specific configuration for LAME */

#ifndef LAME_CONFIG_H
#define LAME_CONFIG_H

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* IEEE754 compatible machine */
#define IEEE754_FLOAT 1

/* Define if compiler supports long long type */
#define HAVE_LONG_LONG 1

/* Size of short */
#define SIZEOF_SHORT 2

/* Size of int */
#define SIZEOF_INT 4

/* Size of long */
#define SIZEOF_LONG 8

/* Size of long long */
#define SIZEOF_LONG_LONG 8

/* Size of float */
#define SIZEOF_FLOAT 4

/* Size of double */
#define SIZEOF_DOUBLE 8

/* Android specific */
#define __ANDROID__ 1

/* Disable debug and analysis code */
#define NDEBUG 1
#undef BRHIST
#undef HAVE_TERMCAP

/* Disable decoder (we only need encoder) */
#define DECODE_ON_THE_FLY 0

#endif /* LAME_CONFIG_H */