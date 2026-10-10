#include "ffc/types.h"

extern void func_02006f5c(void *p, int16_t a, int16_t b, int16_t c);

void func_0200635c(uint8_t *p, int32_t a, int32_t b, int32_t c)
{
    if (p[0]) {
        func_02006f5c(p + 0x2a14, (int16_t)a, (int16_t)b, (int16_t)c);
    }
}
