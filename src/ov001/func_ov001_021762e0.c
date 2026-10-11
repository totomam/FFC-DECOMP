#include "ffc/types.h"

extern void func_ov001_02179b10(uint32_t *a, int b);
extern void func_ov001_0217b1a4(uint32_t *a);
extern void func_ov000_02168a5c(uint32_t v);
extern void func_ov000_021653f4(void *p);

void func_ov001_021762e0(uint32_t *a)
{
    uint8_t *p = (uint8_t *)*a;
    func_ov001_02179b10(a, 1);
    func_ov001_0217b1a4(a);
    func_ov000_02168a5c(*(uint32_t *)(p + 0x5c8));
    func_ov000_021653f4(p);
    *a = 0;
}
