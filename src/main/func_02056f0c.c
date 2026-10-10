#include "ffc/types.h"

extern uint8_t data_020b0c08[];
extern uint32_t data_0213e098;
extern uint32_t func_02055054(uint32_t x);

typedef struct {
    void *vt;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
    uint32_t w14;
} Obj;

Obj *func_02056f0c(Obj *p, uint32_t b) {
    uint32_t r;
    p->wc &= ~0xffu;
    p->vt = data_020b0c08;
    r = func_02055054(data_0213e098);
    p->w14 = *(r < b ? &b : &r);
    return p;
}
