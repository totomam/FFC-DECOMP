#include "ffc/types.h"

extern void func_02053d60(void *object, uint32_t value);

typedef struct {
    uint32_t w0;
    uint32_t cnt;
    uint32_t w2;
    uint32_t w3;
    uint32_t w4;
    uint32_t w5;
} Obj;

typedef struct {
    uint32_t a, b, c, d;
} Vec;

void func_020535b0(Obj *p, Vec v) {
    uint32_t i = 0;
    p->w0 = 0;
    p->cnt = 0;
    p->w2 = 0;
    p->w3 = 0;
    p->w4 = 0;
    p->w5 = 0;
    if (i >= p->cnt) {
        uint32_t *e = (uint32_t *)(i * 17);
        e[0] = v.a;
        e[1] = v.b;
        e[2] = v.c;
        e[3] = v.d;
        p->cnt++;
    } else {
        func_02053d60(p, v.a);
    }
}
