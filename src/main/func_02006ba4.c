#include "ffc/types.h"

extern uint8_t data_020b3af8[];
extern void func_020066f4(void *a, uint32_t b);

void func_02006ba4(uint32_t p)
{
    func_020066f4(data_020b3af8, p);
}
