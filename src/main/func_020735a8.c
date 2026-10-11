#include "ffc/types.h"

extern void *func_0205681c(uint32_t a);
extern void func_02072f4c(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);

void func_020735a8(void *a, void *b, uint32_t c, uint32_t d, uint32_t e)
{
    void *r;

    r = func_0205681c(0x30);
    if (r != 0) {
        func_02072f4c(r, a, b, c, d, e);
    }
}
