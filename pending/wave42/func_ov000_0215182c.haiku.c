#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_0208f09c(uint8_t *a, uint8_t *buf, uint32_t n);
extern void func_0208f338(uint8_t *a, uint8_t *e, uint32_t n, uint8_t *e2);
extern void func_02084080(uint8_t *c, uint8_t *b, uint8_t *e, uint32_t n);
extern uint16_t func_02084118(uint8_t *c, uint8_t *e, uint32_t n);
extern void func_02084b2c(uint8_t *p, uint32_t v, uint32_t n);
extern uint8_t data_ov000_0216963c[];

int func_ov000_0215182c(uint8_t *a, uint8_t *b, uint8_t *c, uint8_t *d, uint8_t *e)
{
    uint8_t buf[8];
    uint16_t v;

    if (d == 0 || a == 0 || b == 0 || c == 0 || e == 0) {
        return 0;
    }

    func_02084ca4(d + 0x50, e, 0x70);
    func_02084ca4(data_ov000_0216963c, buf, 4);
    func_02084ca4(d + 6, buf + 4, 4);
    func_0208f09c(a, buf, 8);
    func_0208f338(a, e, 0x70, e);
    func_02084080(c, b, e, 0x6e);
    v = func_02084118(c, e, 0x6e);

    if (v != *(uint16_t *)(e + 0x6e) && *(uint16_t *)(e + 0x6e) != 0) {
        func_02084b2c(e, 0, 0x70);
        return 0;
    }
    return 1;
}
