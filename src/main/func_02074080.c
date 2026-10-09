#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02073c48(void *a, void *b);

void func_02074080(void *p)
{
    void *r = func_0205681c(0x98);
    if (r != 0) {
        func_02073c48(r, p);
    }
}
