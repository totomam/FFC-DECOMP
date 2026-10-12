#include "ffc/types.h"

extern void func_ov006_021b2140(uint32_t x);
extern void func_ov006_021b20f0(uint32_t x);
extern uint32_t func_ov006_021b248c(void);
extern int func_0208e0d8(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t data_ov006_021bc800[];
extern uint32_t data_ov006_021b9ea4[];
extern uint32_t data_ov006_021b9e84[];

typedef void (*fn_t)(uint32_t, void *);

void func_ov006_021b23bc(uint16_t *p) {
    uint32_t *s;
    fn_t f;
    uint32_t v;

    if (p[1] != 0) {
        func_ov006_021b2140(p[1]);
        func_ov006_021b20f0(9);
        return;
    }
    v = p[2];
    switch (v - 10) {
    case 0:
        s = (uint32_t *)data_ov006_021bc800[1];
        if (s[17] == 2) {
            if (s[16] == 4) {
                if (func_ov006_021b248c() != 0) {
                    return;
                }
                f = (fn_t)data_ov006_021bc800[0];
                if (f != 0) {
                    f(0x08000000, data_ov006_021b9ea4);
                }
                func_ov006_021b20f0(9);
                return;
            }
            if (s[16] == 6) {
                return;
            }
            func_ov006_021b20f0(4);
            return;
        }
        if (s[17] == 4) {
            if (func_0208e0d8((uint8_t *)s + 0x13e0, 0xd, 7, 0x44, 1) != 0) {
                func_ov006_021b2140(0);
                func_ov006_021b20f0(9);
                return;
            }
            func_ov006_021b20f0(5);
            return;
        }
        func_ov006_021b20f0(4);
        return;
    case 1:
        break;
    case 2:
    case 3:
    default:
        f = (fn_t)data_ov006_021bc800[0];
        if (f != 0) {
            f(0x08000000, data_ov006_021b9e84);
        }
        break;
    }
}
