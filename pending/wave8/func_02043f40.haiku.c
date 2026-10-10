#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0206aa58(void *obj, uint32_t zero, uint32_t x);
extern uint8_t data_020af57c[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Args;

typedef struct {
    uint32_t vtbl;
    uint32_t w[17];
} Obj;

void *func_02043f40(Args s, uint32_t e)
{
    Obj *p = (Obj *)func_0205681c(0x48);
    if (p != 0) {
        func_0206aa58(p, 0, e);
        p->vtbl = (uint32_t)data_020af57c;
        p->w[13] = s.a;
        p->w[14] = s.b;
        p->w[15] = s.c;
        p->w[16] = s.d;
    }
    return p;
}
