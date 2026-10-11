#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov005_02196144(uint32_t a, uint8_t b);
extern void func_ov008_021a3598(void *p);
extern void func_ov008_021a3614(void *p);
extern void func_ov008_021a3bc8(void *p);

uint32_t func_ov008_021a3558(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    uint32_t b = *(uint32_t *)(p + 0x118);
    uint64_t r = func_0209a76c(*(uint32_t *)(p + 0x114) + b, b + 1);
    uint32_t hi = (uint32_t)(r >> 32);
    *(uint32_t *)(p + 0x114) = hi;
    func_ov005_02196144(*(uint32_t *)(p + 0xfc), (uint8_t)(hi + 1));
    func_ov008_021a3598(p);
    func_ov008_021a3614(p);
    func_ov008_021a3bc8(p);
    return 1;
}
