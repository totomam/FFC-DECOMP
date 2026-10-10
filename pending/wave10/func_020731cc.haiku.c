#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0207246c(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);

void func_020731cc(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    void *p = func_0205681c(0x30);
    if (p != 0) {
        func_0207246c(p, a, b, c, d, e, f);
    }
}
