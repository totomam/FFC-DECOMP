#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02039594(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_0203bd04(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    void *p = func_0205681c(0x60);
    if (p != 0) {
        func_02039594(p, a, b, c, d);
    }
}
