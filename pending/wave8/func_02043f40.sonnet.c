#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0206aa58(void *obj, uint32_t zero, uint32_t x);
extern uint8_t data_020af57c[];

typedef struct {
    uint32_t vtbl;
    uint32_t w[17];
} Obj;

void *func_02043f40(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, ...)
{
    
    Obj *p = (Obj *)func_0205681c(0x48);
    if (p != 0) {
        func_0206aa58(p, 0, e);
        p->vtbl = (uint32_t)data_020af57c;
        p->w[13] = a;
        p->w[14] = (&b)[0];
        p->w[15] = (&b)[1];
        p->w[16] = d;
    }
    return p;
}
