#include "ffc/types.h"

extern void func_ov000_0214a33c(void *p, uint32_t a, uint32_t b);
extern void func_ov000_0214a510(void *p);
extern void func_ov000_021496b8(void *p, uint32_t a, uint32_t b);
extern void func_ov000_0214a550(void *p);

void func_ov000_0214a6c4(uint8_t *p, uint32_t a)
{
    func_ov000_0214a33c(p, a, *(uint32_t *)(p + 0x81c));
    func_ov000_0214a510(p);
    func_ov000_021496b8(p, 0, 0);
    func_ov000_0214a550(p);
    p[0x455] = 5;
}
