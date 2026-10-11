#include "ffc/types.h"

extern uint32_t func_ov000_021658c0(uint32_t x);
extern void func_ov001_0217f2c4(void *s, uint32_t y);
extern void func_ov000_02168abc(uint32_t a, void *s);
extern void func_ov001_0217f324(uint32_t *p, uint32_t y);
extern void func_ov001_0217f30c(void);
extern uint32_t *data_ov001_02194c28;

void func_ov001_0217efc8(uint32_t *p, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t s[5];
    if (p == 0) {
        p = data_ov001_02194c28;
    }
    s[0] = func_ov000_021658c0(x);
    s[1] = y;
    s[3] = 0;
    s[2] = 1;
    func_ov001_0217f2c4(s, z);
    func_ov000_02168abc(*p, s);
    func_ov001_0217f324(p, x);
    func_ov001_0217f30c();
}
