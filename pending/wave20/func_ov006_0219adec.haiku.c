#include "ffc/types.h"

extern uint32_t func_020878ac(uint32_t a, uint32_t b);
extern void func_020878d0(uint32_t a);
extern void func_ov006_0219c878(uint32_t a, uint32_t b, uint32_t c);

void func_ov006_0219adec(uint32_t a, uint32_t b, uint32_t c)
{
    func_020878d0(func_020878ac(c, (a + 0x1f) & ~0x1f));
    func_ov006_0219c878(c, a, b);
}
