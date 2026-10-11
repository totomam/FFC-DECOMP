#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_020553c4(void *arg);
extern uint8_t data_020b0698[];

typedef struct {
    void *vtbl;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    void *f14;
    void *f18;
} Obj;

Obj *func_02055a2c(void *a, void *b)
{
    Obj *p = (Obj *)func_0205681c(0x1c);
    if (p != 0) {
        p->f0c &= ~0xffu;
        p->vtbl = data_020b0698;
        p->f14 = a;
        p->f18 = b;
        func_020553c4(b);
    }
    return p;
}
