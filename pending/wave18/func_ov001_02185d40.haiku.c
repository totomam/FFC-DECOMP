#include "ffc/types.h"

extern int func_ov001_0218570c(void *p, int b);

int func_ov001_02185d40(uint8_t *a, int b)
{
    int r = func_ov001_0218570c(a + 8, b);
    if (r == 0) {
        r = func_ov001_0218570c(a + 0x14, b);
    }
    return r;
}
