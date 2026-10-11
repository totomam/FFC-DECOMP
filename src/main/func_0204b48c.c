#include "ffc/types.h"

extern void func_0204b424(void *a, uint32_t b, void *c);

void func_0204b48c(void **p, uint32_t x)
{
    while (*p != 0) {
        func_0204b424(p, x, ((void **)*p)[2]);
    }
}
