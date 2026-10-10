#include "ffc/types.h"

extern void func_02057be4(void *p, int32_t a, int32_t b, int32_t c);
extern uint8_t data_020b123c[];

void *func_0205ff48(void *p, int32_t a, int32_t b)
{
    func_02057be4(p, a, b, 0x14);
    *(uint8_t **)p = data_020b123c;
    return p;
}
