#include "ffc/types.h"

extern int func_02084ca4(uint32_t src, void *dst, uint32_t n);
extern void func_ov000_0214f1f4(uint32_t val, uint8_t *out);
extern int func_02086b04(void *dst, int a, uint8_t *tbl, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern uint8_t data_ov000_02169a88[];

uint32_t func_ov000_0214f1a4(uint32_t a, uint32_t b, void *c, uint32_t d)
{
    uint32_t tmp;
    uint8_t buf[4];

    if (a != 2) {
        return 0;
    }
    if (d < 0x10) {
        return 0;
    }
    func_02084ca4(b, &tmp, 4);
    func_ov000_0214f1f4(tmp, buf);
    func_02086b04(c, 0x10, data_ov000_02169a88, buf[3], buf[2], buf[1], buf[0]);
    return (uint32_t)c;
}
