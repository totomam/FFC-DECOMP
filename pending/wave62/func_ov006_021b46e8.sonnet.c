#include "ffc/types.h"
static inline uint32_t rd(volatile uint32_t *r) { return (*r & 0x1f00) >> 8; }
static inline void wr(volatile uint32_t *r, uint32_t v) { *r = (*r & 0xffffe0ff) | (v << 8); }
void func_ov006_021b46e8(int a, uint32_t b) {
    volatile uint32_t *r;
    if (a == 1) {
        r = (volatile uint32_t *)0x4001000;
        uint32_t c = rd(r);
        wr(r, b | c);
    } else {
        r = (volatile uint32_t *)0x4000000;
        uint32_t c = rd(r);
        wr(r, b | c);
    }
}
