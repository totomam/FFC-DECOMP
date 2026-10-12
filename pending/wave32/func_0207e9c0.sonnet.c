#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    void *f10;
} Obj;

extern uint32_t func_0207e2d4(void *a, uint32_t *x, void *y);
extern void func_0207e890(void *object);
extern uint32_t func_0207e0f4(void *o, uint32_t n, uint32_t m);

int func_0207e9c0(Obj *o, void *a1, uint32_t a2, uint32_t a3) {
    uint32_t x = 0;
    uint32_t c[3];
    uint8_t y[0x118];
    int ret = 0;
    uint32_t r;

    r = func_0207e2d4(a1, &x, y);
    if (r != 0) {
        func_0207e890(o);
        o->f8 = r;
        o->f10 = c;
        c[0] = x;
        c[1] = (uint32_t)y;
        c[2] = a2;
        if (func_0207e0f4(o, 0xd, 1) != 0) {
            ret = 1;
        } else {
            o->f8 = 0;
        }
    }
    return ret;
}
