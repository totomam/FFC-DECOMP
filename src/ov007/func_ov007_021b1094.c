#include "ffc/types.h"

extern void *func_0205681c(uint32_t);
extern void func_ov007_021b0fbc(void *, int);

void func_ov007_021b1094(void)
{
    void *p = func_0205681c(0x90);
    if (p != 0) {
        func_ov007_021b0fbc(p, 0);
    }
}
