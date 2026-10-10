#include "ffc/types.h"

extern uint32_t func_02036418(uint32_t x);
extern void func_0201f4b0(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_020b93b8;

void func_ov011_021c2ca4(uint32_t a, uint32_t b)
{
    uint32_t r = func_02036418(b);
    func_0201f4b0(data_020b93b8, r, 1);
}
