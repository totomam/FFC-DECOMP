#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
typedef struct { uint32_t a, b; } S;
extern int func_020572d0(void *obj, S s1, S s2);
extern int data_020b0f10;

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
    uint8_t pad4[0x18];
    void *f54;
} Obj;

void *func_0205cd80(void *p0, S s1, S s2, uint32_t a6, uint32_t a7)
{
    Obj *o;

    o = (Obj *)func_0205681c(0x50);
    if (o) {
        func_020572d0(o, s1, s2);
        o->vt = (int)&data_020b0f10;
        o->f54 = p0;
        o->f24 = a6;
        if (o->flag) {
            if (a6 == 0) {
                o->val = 1;
            } else {
                o->val = a6 << 4;
            }
        }
        o->f30 = a7;
    }
    return o;
}
