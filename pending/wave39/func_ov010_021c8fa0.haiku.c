#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *obj, uint32_t zero, uint32_t x, uint32_t y, uint32_t z, uint32_t w);
extern char data_ov010_021d1a2c[];

void *func_ov010_021c8fa0(uint32_t a, uint32_t volatile b, uint32_t volatile c, uint32_t volatile d, uint32_t volatile e) {
    char *o;
    uint32_t u;

    o = func_0205681c(0x98);
    if (o) {
        func_02056c9c(o, 0, d, u, d, e);
        *(void **)o = data_ov010_021d1a2c;
        *(uint32_t *)(o + 0x84) = a;
        *(uint32_t *)(o + 0x88) = b;
        *(uint32_t *)(o + 0x8c) = c;
        *(uint32_t *)(o + 0x90) = d;
        *(uint32_t *)(o + 0x94) = e;
    }
    return o;
}
