#include "ffc/types.h"

typedef struct {
    uint16_t x0;
    uint16_t x2;
    uint32_t x4;
} Key;

uint32_t func_ov001_02184d30(uint8_t *base, Key *k, uint32_t v)
{
    int i;
    uint32_t k4 = k->x4;
    for (i = 0; i < 200; i++) {
        uint8_t *e = base + i * 16;
        if (k4 == *(uint32_t *)(e + 0x120) &&
            k->x2 == *(uint16_t *)(e + 0x11e) &&
            v == *(uint32_t *)(e + 0x124)) {
            *(uint32_t *)(e + 0x120) = 0;
            *(uint16_t *)(e + 0x11e) = 0;
            return 1;
        }
    }
    return 0;
}
