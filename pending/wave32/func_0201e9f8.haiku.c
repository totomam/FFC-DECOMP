#include "ffc/types.h"

extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);

uint32_t func_0201e9f8(void *self) {
    uint32_t i;
    uint32_t off;
    for (i = 0; i < 0x40; i++) {
        off = i * 0x18;
        if (func_02036cd8((uint8_t *)(*(uint8_t **)((uint8_t *)self + 0x48)) + off) != 0) {
            if (func_02036cfc((uint8_t *)(*(uint8_t **)((uint8_t *)self + 0x48)) + off) == 0) {
                return 1;
            }
        }
    }
    return 0;
}
