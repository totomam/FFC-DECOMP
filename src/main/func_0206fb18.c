#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t v);
extern uint8_t data_020b2084[];

void *func_0206fb18(uint32_t a) {
    uint8_t *p = (uint8_t *)func_0205681c(0x8c);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(uint8_t **)p = data_020b2084;
        *(uint32_t *)(p + 0x80) = a;
        *(uint32_t *)(p + 0x88) = 0;
    }
    return p;
}
