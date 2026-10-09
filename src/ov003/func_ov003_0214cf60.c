#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov003_0214c98c(void *a, void *b);

void func_ov003_0214cf60(void *p)
{
    void *r = func_0205681c(0x9c);
    if (r != 0) {
        func_ov003_0214c98c(r, p);
    }
}
