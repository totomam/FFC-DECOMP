#include "ffc/types.h"

extern int32_t func_0205681c(int32_t size);
extern void func_ov007_021b0fbc(int32_t a, uint8_t b);

void func_ov007_021b118c(uint8_t *p)
{
    int32_t r = func_0205681c(0x90);
    if (r != 0) {
        func_ov007_021b0fbc(r, p[0xb0]);
    }
}
