#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov002_021a4174(void *a, void *b);

void func_ov002_021a41ec(void *p)
{
    void *r = func_0205681c(0x84);
    if (r != 0) {
        func_ov002_021a4174(r, p);
    }
}
