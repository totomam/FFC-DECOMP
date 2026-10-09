#include "ffc/types.h"
typedef struct { uint32_t fn, adj; } Pmf;
extern uint32_t *func_0205681c(uint32_t size);
extern void func_02056c9c(uint32_t *p, uint32_t v);
extern uint32_t data_ov008_021a8028;
uint32_t *func_ov008_0219dbe4(uint32_t a, Pmf m) {
    uint32_t *p = func_0205681c(0x90);
    if (p) {
        func_02056c9c(p, 0);
        p[0] = (uint32_t)&data_ov008_021a8028;
        *(uint32_t *)((uint8_t *)p + 0x84) = a;
        *(Pmf *)((uint8_t *)p + 0x88) = m;
    }
    return p;
}
