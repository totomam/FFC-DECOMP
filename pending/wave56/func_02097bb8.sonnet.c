#include "ffc/types.h"

typedef struct Obj {
    int32_t (**vt)(struct Obj *);
    uint32_t f4, f8, fc, f10, f14, f18, f1c, f20, f24, f28, f2c, f30;
    uint8_t pad34[4];
    uint8_t f38;
    uint8_t f39;
} Obj;

extern void func_02056858(uint32_t x);
extern uint32_t func_02056830(void);
extern void func_02097cc8(Obj *p);
extern uint32_t data_020b31c8[];
extern uint32_t data_020b31cc;

Obj *func_02097bb8(Obj *p, uint32_t a1, int32_t a2) {
    uint32_t flag;
    uint32_t tmp[2];
    uint32_t *q;
    uint8_t r1;

    flag = (p->f14 != 0);
    if (p->vt[5](p) < 0) {
        return 0;
    }
    p->f4 = 0;
    p->f8 = 0;
    p->fc = 0;
    p->f14 = 0;
    p->f10 = 0;
    p->f18 = 0;
    p->f2c = 0;
    p->f28 = 0;
    p->f24 = 0;
    if (a1 == 0) {
        if (p->f39) {
            func_02056858(p->f20);
        }
        p->f20 = 0;
        uint32_t v;
        tmp[0] = a2;
        v = p->f30 << 1;
        tmp[1] = v;
        q = (v < (uint32_t)a2) ? &tmp[0] : &tmp[1];
        if (*q < data_020b31c8[1]) {
            q = &data_020b31cc;
        }
        p->f1c = *q;
        p->f20 = func_02056830();
        p->f39 = 1;
        r1 = 1;
        if (a2 == 0) {
            r1 = 0;
        }
    } else {
        if (a2 < (int32_t)(p->f30 << 1)) {
            return 0;
        }
        if (p->f39) {
            func_02056858(p->f20);
        }
        p->f39 = 0;
        p->f20 = a1;
        p->f1c = a2;
        r1 = 1;
    }
    p->f38 = r1;
    if (p->f38 && flag) {
        func_02097cc8(p);
    }
    return p;
}
