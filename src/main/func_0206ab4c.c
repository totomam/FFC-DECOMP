#include "ffc/types.h"

extern void func_0206a854(uint32_t a, void *b);
extern uint32_t data_0213e164[];

void func_0206ab4c(uint8_t *p)
{
    if (p[0x34] == 0) {
        uint32_t idx = *(uint32_t *)(p + 0x30);
        func_0206a854(data_0213e164[idx], p);
        p[0x34] = 1;
    }
}
