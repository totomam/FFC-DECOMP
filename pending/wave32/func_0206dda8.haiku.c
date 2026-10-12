#include "ffc/types.h"

extern void func_02084ca4(uint8_t *dst, uint8_t *src);

void func_0206dda8(uint8_t *self)
{
    if (*(self + 0x230)) {
        **(uint8_t **)(self + 0x2c) = 1;
        return;
    }
    **(uint8_t **)(self + 0x2c) = 0;
    func_02084ca4(*(uint8_t **)(self + 0x24) + *(uint32_t *)(self + 0x234) * 15,
                  *(uint8_t **)(self + 0x2c) + 1);
    if (*(uint32_t *)(self + 0x234) == *(uint32_t *)(self + 0x248)) {
        *(self + 0x230) = 1;
        return;
    }
    *(uint32_t *)(self + 0x234) = *(uint32_t *)(self + 0x234) + 1;
}
