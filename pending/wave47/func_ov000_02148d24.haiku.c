#include "ffc/types.h"

extern int32_t func_ov000_02148c18(int32_t a, void *b, uint32_t c);
extern int32_t func_ov000_02148da4(int32_t a, uint32_t *x, uint32_t *y);
extern void func_02087890(void *b, uint32_t n);
extern int32_t func_ov000_02148e68(uint32_t x, uint16_t y, void *b);
extern int32_t func_ov000_02148ea4(uint32_t x, uint16_t y, void *b);

int32_t func_ov000_02148d24(int32_t a, void *b, uint32_t c) {
    uint32_t x;
    uint32_t y;
    int32_t r;
    int i;

    r = func_ov000_02148c18(a, b, c);
    if (r != 0) {
        return r;
    }
    if (b == 0) {
        a = -1;
    } else if (func_ov000_02148da4(a, &x, &y) == 0) {
        a = -1;
    } else {
        if (y > c) {
            y = c;
        }
        func_02087890(b, y);
        a = -1;
        for (i = 0; i < 3; i++) {
            if (func_ov000_02148e68(x, (uint16_t)y, b) != 0) {
                a = -1;
                break;
            }
            r = func_ov000_02148ea4(x, (uint16_t)y, b);
            if (r == 0) {
                a = (int32_t)y;
                break;
            }
            if (r != 6) {
                a = -1;
                break;
            }
        }
    }
    return a;
}
