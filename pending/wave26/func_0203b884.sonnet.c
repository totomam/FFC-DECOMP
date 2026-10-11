#include "ffc/types.h"
typedef struct { uint32_t x, y, z; } S;
extern void *func_0205681c(uint32_t size);
extern void func_020683e4(void *p, uint32_t a, uint32_t b, S s);

void func_0203b884(uint32_t a, uint32_t b, S s)
{
    void *p = func_0205681c(0x70);
    if (p != 0) {
        func_020683e4(p, a, b, s);
    }
}
