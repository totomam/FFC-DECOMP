#include "ffc/types.h"

extern uint32_t *func_0208ceec(void);
extern int func_0208cf38(int a, int b);
extern void func_02087874(uint8_t *p, int n);
extern void func_02087890(uint8_t *p, uint32_t n);
extern void func_0208cdd8(int a, void *b);
extern void func_02084ca4(void *src, void *dst, int n);
extern int func_0208ce30(int a, int b, uint32_t c, uint32_t d, void *e, uint32_t f);

int func_0208e018(void *a, void *b, uint8_t *c, uint32_t d)
{
    uint32_t buf[2];
    uint32_t *o;
    uint8_t *in;
    int r;

    o = func_0208ceec();
    r = func_0208cf38(1, 0xb);
    if (r != 0) {
        return r;
    }
    in = (uint8_t *)o[1];
    func_02087874(in + 0x10, 4);
    if (*(uint32_t *)(((uint8_t *)o[1]) + 0x10) == 0) {
        return 3;
    }
    if (d > 0x5e4) {
        return 6;
    }
    func_02087890(c, d);
    func_0208cdd8(0x12, a);
    func_02084ca4(b, buf, 6);
    r = func_0208ce30(0x12, 4, buf[0], buf[1], c, d);
    if (r != 0) {
        return r;
    }
    return 2;
}
