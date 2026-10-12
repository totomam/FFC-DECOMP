#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(int n);
extern int func_ov000_02152b68(void);
extern void func_ov000_02153de8(int v);
extern int func_ov000_02151ae8();
extern int func_ov000_02151b40();
extern int func_ov000_02151bb8();
extern void func_ov000_02151d90();

void func_ov000_02151910(uint8_t *p) {
    uint8_t *base;
    uint8_t *g;
    int r6 = -1;
    int one = 1;
    volatile int stk;
    int st;
    uint8_t *q;

    base = func_ov000_02152ae4(0x10);
    g = func_ov000_02152ae4(1);
    g[0xb] = (g[0xb] & ~0xf) | one;
    st = func_ov000_02152b68();
    switch (st) {
    case 3:
        stk = base[0x14c1];
        if (*(uint16_t *)(p + 0xa) == 0 || p[0xc] == 0) {
            func_ov000_02153de8(*(uint16_t *)(p + 0x36));
        } else {
            if (*(uint16_t *)(p + 0xa) == 1 && p[0xc] == 0x20) {
                func_ov000_02153de8(*(uint16_t *)(p + 0x36));
            }
            r6 = func_ov000_02151ae8(p, base[0x14c0], base + 0x900);
        }
        break;
    case 4:
        stk = (uint8_t)(*(uint16_t *)(base + base[0x14bf] * 0xc0 + 0xc56) - 1);
        r6 = func_ov000_02151b40(p, base);
        if (r6 >= 0) {
            base[0xbf7 + (base[0x14bf] << 2)] |= 0x80;
        }
        break;
    case 5:
        stk = base[0x14c1];
        r6 = func_ov000_02151ae8(p, one, base + 0x900 + base[0x14bf] * 0x24, base[0x14bf] * 0x24);
        if (r6 >= 0) {
            q = base + 0x900;
            q[base[0x14bf] * 0x24] = (q[base[0x14bf] * 0x24] & ~0xf) | one;
        }
        break;
    default:
        return;
    }
    if (r6 >= 0) {
        func_ov000_02151d90(func_ov000_02151bb8(r6, p, stk, base), base);
    }
}
