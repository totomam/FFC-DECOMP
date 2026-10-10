#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov008_0219b804(void *p);
extern void func_ov008_0219b860(void *p);
extern void func_ov008_0219b6f4(void *p);

int func_ov008_0219b7a0(void *a)
{
    uint8_t *p = (uint8_t *)a;
    uint64_t r;

    r = func_0209a76c(p[0x104] + 1, p[0x105] + 1);
    p[0x104] = (uint8_t)(r >> 32);
    func_ov008_0219b804(a);
    func_ov008_0219b860(a);
    func_ov008_0219b6f4(a);
    return 1;
}
