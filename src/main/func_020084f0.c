#include "ffc/types.h"

extern uint8_t data_020b7dec[];
extern void func_02008450(void *a, uint32_t b);

void func_020084f0(uint32_t p)
{
    func_02008450(data_020b7dec, p);
}
