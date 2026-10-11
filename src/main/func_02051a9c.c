#include "ffc/types.h"

extern void func_020059e4(void *p, uint32_t v);
extern uint32_t data_0213df68;

uint32_t *func_02051a9c(uint32_t *p) {
    uint32_t i;
    for (i = 0; i < 3; i++) {
        p[i] = 0;
    }
    func_020059e4(p, data_0213df68);
    p[3] = 0;
    p[4] = 0;
    p[6] = 0;
    p[5] = 0;
    ((uint8_t *)p)[0x1c] = 0;
    return p;
}
