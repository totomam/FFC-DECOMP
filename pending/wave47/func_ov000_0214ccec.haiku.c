#include "ffc/types.h"

extern void func_02084ca4(void);
extern void func_ov000_0214c894(uint8_t *a, uint32_t b, uint32_t d);
extern void func_ov000_0214c7e0(uint8_t *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_ov000_0214c630(uint8_t *a, uint8_t *b, uint32_t c, uint32_t d);
extern void func_02090398(uint8_t *a, uint8_t *b, uint32_t n);
extern int func_ov000_0214c798(uint8_t *a, uint32_t b, uint32_t c);
extern void func_ov000_0214c6f0(uint8_t *a, uint8_t *b, uint32_t c, uint32_t d);

void func_ov000_0214ccec(uint8_t *a, uint32_t b, int32_t c, uint32_t d, int32_t e, uint32_t f, uint32_t g, uint8_t *h, uint32_t i)
{
    uint32_t d2 = d << 1;
    int32_t ce = c;
    uint32_t s8;
    uint32_t r7;
    int ret;

    func_02084ca4();
    if (ce == 1) {
        func_ov000_0214c894(a, b, d);
    } else if (ce != 0) {
        func_ov000_0214c7e0(a, b, c, d);
    }
    func_ov000_0214c7e0(h, a, g, e);
    s8 = (d - e) << 1;
    r7 = e << 1;
    func_02084b2c(h + r7, 0, s8);
    func_ov000_0214c7e0(i, h, f, d);
    func_ov000_0214c630(a, a, i, d);
    func_02090398(a, a + r7, s8);
    func_02084b2c(a + d2 - r7, 0, r7);
    ret = func_ov000_0214c798(a, f, d);
    if (ret == 0) {
        func_02084b2c(a, 0, d2);
        return;
    }
    if (ret == 1) {
        func_ov000_0214c6f0(a, a, f, d);
    }
}
