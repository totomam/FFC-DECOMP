#include "ffc/types.h"

extern void func_ov000_021686c0(void *p);
extern uint32_t func_ov000_0216876c(void *p, int32_t idx);
extern void func_02090398(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov000_021686dc(void *p, uint32_t v, int32_t n);

void func_ov000_02168794(int32_t *p, uint32_t v, int32_t n)
{
    int32_t x;
    uint32_t r7;
    if (p[0] == p[1]) {
        func_ov000_021686c0(p);
    }
    x = ++p[0] - 1;
    if (n < x) {
        r7 = func_ov000_0216876c(p, n + 1);
        func_02090398(r7, func_ov000_0216876c(p, n), (uint32_t)(x - n) * (uint32_t)p[2]);
    }
    func_ov000_021686dc(p, v, n);
}
