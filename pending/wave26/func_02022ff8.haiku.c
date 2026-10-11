#include "ffc/types.h"

extern void func_02081eb0(void *p);

void func_02022ff8(uint8_t *p, uint8_t v)
{
    uint16_t *reg;
    uint32_t r;
    if (p != 0) {
        func_02081eb0(p + 0x17c);
    }
    reg = (uint16_t *)0x04000060;
    if (v != 0) {
        r = *reg;
        r = r & 0xffffcfff;
        r = 0x20 | r;
        *reg = (uint16_t)r;
    } else {
        r = *reg;
        r = r & 0xcfdf;
        *reg = (uint16_t)r;
    }
    p[0x204] = v;
}
