#include "ffc/types.h"

extern void func_ov005_02196144(uint32_t a, uint8_t b);
extern void func_ov008_021a4d40(void *p);
extern void func_ov008_021a491c(void *p);
extern void func_ov008_021a4e30(void *p);

void func_ov008_021a4fe4(uint8_t *p)
{
    uint32_t v = *(uint32_t *)(p + 0x114);
    func_ov005_02196144(*(uint32_t *)(p + 0xfc), (uint8_t)(v + 1));
    func_ov008_021a4d40(p);
    func_ov008_021a491c(p);
    func_ov008_021a4e30(p);
}
