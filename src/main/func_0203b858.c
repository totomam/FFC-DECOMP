#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02068c18(void *obj, void *a, uint32_t b, uint32_t c);

void func_0203b858(void *a, uint32_t b, uint32_t c)
{
    void *p = func_0205681c(0x4c);
    if (p != 0) {
        func_02068c18(p, a, b, c);
    }
}
