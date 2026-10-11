#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov005_02196144(void *p, uint8_t v);
extern void func_ov008_021a3598(void *p);
extern void func_ov008_021a3614(void *p);
extern void func_ov008_021a3bc8(void *p);

uint32_t func_ov008_021a3518(uint8_t *p)
{
    uint32_t a = *(uint32_t *)(p + 0x114);
    uint32_t b = *(uint32_t *)(p + 0x118);
    uint32_t r = (uint32_t)(func_0209a76c(a + 1, b + 1) >> 32);
    *(uint32_t *)(p + 0x114) = r;
    func_ov005_02196144(*(void **)(p + 0xfc), (uint8_t)(r + 1));
    func_ov008_021a3598(p);
    func_ov008_021a3614(p);
    func_ov008_021a3bc8(p);
    return 1;
}
