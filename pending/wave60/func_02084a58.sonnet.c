/* cflags: -nothumb -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { int32_t a[8]; } B;
void func_02084a58(int32_t *src, int32_t *dst, uint32_t n)
{
    int32_t end = (int32_t)dst + n;
    int32_t be = (int32_t)dst + (n >> 5) * 32;
    while ((int32_t)dst < be) { *(B *)dst = *(B *)src; dst += 8; src += 8; }
    while ((int32_t)dst < end) *dst++ = *src++;
}
