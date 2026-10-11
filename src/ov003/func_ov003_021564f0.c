#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov003_02156358(uint8_t *p, uint32_t key, Pair v, uint32_t x, uint32_t y, uint32_t z);

void func_ov003_021564f0(uint8_t *p, uint32_t key, Pair v, uint32_t x, uint32_t y, uint32_t z)
{
    if (*(uint16_t *)(p + 0x30c) != key) {
        func_ov003_02156358(p, key, v, x, y, z);
        return;
    }
    *(uint16_t *)(p + 0x30e) = (uint16_t)z;
}
