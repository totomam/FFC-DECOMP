#include "ffc/types.h"

extern uint32_t func_ov000_021689a8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t *f);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov000_02168794(uint32_t *self, uint32_t a, uint32_t b);

void func_ov000_021687e0(uint32_t *self, uint32_t a, uint32_t b)
{
    uint32_t local;
    uint32_t r;

    r = func_ov000_021689a8(a, self[5], self[0], self[2], b, &local);
    r = func_0209a76c(r - self[5], self[2]);
    func_ov000_02168794(self, a, r);
}
