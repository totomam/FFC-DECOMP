#include "ffc/types.h"

extern uint64_t func_0209a73c(uint32_t a, uint32_t b, uint32_t c);
extern void func_02088f30(uint16_t a, uint16_t b);

typedef struct {
    uint32_t f0;
    uint64_t acc;
    uint32_t mask;
    void (*cb)(uint64_t, uint32_t);
    uint32_t ctx;
} S;

extern S data_02141970;

void func_02089ac0(uint32_t unused, uint32_t arg) {
    S *p;
    uint16_t a = (uint16_t)((arg & 0xF0000) >> 16);
    uint16_t v = (uint16_t)arg;
    uint16_t t = (uint16_t)((arg & 0x3F00000) >> 20);

    switch (t) {
    case 1: {
        uint64_t r = func_0209a73c(v, 0, (uint32_t)a << 4);
        p = &data_02141970;
        p->acc |= r;
        p->mask |= 1u << a;
        if (p->mask != 0xf) {
            return;
        }
        if (p->cb != 0) {
            p->cb(p->acc, p->ctx);
            p->cb = 0;
        }
        p->f0 = 0;
        break;
    }
    case 2: {
        uint16_t buf[4];
        buf[0] = v;
        p = &data_02141970;
        if (p->cb != 0) {
            p->cb(*(uint64_t *)buf, p->ctx);
            p->cb = 0;
        }
        p->f0 = 0;
        break;
    }
    default:
        func_02088f30(v, t);
        break;
    }
}
