#include "ffc/types.h"

extern char data_ov003_0217ac2c[];

typedef struct Obj {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
    uint8_t f38;
    uint32_t f3c;
} Obj;

void func_ov003_02165a84(Obj *p, uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3,
                         uint32_t s4, uint32_t s5, uint32_t s6)
{
    uint32_t flags = p->f0c;
    uint32_t mask = 0xff;
    void *vt;

    p->f14 = a1;
    p->f18 = a2;
    p->f20 = s0;
    p->f24 = s1;
    p->f38 = 0;
    p->f3c = s6;
    p->f28 = s2;
    flags &= ~mask;
    p->f2c = s3;
    vt = data_ov003_0217ac2c;
    p->f0c = flags;
    p->f30 = s4;
    p->vt = vt;
    p->f1c = a3;
    p->f34 = s5;
}
