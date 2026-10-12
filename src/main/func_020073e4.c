#include "ffc/types.h"

extern int32_t func_0200764c(void *p);
extern void func_02007450(void *p, int32_t x);
extern int32_t func_02006f10(void *p, int32_t a, int32_t b, int32_t c);
extern void func_02006024(void *p, int32_t a, int32_t b, int32_t c);
extern void func_02007754(void *p, int32_t a);

int32_t func_020073e4(void *p0, int32_t p1, int32_t p2, int32_t p3)
{
    uint8_t *p = (uint8_t *)p0;
    int32_t r;

    if (func_0200764c(p0) != 0) {
        func_02007450(p0, 0);
    }
    r = func_02006f10(p0, (int16_t)p1, (int16_t)p2, (int16_t)p3);
    if (r != 0) {
        func_02006024(p + 0x2c, 0, 0, 0);
        func_02006024(p + 0x44, 0x78, 0x78, 0);
        func_02006024(p + 0x14, 0x7f, 0x7f, 0);
        func_02007754(p + 0x5c, 0xffff);
    }
    return r;
}
