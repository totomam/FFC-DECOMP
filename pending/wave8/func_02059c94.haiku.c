#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern int func_02057210(void *obj, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
extern int data_020b0dc0;

typedef struct {
    int vt;
    uint8_t pad0[0x11];
    uint8_t flag;
    uint8_t pad1[6];
    uint32_t val;
    uint32_t pad2;
    uint32_t f24;
    uint8_t pad3[8];
    uint32_t f30;
    uint8_t pad4[0x20];
    void *f54;
} Obj;

void *func_02059c94(void *p0, uint32_t a1, ...)
{
    uint32_t *ap = &a1;
    uint32_t a2, a3, a4, a5, a6;
    Obj *o;

    a3 = ap[2];
    a4 = ap[3];
    a5 = ap[4];
    a6 = ap[5];
    a2 = ap[1];

    o = (Obj *)func_0205681c(0x58);
    if (o) {
        func_02057210(o, a1, a2, a3, a4);
        o->vt = (int)&data_020b0dc0;
        o->f54 = p0;
        o->f24 = a5;
        if (o->flag) {
            uint32_t x;
            if (a5 == 0) {
                x = 1;
            } else {
                x = a5 << 4;
            }
            o->val = x;
        }
        o->f30 = a6;
    }
    return o;
}
