#include "ffc/types.h"

extern void func_02056c4c(void *x);
extern void func_02056bf4(void *a, void *b);

typedef struct Obj Obj;
struct Obj {
    void (**vt)(Obj *);
};

void func_ov003_02152fdc(uint8_t *p) {
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    volatile uint8_t saved;
    Obj *o6;
    Obj *o4;
    uint16_t v;
    uint8_t s;

    *(uint32_t *)(p + 0xcc) = 2;
    if (*(void **)(p + 0xa0) != 0 || *(void **)(p + 0xa4) != 0) {
        func_02056c4c(*(void **)(p + 0xb8));
    }
    s = 0;
    v = *ime;
    *ime = s;
    if (v != 0) {
        s = 1;
    }
    saved = s;
    o6 = *(Obj **)(p + 0xa0);
    if (o6 != 0) {
        func_02056bf4(*(void **)(p + 0xc4), o6);
        *(void **)(p + 0xa0) = 0;
    }
    o4 = *(Obj **)(p + 0xa4);
    if (o4 != 0) {
        func_02056bf4(*(void **)(p + 0xc4), o4);
        *(void **)(p + 0xa4) = 0;
    }
    (void)*ime;
    *ime = saved;
    if (o6 != 0) {
        o6->vt[1](o6);
    }
    if (o4 != 0) {
        o4->vt[1](o4);
    }
}
