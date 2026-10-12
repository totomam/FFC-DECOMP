#include "ffc/types.h"

static inline void func_ov006_021b4784_wr(uint32_t addr, uint16_t *p, uint32_t d) {
    volatile uint16_t *r = (volatile uint16_t *)addr;
    uint32_t a = p[0];
    uint32_t c = p[2];
    uint32_t b = p[1];
    r[0] = ((a << 8) & 0xff00) | (c & 0xff);
    r[2] = ((b << 8) & 0xff00) | (d & 0xff);
}

void func_ov006_021b4784(int a0, int a1, uint16_t *p) {
    uint32_t d = p[3];
    if (a0 == 1) {
        if (a1 == 0) {
            func_ov006_021b4784_wr(0x04001040, p, d);
        } else {
            func_ov006_021b4784_wr(0x04001042, p, d);
        }
    } else {
        if (a1 == 0) {
            func_ov006_021b4784_wr(0x04000040, p, d);
        } else {
            func_ov006_021b4784_wr(0x04000042, p, d);
        }
    }
}
