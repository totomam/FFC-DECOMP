#include "ffc/types.h"

extern uint8_t data_020b3af8[];
extern void func_020068b0(void *a, uint32_t b);

void func_02006c74(uint32_t p)
{
    func_020068b0(data_020b3af8, p);
}
