#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov007_021afba4(void *a, void *b);

void func_ov007_021a1e10(void *p)
{
    void *r = func_0205681c(0x94);
    if (r != 0) {
        func_ov007_021afba4(r, p);
    }
}
