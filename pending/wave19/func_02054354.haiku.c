#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02054680(void *p, uint32_t a, uint32_t b);
extern uint32_t data_020b0598;
extern void *data_0213e060;

void func_02054354(void) {
    uint8_t *p = (uint8_t *)func_0205681c(12);
    if (p != 0) {
        func_02054680(p, 0, 1);
        *(uint32_t *)p = (uint32_t)&data_020b0598;
        p[9] = 0;
        p[10] = 0;
    }
    data_0213e060 = p;
}
