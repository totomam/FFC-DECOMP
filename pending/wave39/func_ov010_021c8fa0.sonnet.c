#include "ffc/types.h"

typedef struct { uint32_t b, c, d; } S;
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *obj, uint32_t zero, uint32_t x, uint32_t y, uint32_t z, uint32_t w);
extern char data_ov010_021d1a2c[];

void *func_ov010_021c8fa0(uint32_t a, S s, uint32_t e) {
    char *o;
    o = func_0205681c(0x98);
    if (o) {
        func_02056c9c(o, 0, s.d, s.d, s.d, e);
        *(void **)o = data_ov010_021d1a2c;
        *(uint32_t *)(o + 0x84) = a;
        *(uint32_t *)(o + 0x88) = s.b;
        *(uint32_t *)(o + 0x8c) = s.c;
        *(uint32_t *)(o + 0x90) = s.d;
        *(uint32_t *)(o + 0x94) = e;
    }
    return o;
}
