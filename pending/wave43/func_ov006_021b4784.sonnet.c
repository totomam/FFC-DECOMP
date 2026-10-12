#include "ffc/types.h"

static inline void wr(uint32_t addr, uint16_t *p, uint32_t d) {
    volatile uint16_t *r = (volatile uint16_t *)addr;
    uint32_t a = p[0];
    uint32_t b = p[1];
    uint32_t c = p[2];
    r[0] = ((a << 8) & 0xff00) | (c & 0xff);
    r[2] = ((b << 8) & 0xff00) | (d & 0xff);
}

void func_ov006_021b4784(int a0, int a1, uint16_t *p) {
    if (a0 == 1) {
        uint32_t d = p[3];
        if (a1 == 0) wr(0x4001040, p, d);
        else wr(0x4001042, p, d);
    } else {
        uint32_t d = p[3];
        if (a1 == 0) wr(0x4000040, p, d);
        else wr(0x4000042, p, d);
    }
}
