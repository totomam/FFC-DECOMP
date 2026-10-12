#include "ffc/types.h"

extern uint32_t data_02141370[];
extern uint32_t data_020b2948;

extern void func_021d9ad8(uint32_t, uint8_t *, uint32_t, uint32_t);
extern void func_020844ec(uint32_t, uint8_t *, uint32_t, uint32_t, uint32_t);
extern void func_020849f4(uint8_t *, uint32_t, uint32_t);
extern void func_021d9b4c(uint32_t, uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_020846b0(uint32_t, uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

void func_02082b50(uint8_t *a0, uint32_t a1, uint32_t a2) {
    uint32_t r7 = data_02141370[6];
    uint32_t r2;
    uint32_t r4;
    uint32_t f4;
    uint32_t g;

    if (r7 == 0) {
        r2 = data_02141370[1] + a1;
    } else if (a1 + a2 < data_02141370[7]) {
        r2 = data_02141370[1] + a1;
    } else if (a1 >= data_02141370[7]) {
        r2 = r7 + a1 - data_02141370[7];
    } else {
        r4 = data_02141370[7] - a1;
        f4 = data_02141370[1];
        g = data_020b2948;
        if (g != 0xFFFFFFFFu && r4 > 0x30) {
            if (g > 3) {
                func_021d9ad8(g - 4, a0, f4 + a1, r4);
            } else {
                func_020844ec(g, a0, f4 + a1, r4, 1);
            }
        } else {
            func_020849f4(a0, f4 + a1, r4);
        }
        g = data_020b2948;
        if (g != 0xFFFFFFFFu) {
            if (g > 3) {
                func_021d9b4c(g - 4, a0 + r4, r7, a2 - r4, 0, 0);
            } else {
                func_020846b0(g, a0 + r4, r7, a2 - r4, 0, 0, 1);
            }
        } else {
            func_020849f4(a0 + r4, r7, a2 - r4);
        }
        return;
    }

    g = data_020b2948;
    if (g != 0xFFFFFFFFu) {
        if (g > 3) {
            func_021d9b4c(g - 4, a0, r2, a2, 0, 0);
        } else {
            func_020846b0(g, a0, r2, a2, 0, 0, 1);
        }
    } else {
        func_020849f4(a0, r2, a2);
    }
}
