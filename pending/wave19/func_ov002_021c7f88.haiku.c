#include "ffc/types.h"

extern uint8_t data_ov002_021d77f4[];

typedef struct Obj {
    void *vt;
    uint32_t a1;
    uint32_t a2;
    uint32_t a3;
    uint8_t f10;
    uint8_t pad11[3];
    uint32_t f14;
    uint32_t f18;
    uint8_t f1c;
    uint8_t pad1d;
    uint8_t f1e;
    uint8_t f1f;
} Obj;

void func_ov002_021c7f88(Obj *p, uint32_t r1, uint32_t r2, uint32_t r3)
{
    void *vt;

    p->a1 = r1;
    vt = data_ov002_021d77f4;
    p->f1e = 1;
    p->a2 = r2;
    p->vt = vt;
    p->a3 = r3;
    p->f10 = 0;
    p->f14 = 0;
    p->f18 = 0;
    p->f1c = 0;
    p->f1f = 0;
    *(uint8_t *)((uint8_t *)p + 0x20) = 0;
}
