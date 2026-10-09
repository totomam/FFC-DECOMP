#include "ffc/types.h"

extern uint32_t data_020b3af8;
extern void func_02006928(uint32_t *p, uint32_t one, uint32_t a2, uint32_t a0, uint32_t a1);

void func_02006a64(uint32_t a0, uint32_t a1, uint32_t a2)
{
    func_02006928(&data_020b3af8, 1, a2, a0, a1);
}
