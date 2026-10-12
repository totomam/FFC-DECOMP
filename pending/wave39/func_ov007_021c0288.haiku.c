#include "ffc/types.h"

extern int8_t data_ov007_021c9c3c[];
extern uint8_t data_ov007_021c8ba4[];
extern uint8_t data_ov007_021c8bc4[];
extern int func_02086b04(void *r0, uint32_t r1, void *r2, void *r3, uint32_t s0, uint32_t s1, uint32_t s2);

int func_ov007_021c0288(uint32_t *a, uint32_t b, void *c) {
    int r;
    if (a == 0 || c == 0 || a[0] == 0 || a[9] == 0) {
        return 0;
    }
    if (data_ov007_021c9c3c[0] != 0) {
        r = func_02086b04(c, 0x80, data_ov007_021c8ba4, data_ov007_021c9c3c, b, a[5], a[10]);
    } else {
        r = func_02086b04(c, 0x80, data_ov007_021c8bc4, (uint8_t *)a + 4, b, a[5], a[10]);
    }
    if (r < 0) {
        return 0;
    }
    return 1;
}
