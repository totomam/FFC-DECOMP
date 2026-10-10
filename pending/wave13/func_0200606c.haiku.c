#include "ffc/types.h"

extern void func_02006080(void *p);

void *func_0200606c(void *p)
{
    if (((uint8_t *)p)[0xc] != 0) {
        func_02006080(p);
    }
    return p;
}
