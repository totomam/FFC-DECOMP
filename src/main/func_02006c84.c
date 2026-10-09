#include "ffc/types.h"

extern uint8_t data_020b3af8[];
extern void func_020068d0(void *a, uint32_t b);

void func_02006c84(uint32_t p)
{
    func_020068d0(data_020b3af8, p);
}
