#include "ffc/types.h"

extern uint32_t func_ov000_021633a8(void);
extern uint8_t *func_ov000_02163608(void);
extern uint32_t func_ov000_02162e1c(uint32_t v, void *a, uint32_t z);
extern uint8_t *func_ov000_02163350(void);
extern unsigned long long func_020882cc(void);
extern unsigned long long func_0209a6d4(unsigned long long a, unsigned long long b);
extern uint8_t *func_ov000_02163634(uint32_t i);
extern uint32_t func_ov000_0215eb30(uint32_t a, uint32_t b, uint32_t c, uint32_t d, void *e, uint32_t f);
extern uint32_t func_ov000_0215fed0(void);

uint32_t func_ov000_021631c4(void *a)
{
    uint8_t *o;
    uint8_t *m;
    uint8_t *g;
    uint8_t *u;
    uint8_t *p;
    unsigned long long now;
    unsigned long long q;
    uint32_t local[4];

    if (func_ov000_021633a8() == 2) {
        p = func_ov000_02163608();
        return func_ov000_02162e1c(p[0x16], a, 0);
    }

    o = func_ov000_02163350();
    if (*(uint32_t *)(o + 0x61c) != 1) {
        return 1;
    }

    o = func_ov000_02163350();
    if (o[0x30] != 0) {
        uint8_t *s;
        uint8_t *t;
        now = func_020882cc();
        s = func_ov000_02163350();
        t = func_ov000_02163350();
        q = func_0209a6d4((now - *(unsigned long long *)(s + 0x20)) << 6, 0x82ea);
        if (q < *(unsigned long long *)(t + 0x7cc)) {
            return 1;
        }
    }

    now = func_020882cc();
    o = func_ov000_02163350();
    q = func_0209a6d4((now - *(unsigned long long *)(o + 0x20)) << 6, 0x82ea);
    if (q > 0xbb8) {
        m = func_ov000_02163608();
        p = func_ov000_02163634(0);
        g = func_ov000_02163350();
        local[0] = *(uint32_t *)(g + 0x678);
        local[1] = 0;
        local[2] = (uint32_t)a;
        local[3] = m[0x16];
        func_ov000_0215eb30(0x82, *(uint32_t *)p, *(uint32_t *)(p + 4), *(uint16_t *)(p + 0xc), local, 4);
        if (func_ov000_0215fed0() != 0) {
            return 0;
        }

        now = func_020882cc();
        u = func_ov000_02163350();
        *(unsigned long long *)(u + 0x20) = now;
        u = func_ov000_02163350();
        *(uint32_t *)(u + 0x7cc) = 0xbb8;
        *(uint32_t *)(u + 0x7d0) = 0;
    }
    return 1;
}
