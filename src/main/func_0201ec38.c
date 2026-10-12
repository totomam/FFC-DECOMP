#include "ffc/types.h"

extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_0201ebd8(void *self, void *obj);

uint32_t func_0201ec38(uint8_t *p) {
    uint32_t i;
    for (i = 0; i < 0x40; i++) {
        uint8_t *obj = *(uint8_t **)(p + 0x48) + i * 0x18;
        if (func_02036cd8(obj) != 0) {
            if (func_0201ebd8(p, *(uint8_t **)(p + 0x48) + i * 0x18) != 0) {
                return 1;
            }
        }
    }
    return 0;
}
