#include "ffc/types.h"

extern void func_ov000_0214fd34(int x);
extern int func_ov000_0214fcf8(void);
extern void *func_ov000_0214fd84(uint16_t i);
extern void func_020849f4(void *dst, void *src, uint32_t n);

int func_ov006_021a00d8(uint8_t *p, int m) {
    int n, i;
    func_ov000_0214fd34(1);
    n = func_ov000_0214fcf8();
    if (n > 0) {
        for (i = 0; i < n; i++) {
            if (i >= m) break;
            func_020849f4(func_ov000_0214fd84((uint16_t)i), p, 0xc0);
            p += 0xc0;
        }
    }
    func_ov000_0214fd34(0);
    return n;
}
