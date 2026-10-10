#include "ffc/types.h"

extern uint32_t func_ov001_0217f9bc(void *a, uint32_t b);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint32_t func_ov001_0217fa40(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern char data_ov001_021919e8[];

uint32_t func_ov001_0217faf8(void *a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5)
{
    uint32_t arr[0x12];
    uint32_t x;

    arr[0] = a3;
    arr[1] = a4;
    x = func_ov001_0217f9bc(a0, a5);
    func_02086ad4((uint8_t *)&arr[2], (uint32_t)data_ov001_021919e8, a1, x);
    return func_ov001_0217fa40(a0, (uint8_t *)arr + 8, a2, arr[0], arr[1], a5);
}
