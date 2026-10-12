#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(int n);
extern int func_ov000_02152b68(void);
extern void func_ov000_02153de8(int v);
extern int func_ov000_02151ae8(void *p, int a, uint8_t *b, int c);
extern int func_ov000_02151b40(void *p, uint8_t *base, int a, int b, int c);
extern int func_ov000_02151bb8(int r, void *p, int s, uint8_t *base);
extern void func_ov000_02151d90(int r, uint8_t *base);

int func_ov000_02151910(uint8_t *p) {
    uint8_t *base;
    uint8_t *g;
    int r6;
    int stk = 0;
    int st;
    int idx;

    base = func_ov000_02152ae4(0x10);
    r6 = -1;
    g = func_ov000_02152ae4(1);
    g[0xb] = (g[0xb] & 0xf0) | 1;
    st = func_ov000_02152b68();
    if (st == 3) {
        stk = base[0x14c1];
        if (*(uint16_t *)(p + 0xa) == 0 || p[0xc] == 0) {
            func_ov000_02153de8(*(uint16_t *)(p + 0x36));
        } else {
            if (*(uint16_t *)(p + 0xa) == 1 && p[0xc] == 0x20) {
                func_ov000_02153de8(*(uint16_t *)(p + 0x36));
            }
            r6 = func_ov000_02151ae8(p, base[0x14c0], base + 0x900, 0);
        }
    } else if (st == 4) {
        idx = base[0x14bf];
        stk = (uint8_t)(*(uint16_t *)(base + idx * 0xc0 + 0xc56) - 1);
        r6 = func_ov000_02151b40(p, base, 0, 0, stk);
        if (r6 >= 0) {
            idx = base[0x14bf];
            base[0xbf7 + (idx << 2)] |= 0x80;
        }
    } else if (st == 5) {
        stk = base[0x14c1];
        idx = base[0x14bf];
        r6 = func_ov000_02151ae8(p, 1, base + 0x900 + idx * 0x24, idx * 0x24);
        if (r6 >= 0) {
            idx = base[0x14bf];
            base[0x900 + idx * 0x24] = (base[0x900 + idx * 0x24] & 0xf0) | 1;
        }
    }
    if (r6 >= 0) {
        func_ov000_02151d90(func_ov000_02151bb8(r6, p, stk, base), base);
    }
    return 0;
}
