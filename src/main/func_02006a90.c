#include "ffc/types.h"

extern uint8_t data_020b3af8[];
extern void func_02006928(void *p, uint32_t n, uint32_t c, uint32_t a, uint32_t b);

void func_02006a90(uint32_t a, uint32_t b, uint32_t c)
{
    func_02006928(data_020b3af8, 3, c, a, b);
}
