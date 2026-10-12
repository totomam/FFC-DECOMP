#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern void func_02092878(void *dst, const uint8_t *src);
extern uint8_t data_020b23f0[];

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
    uint32_t f38;
} Obj;

void *func_02074098(uint32_t a, const uint8_t *b, uint32_t c, uint32_t d, uint32_t e)
{
    Obj *p = (Obj *)func_0205681c(0x3c);
    if (p != 0) {
        p->f0c &= ~0xffu;
        p->f14 = a;
        p->f18 = 0;
        p->f1c = 0;
        p->vt = data_020b23f0;
        p->f24 = 0;
        p->f28 = 0;
        p->f2c = 0;
        p->f30 = c;
        p->f34 = d;
        p->f38 = e;
        uint32_t one = 1;
        p->f28 = (uint32_t)func_02056830((func_02092864(b) + 1) * one);
        func_02092878((void *)p->f28, b);
    }
    return p;
}
