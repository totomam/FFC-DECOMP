#include "ffc/types.h"

extern void func_ov007_021ae63c(int x);
extern uint8_t *data_020b8e44;

void func_ov007_021b2324(uint8_t *p)
{
    func_ov007_021ae63c(3);
    **(uint32_t **)(p + 0xbc) = 1;
    *(data_020b8e44 + 4) = (uint8_t)*(uint32_t *)(p + 0xc8);
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
