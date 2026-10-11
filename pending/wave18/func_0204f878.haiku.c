#include "ffc/types.h"

extern uint8_t data_0209efe8[];

typedef union {
    uint32_t w;
    struct {
        uint32_t a : 3;
        uint32_t b : 2;
        uint32_t r : 27;
    } f;
} W;

uint32_t func_0204f878(uint8_t *s, uint32_t i) {
    W u;
    uint32_t *t;
    uint32_t *p = (uint32_t *)(s + 0x34);
    u.w = p[i];
    t = (uint32_t *)(data_0209efe8 + i * 0x50 + u.f.a * 0x10);
    return t[u.f.b];
}
