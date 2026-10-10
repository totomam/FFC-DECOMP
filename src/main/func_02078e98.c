#include "ffc/types.h"

extern void func_02078dd0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern uint8_t data_020a1918[];

void func_02078e98(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    func_02078dd0(a, b, c, d, e, (uint32_t)data_020a1918, c);
}
