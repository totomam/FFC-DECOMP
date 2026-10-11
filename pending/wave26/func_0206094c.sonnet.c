#include "ffc/types.h"

extern void func_0205729c(void *self);
extern void func_02060564(void *c, uint32_t a, uint32_t b);

typedef struct {
    uint32_t w0, w1, w2, w3;
    uint32_t w4, w5, w6, w7;
    uint32_t w8, w9, wa, wb;
    uint32_t wc, wd, we, wf;
    uint32_t w10, w11, w12, w13, w14;
    uint32_t sub, state;
} Obj;

void func_0206094c(void *p) {
    Obj *o = (Obj *)p;
    if (o->state == 1) {
        if ((int)((uint32_t *)o->sub)[4] > 0) {
            o->w3 = (o->w3 & 0xffffff00u) | 2u;
        }
    }
    func_0205729c(p);
    func_02060564(o->sub, o->wd, o->we);
}
