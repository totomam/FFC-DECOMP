#include "ffc/types.h"

extern void *func_02081210(void *object);
extern uint32_t func_020817c8(int32_t first, int32_t second);

void func_ov004_0214f66c(uint32_t *out, uint8_t *arr, uint32_t idx)
{
    uint8_t *p = arr + idx * 4;
    volatile uint32_t a = *(volatile uint32_t *)(p + 0xac);
    uint32_t b = *(uint32_t *)(p + 0xb4);
    uint32_t t = (a << 12);
    t = 0;
    *out = func_020817c8((int32_t)func_02081210((void *)(b << 12)), 0x64000 + t);
}
