#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
typedef struct { uint32_t a, b; } S;
extern int func_02057210(void *obj, S s1, S s2);
extern int data_020b15e8;

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

void *func_02062a78(void *p0, S s1, S s2, uint32_t a5, uint32_t a6)
{
    Obj *o;

    o = (Obj *)func_0205681c(0x58);
    if (o) {
        func_02057210(o, s1, s2);
        o->vt = (int)&data_020b15e8;
        o->f54 = p0;
        o->f24 = a5;
        if (o->flag) {
            if (a5 == 0) {
                o->val = 1;
            } else {
                o->val = a5 << 4;
            }
        }
        o->f30 = a6;
    }
    return o;
}
