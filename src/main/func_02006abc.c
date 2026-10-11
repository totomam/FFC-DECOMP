#include "ffc/types.h"

extern uint32_t data_020b3af8;
extern void func_020065a4(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_02006abc(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    func_020065a4(&data_020b3af8, a0, a1, a2, a3, a4);
}
