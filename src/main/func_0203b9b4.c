#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02057a24(void *a, void *b);

void func_0203b9b4(void *p)
{
    void *r = func_0205681c(0x2c);
    if (r != 0) {
        func_02057a24(r, p);
    }
}
