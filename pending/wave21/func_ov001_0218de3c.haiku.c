#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov001_0218db00(void *p, uint32_t a, uint32_t b, uint32_t c, uint8_t d);

void func_ov001_0218de3c(int unused, uint32_t a, uint32_t b, uint32_t c, uint8_t d)
{
    void *p = func_0205681c(0x90);
    if (p != 0) {
        func_ov001_0218db00(p, a, b, c, d);
    }
}
