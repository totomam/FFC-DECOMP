#include "ffc/types.h"

extern uint32_t func_02036820(const void *object, uint32_t index);
extern uint32_t func_020369c0(const void *object, uint32_t index);

uint16_t func_ov011_021c0058(char *self, const void *object, uint32_t index0)
{
    volatile uint32_t index = index0;
    uint16_t ret = 0xffff;
    uint16_t key = (uint16_t)func_02036820(object, index);
    uint16_t i;

    if (func_020369c0(object, index) == 0) {
        for (i = 0; i < *(volatile uint32_t *)(self + 0x188); i++) {
            if (key == (*(uint32_t **)(self + 0x184))[i]) { ret = i; break; }
        }
    } else {
        for (i = 0; i < *(volatile uint32_t *)(self + 0x1d0); i++) {
            if (key == (*(uint32_t **)(self + 0x1cc))[i]) { ret = i; break; }
        }
    }
    return ret;
}
