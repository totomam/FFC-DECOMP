#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02047ea0(void *a, void *b);

void func_ov003_0216c814(void *p)
{
    void *r = func_0205681c(0x8c);
    if (r != 0) {
        func_02047ea0(r, p);
    }
}
