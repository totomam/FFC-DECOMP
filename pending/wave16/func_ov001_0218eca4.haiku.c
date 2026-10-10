#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov001_0218ebcc(void *p, uint32_t a, uint32_t b);

void func_ov001_0218eca4(void *unused, uint32_t a, uint32_t b)
{
    void *p = func_0205681c(0x90);
    if (p != 0) {
        func_ov001_0218ebcc(p, a, b);
    }
}
