#include "ffc/types.h"

extern void func_02059db8(void *object, uint32_t value_34, uint32_t bit);

void func_020595bc(uint8_t *self, void *obj, uint32_t idx, uint32_t bit)
{
    uint32_t mode = *(uint32_t *)(self + 0x50);
    uint32_t val;

    if (mode != 0) {
        if (mode == 2) {
            if (idx <= 2) {
                bit = 1;
            }
            idx = (idx & 1) << 2;
        } else {
            bit = 0;
            idx = idx << 2;
        }
        self += idx;
        val = ((uint32_t *)self)[14];
        func_02059db8(obj, val, bit);
    }
}
