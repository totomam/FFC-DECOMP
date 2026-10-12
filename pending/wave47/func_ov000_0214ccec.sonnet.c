#include "ffc/types.h"

extern void func_02084ca4(void);
extern void func_ov000_0214c894(int16_t *a, uint32_t b, uint32_t d);
extern void func_ov000_0214c7e0(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_ov000_0214c630(void *a, void *b, void *c, uint32_t d);
extern void func_02090398(void *a, void *b, uint32_t n);
extern int func_ov000_0214c798(void *a, uint32_t b, uint32_t c);
extern void func_ov000_0214c6f0(void *a, void *b, uint32_t c, uint32_t d);

void func_ov000_0214ccec(int16_t *a, void *b, int c, int d, int e, uint32_t f, uint32_t g, int16_t *h, int16_t *i)
{
    int ret;
    uint32_t s8;
    uint32_t d2 = d * 2;

    func_02084ca4();
    if (c == 1) {
        func_ov000_0214c894(a, (uint32_t)b, d);
    } else if (c != 0) {
        func_ov000_0214c7e0(a, b, c, d);
    }
    func_ov000_0214c7e0(h, a, g, e);
    s8 = (d - e) * 2;
    func_02084b2c(h + e, 0, s8);
    func_ov000_0214c7e0(i, h, f, d);
    func_ov000_0214c630(a, a, i, d);
    func_02090398(a, a + e, s8);
    func_02084b2c(a + d - e, 0, e * 2);
    ret = func_ov000_0214c798(a, f, d);
    switch (ret) {
    case 0:
        func_02084b2c(a, 0, d2);
        break;
    case 1:
        func_ov000_0214c6f0(a, a, f, d);
        break;
    }
}
