#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov003_0214cf9c(void *a, void *b);

void func_ov003_0214d43c(void *p)
{
    void *r = func_0205681c(0x9c);
    if (r != 0) {
        func_ov003_0214cf9c(r, p);
    }
}
