#include "ffc/types.h"

extern void func_020213f0(uint32_t v);
extern uint32_t data_020b93d4[];

void func_02021684(uint32_t *p)
{
    uint32_t v = p[5];
    if (v != data_020b93d4[2]) {
        func_020213f0(v);
    }
}
