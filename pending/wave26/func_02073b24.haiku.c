#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020b24e0[];
extern uint32_t data_020b24b0[];
extern uint32_t data_0213e1cc[];

void func_02073b24(uint32_t a) {
    uint32_t *p = (uint32_t *)func_0205681c(0x28);
    if (p == 0) {
        return;
    }
    p[3] &= ~0xffu;
    p[0] = (uint32_t)data_020b24e0;
    p[5] = a;
    p[6] = 4;
    *(uint8_t *)&p[7] = 1;
    p[8] = 0;
    p[9] = 0;
    data_0213e1cc[p[6]] = 9;
    p[0] = (uint32_t)data_020b24b0;
}
