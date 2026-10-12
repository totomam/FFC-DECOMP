#include "ffc/types.h"

extern void func_02083ffc(void *p, int n);
extern uint32_t func_02084100(void *dst, void *src, int n);
extern void func_02083a98(void *p);
extern void func_02083ac0(void *p, void *src, int n);
extern void func_02083b54(void *p, void *dst);

uint64_t func_ov000_02154f90(uint32_t a, uint32_t b, int c)
{
    uint8_t buf2[0x100];
    uint8_t buf1[0x58];
    uint32_t loc[2];
    uint8_t tail[0x10];
    uint32_t hi;

    loc[0] = a;
    loc[1] = b;
    switch (c) {
    case 0:
        func_02083ffc(buf2, 7);
        hi = func_02084100(buf2, loc, 8) & 0x7f;
        break;
    case 1:
    default:
        func_02083a98(buf1);
        func_02083ac0(buf1, loc, 8);
        func_02083b54(buf1, tail);
        hi = ((int)tail[0] >> 1) & 0x7f;
        break;
    }
    return ((uint64_t)hi << 32) | a;
}
