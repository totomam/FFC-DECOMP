#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02056830(uint32_t size);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_02092878(void *dst, const void *src);
extern uint8_t data_020b23a8[];

typedef struct Obj {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    void *f10;
    void *f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    char *f28;
    uint32_t *f2c;
    int32_t f30;
    char **f34;
    int32_t f38;
    uint32_t f3c;
    uint32_t f40;
    void *f44;
    void *f48;
} Obj;

Obj *func_020742e0(void *a0, const char *a1, const uint32_t *a2, int32_t a3, char **a4, int32_t a5, void *a6, void *a7)
{
    Obj *o;
    int32_t i;
    uint32_t es;

    o = func_0205681c(0x4c);
    if (o != 0) {
    o->f0c &= ~0xffu;
    o->f14 = a0;
    o->f18 = 0;
    o->f1c = 0;
    o->vt = data_020b23a8;
    o->f24 = 2;
    o->f28 = 0;
    o->f2c = 0;
    o->f30 = a3;
    o->f34 = 0;
    o->f38 = a5;
    o->f3c = 0;
    o->f40 = 0;
    o->f44 = a6;
    o->f48 = a7;

    es = 1;
    o->f28 = func_02056830(es * (func_02092864((const uint8_t *)a1) + 1));
    func_02092878(o->f28, a1);

    if (a2 != 0) {
        o->f2c = func_02056830(o->f30 * 4);
        for (i = 0; i < o->f30; i++) {
            o->f2c[i] = a2[i];
        }
    }

    o->f34 = func_02056830(o->f38 * 4);
    for (i = 0; i < o->f38; i++) {
        o->f34[i] = func_02056830(es * (func_02092864((const uint8_t *)a4[i]) + 1));
        func_02092878(o->f34[i], a4[i]);
    }
    }
    return o;
}
