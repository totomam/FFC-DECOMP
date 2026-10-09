#ifndef FFC_TYPES_H
#define FFC_TYPES_H

/*
 * Keep the reconstructed sources independent of proprietary SDK headers.
 * Metrowerks targets ARM with 8/16/32-bit char/short/int and 64-bit long long.
 * Host builds retain the platform's standard definitions for validation.
 */
#ifdef __MWERKS__
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;

#define FFC_OFFSETOF(type, member) ((unsigned long)&(((type *)0)->member))
#define FFC_STATIC_ASSERT(name, condition) typedef char name[(condition) ? 1 : -1]
#else
#include <stddef.h>
#include <stdint.h>

#define FFC_OFFSETOF(type, member) offsetof(type, member)
#define FFC_STATIC_ASSERT(name, condition) _Static_assert(condition, #name)
#endif

#endif
