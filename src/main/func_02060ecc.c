#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020b13cc;

typedef struct {
    uint32_t vtbl;
    uint32_t u4;
    uint32_t u8;
    uint32_t flags;
    uint32_t u10;
    uint32_t a;
    uint32_t b;
    uint8_t c;
} Obj;

void *func_02060ecc(uint32_t a, uint32_t b) {
    Obj *p = (Obj *)func_0205681c(0x20);
    if (p != 0) {
        p->flags &= ~0xffu;
        p->vtbl = (uint32_t)&data_020b13cc;
        p->a = a;
        p->b = b;
        p->c = 0;
    }
    return p;
}
