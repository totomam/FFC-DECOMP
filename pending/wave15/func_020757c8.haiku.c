#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_020754bc(void *a, uint32_t b);

void func_020757c8(uint8_t *p)
{
    void *r = func_0205681c(0x84);
    if (r != 0) {
        func_020754bc(r, *(uint32_t *)(p + 0x40));
    }
}
