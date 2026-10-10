#include "ffc/types.h"

extern int func_ov001_02178324(void *a, void *b, uint32_t c);

int func_ov001_0217a648(uint32_t *a, uint32_t b, uint32_t c)
{
    uint8_t *p = (uint8_t *)*a;
    int r;

    r = func_ov001_02178324(a, p + 0x5e4, b);
    if (r != 0) {
        return r;
    }
    r = func_ov001_02178324(a, p + 0x5e4, c);
    if (r != 0) {
        return r;
    }
    return 0;
}
