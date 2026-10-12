#include "ffc/types.h"

extern uint8_t *func_ov006_021afd28(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021abea4(uint32_t x);
extern void func_ov006_021abf08(uint32_t a, uint32_t b, uint32_t c);

typedef struct { uint32_t pad[2]; uint8_t *cfg; } Glob;
extern Glob data_ov006_021bc78c;

void func_ov006_021abdcc(uint32_t a, uint32_t b)
{
    uint8_t *p;
    uint8_t *cfg;
    uint32_t r4, r5, r0, r1;
    uint8_t f;

    p = func_ov006_021afd28(a, b);
    switch (a) {
    case 0:
    case 1:
        r4 = 0;
        r5 = 0;
        if (func_ov006_021abea4(0) == 0) {
            r5 = 2;
        }
        break;
    case 2:
        f = p[0xf5];
        r1 = 0;
        r5 = 0;
        if (f != 0) {
            r4 = 1;
            r0 = 4;
        } else {
            r4 = 2;
            r0 = 3;
        }
        cfg = data_ov006_021bc78c.cfg;
        if (cfg[4]) {
            r5 = 1;
        }
        if (cfg[5]) {
            r1 = 1;
        }
        func_ov006_021abf08(r0, r1, b);
        break;
    case 3:
    case 4:
    case 5:
        r4 = 0;
        if (p[0xf5] != 0) {
            r5 = 2;
        } else {
            r5 = r4;
        }
        break;
    case 6:
        f = p[0xf6];
        r1 = 0;
        r5 = 0;
        if (f != 0) {
            r4 = 1;
            r0 = 4;
        } else {
            if (p[0xf5] == 0) {
                r5 = 2;
            }
            r4 = 2;
            r0 = 3;
        }
        cfg = data_ov006_021bc78c.cfg;
        if (cfg[6]) {
            r5 = 1;
        }
        if (cfg[7]) {
            r1 = 1;
        }
        func_ov006_021abf08(r0, r1, b);
        break;
    case 7:
    case 8:
        r4 = 0;
        if (p[0xf6] != 0) {
            r5 = 2;
        } else {
            r5 = r4;
        }
        break;
    default:
        r4 = 0;
        r5 = 2;
        break;
    }
    func_ov006_021abf08(r4, r5, b);
}
