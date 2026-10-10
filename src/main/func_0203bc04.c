#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0205e2f0(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_0203bc04(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    void *p = func_0205681c(0x70);
    if (p != 0) {
        func_0205e2f0(p, a, b, c, d);
    }
}
