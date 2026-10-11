#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint8_t data_ov002_021d5300[];

typedef struct {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint8_t f1c;
} Obj;

void func_ov002_021aa928(uint32_t a, uint32_t b, uint8_t c)
{
    Obj *p = (Obj *)func_0205681c(0x20);
    if (p == 0) {
        return;
    }
    p->f0c &= ~0xffu;
    p->f00 = (uint32_t)data_ov002_021d5300;
    p->f14 = a;
    p->f18 = b;
    p->f1c = c;
}
