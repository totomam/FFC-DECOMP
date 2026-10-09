#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov007_021afde8(void *a, void *b);

void func_ov007_021a1df8(void *p)
{
    void *r = func_0205681c(0xec);
    if (r != 0) {
        func_ov007_021afde8(r, p);
    }
}
