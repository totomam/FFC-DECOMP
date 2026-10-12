#include "ffc/types.h"

typedef struct Local {
    uint32_t w0;
    void *p4;
    uint32_t w8;
    uint8_t b12;
} Local;

typedef struct Obj {
    uint8_t pad0[0x24];
    int32_t f24;
    int32_t f28;
    uint8_t pad2c[0x3c];
    int32_t f68[5];
    uint8_t pad7c[0x190];
    int32_t f20c[5];
    int32_t f220[5];
} Obj;

extern uint32_t data_020b8e44;
extern void func_02019070(void *out, uint32_t v);
extern uint32_t *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void func_02053290(void *object);

int32_t func_ov007_021ae848(Obj *self)
{
    Local loc;
    uint32_t found;
    uint32_t bad;
    uint32_t *m;
    int i;

    if (self->f28 < 1 || self->f28 > 0x14) {
        return 0;
    }

    found = 0;
    bad = 0;
    if (self->f24 >= 1) {
        func_02019070(&loc, data_020b8e44);
        found = 1;
        m = func_02052d90(loc.p4, loc.w8);
        if ((uint32_t)self->f24 <= m[2] - 1) {
            bad = 1;
        }
    }
    bad = !bad;

    if (found) {
        Local *p = &loc;
        if (p->p4 != 0) {
            if (p->b12) {
                func_02052d3c(p->p4, p->w8);
            }
            func_02052c04(p->p4);
        }
        func_02053290(p);
    }

    if (bad) {
        return 0;
    }

    if (self->f68[0] == 0 && self->f68[1] == 0 && self->f68[2] == 0) {
        return 0;
    }

    for (i = 0; i < 5; i++) {
        if (self->f68[i] != 0) {
            if (self->f68[i] > 0xff) {
                return 0;
            }
            if (self->f220[i] > 0xff) {
                return 0;
            }
            if (self->f20c[i] > 0x3ff) {
                return 0;
            }
        }
    }
    return 1;
}
