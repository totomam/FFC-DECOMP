#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056f0c(void *a, void *b);

void func_0203b708(void *p)
{
    void *r = func_0205681c(0x18);
    if (r != 0) {
        func_02056f0c(r, p);
    }
}
