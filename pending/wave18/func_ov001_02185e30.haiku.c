#include "ffc/types.h"

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_ov001_02185df4(void *a, void *b, void *c);
extern uint8_t data_ov001_02194230[];

void func_ov001_02185e30(void *a, void *b)
{
    uint32_t tmp[5];
    func_02086ad4(tmp, (uint32_t)data_ov001_02194230);
    func_ov001_02185df4(a, b, tmp);
}
