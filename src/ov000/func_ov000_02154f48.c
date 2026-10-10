#include "ffc/types.h"

extern uint32_t func_ov000_02154e3c(void);
extern void func_ov000_02154ed8(uint32_t a, uint32_t b);

void func_ov000_02154f48(uint32_t a, uint32_t flag)
{
    uint32_t v;
    if (flag) {
        v = func_ov000_02154e3c() | 16;
    } else {
        v = func_ov000_02154e3c() & ~16u;
    }
    func_ov000_02154ed8(a, v);
}
