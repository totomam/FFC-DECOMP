#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov007_021bebec(void *p);

int func_ov007_021beba4(void *param_1)
{
    uint8_t *s = (uint8_t *)param_1;
    uint32_t a = *(uint32_t *)(s + 0x110);
    uint32_t b = *(uint32_t *)(s + 0x114);
    uint64_t r = func_0209a76c(a + 1, b + 1);
    *(uint32_t *)(s + 0x110) = (uint32_t)(r >> 32);
    func_ov007_021bebec(s);
    return 1;
}
