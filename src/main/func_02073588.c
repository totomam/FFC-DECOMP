#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02072f14(void *obj, void *a, uint32_t b, uint32_t c);

void func_02073588(void *a, uint32_t b, uint32_t c)
{
    void *p = func_0205681c(0x20);
    if (p != 0) {
        func_02072f14(p, a, b, c);
    }
}
