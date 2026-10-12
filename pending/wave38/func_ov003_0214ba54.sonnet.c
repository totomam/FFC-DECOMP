#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t v);
extern char data_ov003_0217968c[];

typedef union {
    float f;
    uint32_t u;
} FU;

void *func_ov003_0214ba54(void *a, FU b, FU c, uint32_t d,
                          uint8_t e, uint8_t f, uint8_t g, uint8_t h)
{
    uint8_t *o;

    o = (uint8_t *)func_0205681c(0x98);
    if (o != 0) {
        func_02056c9c(o, 0);
        *(char **)o = data_ov003_0217968c;
        *(void **)(o + 0x84) = a;
        *(uint32_t *)(o + 0x88) = b.u;
        *(uint32_t *)(o + 0x8c) = c.u;
        *(uint32_t *)(o + 0x90) = d;
        o[0x94] = e;
        o[0x95] = f;
        o[0x96] = g;
        o[0x97] = h;
    }
    return o;
}
