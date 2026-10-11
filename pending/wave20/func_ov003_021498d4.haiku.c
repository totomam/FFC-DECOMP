#include "ffc/types.h"

extern uint32_t func_0202144c(void);
extern void func_020211d4(uint32_t a, uint32_t b);

void func_ov003_021498d4(uint32_t *p0, uint32_t p1, uint32_t p2)
{
    uint32_t *base = p0;
    base[0x7a] = p1;
    base[0x7a + 2] = func_0202144c();
    base[0x7a + 1] = 1;
    func_020211d4(p1, p2);
}
