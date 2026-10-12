#include "ffc/types.h"

extern uint64_t func_0209a76c(int32_t v, uint32_t m);

uint32_t func_ov002_021b9718(void *base, int32_t target, int32_t mode)
{
    uint32_t idx = 7;
    int32_t i;

    for (i = 1; i < 6; i++) {
        if (mode != 1) {
            if (mode == 3) {
                idx = (uint32_t)(func_0209a76c(target + i, 6) >> 32);
            }
        } else {
            idx = (uint32_t)(func_0209a76c(target - i + 6, 6) >> 32);
        }
        if (idx != 5 && *(uint32_t *)((uint8_t *)base + 0xf8 + idx * 4) != 0) {
            break;
        }
    }

    if (idx == (uint32_t)target) {
        return 0;
    }
    return *(uint32_t *)((uint8_t *)base + 0xf8 + idx * 4);
}
