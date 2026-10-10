#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0205f574(void *obj, void *a, uint32_t b, uint32_t c);

void func_0203b7fc(void *a, uint32_t b, uint32_t c)
{
    void *p = func_0205681c(0x50);
    if (p != 0) {
        func_0205f574(p, a, b, c);
    }
}
