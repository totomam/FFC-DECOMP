#include "ffc/types.h"

extern uint64_t func_ov000_02154de4(uint32_t *a);
extern uint32_t func_ov000_02154dfc(uint32_t *a);
extern void func_ov000_02155058(uint64_t a, uint32_t n, void *p);
extern void func_02086b04(uint32_t a, int b, const void *c, void *d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, void *i);
extern uint8_t data_ov000_02169b50[];

void func_ov000_0215509c(uint32_t *a, uint32_t b, uint32_t c)
{
    uint8_t buf[0x2c];
    uint8_t *p;
    uint64_t t;

    t = func_ov000_02154de4(a);
    p = buf + 0x15;
    func_ov000_02155058(t, 0x2b, p);
    func_ov000_02155058(func_ov000_02154dfc(a), 0x20, buf);
    func_02086b04(c, 0x15, data_ov000_02169b50, p, (uint8_t)(b >> 24), (uint8_t)(b >> 16), (uint8_t)(b >> 8), (uint8_t)b, buf);
}
