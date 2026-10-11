#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);

uint32_t func_ov001_02184bb0(uint8_t *base, uint32_t val) {
    int i;
    for (i = 0; i < 10; i++) {
        if (*(uint32_t *)(base + 0xe0 + i * 4) == val) {
            return 1;
        }
    }
    {
        uint32_t idx;
        uint64_t r = func_0209a76c(*(uint32_t *)(base + 0x108) + 1, 10);
        idx = (uint32_t)(r >> 32);
        *(uint32_t *)(base + 0x108) = idx;
        *(uint32_t *)(base + 0xe0 + idx * 4) = val;
    }
    return 0;
}
