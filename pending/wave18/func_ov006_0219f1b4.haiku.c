#include "ffc/types.h"

extern void func_020849ac(uint32_t a, void *b, uint32_t c);
extern void func_02084ca4(void *a, void *b, uint16_t c);

void func_ov006_0219f1b4(uint32_t *a, uint8_t *b)
{
    func_020849ac(0, b + 12, 0x20);
    *(uint16_t *)(b + 10) = (uint16_t)a[0];
    func_02084ca4((uint8_t *)a + 4, b + 12, *(uint16_t *)(b + 10));
}
