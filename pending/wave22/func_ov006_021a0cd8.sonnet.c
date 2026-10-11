#include "ffc/types.h"

extern void func_ov006_021a0c88(void *a, void *b, uint32_t c, uint32_t d);

void func_ov006_021a0cd8(uint8_t *p, uint32_t a, uint32_t b) {
    uint8_t *base = p + 8;
    void *tmp = base;
    uint16_t h = *(uint16_t *)p;
    uint16_t idx = (uint16_t)(((h >> 8) & 0xff) | ((h << 8) & 0xff00));
    func_ov006_021a0c88(&tmp, base + idx, a, b);
}
