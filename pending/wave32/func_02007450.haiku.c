#include "ffc/types.h"

extern int32_t func_0200764c(void *p);
extern void func_02006fa4(void *p, int32_t v);
extern void func_0200604c(void *p);
extern void func_02007804(void *p);

void func_02007450(uint8_t *p, int32_t v)
{
    if (func_0200764c(p) != 0) {
        func_02006fa4(p, (int16_t)v);
        func_0200604c(p + 0x2c);
        func_0200604c(p + 0x44);
        func_0200604c(p + 0x14);
        func_02007804(p + 0x5c);
        *(uint16_t *)(p + 0x204) = 0;
    }
}
