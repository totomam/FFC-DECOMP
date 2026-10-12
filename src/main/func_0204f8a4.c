#include "ffc/types.h"

extern void func_02088f30(int x);

typedef struct {
    uint8_t pad[0x74];
    uint32_t w;
} S;

uint32_t func_0204f8a4(S *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i)
{
    uint32_t t;
    uint32_t r;

    t = p->w >> 31;
    if (t) {
        func_02088f30(t);
    }
    r = p->w;
    r = ((r & 0x7fffffff) | 0x80000000) & 0x9fffffff;
    r = (r | ((a & 3) << 29)) & 0xf3ffffff;
    r = r | ((e & 3) << 26);
    r = r & 0xfeffffff;
    r = r | ((b & 1) << 24);
    r = r & 0xfdffffff;
    r = r | ((c & 1) << 25);
    r = r & 0xffcfffff;
    r = r | ((d & 3) << 20);
    r = r & 0xfff3ffff;
    r = r | ((g & 3) << 18);
    r = r & 0xfffcffff;
    r = r | (((f - 1) & 3) << 16);
    r = r & ~0x1fu;
    r = r | (h & 0x1f);
    r = r & 0xffffe0ff;
    r = r | ((i & 0x1f) << 8);
    p->w = r;
    return r;
}
