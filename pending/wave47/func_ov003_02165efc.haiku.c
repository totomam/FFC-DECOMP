#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;
extern uint32_t func_0201c1f0(uint32_t a, uint32_t b, uint32_t c);
extern void func_0201c1d0(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_02015938(uint32_t a);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);

void func_ov003_02165efc(uint32_t *p) {
    uint32_t r3;
    uint32_t ret = func_0201c1f0(data_020b93b8, p[6], p[7]);
    switch (p[5] - 0x4c) {
    case 0:
        r3 = p[8];
        break;
    case 1:
        r3 = ret + p[8];
        break;
    case 2:
        r3 = ret - p[8];
        break;
    case 3:
        r3 = ret * p[8];
        break;
    case 4:
        r3 = func_0209a76c(ret, p[8]);
        break;
    case 10: {
        int32_t d;
        int32_t a = (int32_t)p[8];
        int32_t b = (int32_t)p[9];
        int32_t mx = a;
        if (a < b) {
            mx = b;
        }
        if (a > b) {
            a = b;
        }
        d = mx - a;
        if (d < 0) {
            d = -d;
        }
        r3 = (uint32_t)a + func_0206c184(func_02015938(data_020b8e44), (uint32_t)(d + 1));
        break;
    }
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        return;
    default:
        return;
    }
    func_0201c1d0(data_020b93b8, p[6], p[7], r3);
}
