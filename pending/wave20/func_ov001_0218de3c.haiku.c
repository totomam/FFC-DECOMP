#include "ffc/types.h"

extern int func_0205681c(int a);
extern void func_ov001_0218db00(int a, int b, int c, int d, uint8_t e);

void func_ov001_0218de3c(int unused, int a, int b, int c, uint8_t d)
{
    int r = func_0205681c(0x90);
    if (r != 0) {
        func_ov001_0218db00(r, a, b, c, d);
    }
}
