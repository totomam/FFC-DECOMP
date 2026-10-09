#include "ffc/types.h"

extern uint8_t data_020b3af8[];
extern void func_020063b8(void *a, uint32_t b);

void func_02006a04(uint32_t p)
{
    func_020063b8(data_020b3af8, p);
}
