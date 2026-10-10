#include "ffc/types.h"

extern void func_02046d20(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint8_t data_020afa88[];

void *func_02047298(void *p, uint32_t x)
{
    func_02046d20(p, x, 5, 1, 1);
    *(uint8_t **)p = data_020afa88;
    return p;
}
