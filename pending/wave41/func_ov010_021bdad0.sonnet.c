#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern void func_02036750(void *p);
extern char data_ov010_021d15c8[];
extern char data_ov010_021d15d8[];

void *func_ov010_021bdad0(void *a, uint32_t b, uint32_t c)
{
    uint8_t *p = (uint8_t *)a;
    uint32_t o;
    func_02056c9c(a, 0);
    *(void **)p = data_ov010_021d15c8;
    *(uint32_t *)(p + 0x88) = b;
    func_02036750(p + 0x90);
    func_02036750(p + 0xe8);
    o = 0x51 * 4;
    *(uint32_t *)(p + o) = 0;
    *(uint32_t *)(p + o + 4) = 0;
    *(uint8_t *)(p + o + 8) = 0;
    *(uint8_t *)(p + o + 9) = 0;
    *(uint8_t *)(p + o + 10) = 0;
    *(uint8_t *)(p + o + 11) = 0;
    *(uint8_t *)(p + o + 12) = 0;
    *(uint32_t *)(p + o + 0x10) = 0;
    *(uint32_t *)(p + o + 0x14) = 0;
    *(uint32_t *)(p + o + 0x18) = 2;
    *(uint32_t *)(p + o + 0x1c) = (uint32_t)-1;
    *(uint32_t *)(p + o + 0x20) = (uint32_t)-1;
    *(uint32_t *)(p + o + 0x24) = c;
    {
        uint32_t *d = (uint32_t *)data_ov010_021d15d8;
        uint32_t x = d[0];
        uint32_t y = d[1];
        *(uint32_t *)(p + 0x80) = x;
        *(uint32_t *)(p + 0x84) = y;
    }
    return a;
}
