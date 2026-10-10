#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_020739cc(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_02073c00(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    void *p = func_0205681c(0x38);
    if (p != 0) {
        func_020739cc(p, a, b, c, d);
    }
}
