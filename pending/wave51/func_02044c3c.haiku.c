#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;

extern void func_020375bc(uint32_t x);
extern uint32_t func_0206cb98(uint32_t x);
extern void func_02056bf4(void *a, uint32_t b);
extern uint32_t data_020afb58[2];
extern uint32_t data_020afb60[2];
extern uint32_t data_020afb68[2];

void func_02044c3c(uint8_t *p) {
    uint8_t *q;
    uint32_t b;
    Pair *d;
    func_020375bc(0);
    p[0xad] = p[0x1d0];
    if (p[0x1d1] == 0 && func_0206cb98(*(uint32_t *)(p + 0x90)) != 0) {
        b = *(uint32_t *)(p + 0x94);
        q = p + 0x48;
        func_02056bf4(q, *(uint32_t *)(p + 0x90));
        func_02056bf4(q, b);
        p[0xac] = 1;
        d = (Pair *)data_020afb58;
        *(Pair *)(p + 0x80) = *d;
        return;
    }
    if (p[0x1d2] != 0) {
        d = (Pair *)data_020afb60;
        *(Pair *)(p + 0x80) = *d;
        return;
    }
    d = (Pair *)data_020afb68;
    *(Pair *)(p + 0x80) = *d;
}
