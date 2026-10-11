#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t flags);
extern void func_ov008_0219d214(uint32_t a, uint32_t b);

void func_02041a70(uint8_t *p)
{
    uint32_t r = func_0205681c(0x80);
    if (r != 0) {
        uint32_t *q = (uint32_t *)(p + 0x90);
        func_ov008_0219d214(r, *q);
    }
}
