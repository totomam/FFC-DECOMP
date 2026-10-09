#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02072e74(void *a, void *b);

void func_02073558(void *p)
{
    void *r = func_0205681c(0x18);
    if (r != 0) {
        func_02072e74(r, p);
    }
}
