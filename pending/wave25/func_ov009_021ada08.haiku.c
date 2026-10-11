#include "ffc/types.h"

extern void func_ov009_021adbdc(void *self, uint32_t val);
extern void func_ov009_021ad9cc(void *self);

void func_ov009_021ada08(uint8_t *p)
{
    uint8_t i;

    for (i = 0; i < 5; i++) {
        func_ov009_021adbdc(p, *(uint32_t *)(p + 0xd8 + i * 4));
    }
    func_ov009_021ad9cc(p);
}
