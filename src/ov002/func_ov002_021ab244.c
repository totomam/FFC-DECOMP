#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_ov002_021d5328[];

typedef struct Obj {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint8_t f18;
    uint8_t pad19[3];
    uint32_t f1c;
} Obj;

void func_ov002_021ab244(uint32_t a, uint8_t b, uint32_t c)
{
    Obj *p = (Obj *)func_0205681c(0x20);
    if (p != 0) {
        p->f0c &= ~0xffu;
        p->vt = data_ov002_021d5328;
        p->f14 = a;
        p->f18 = b;
        p->f1c = c;
    }
}
