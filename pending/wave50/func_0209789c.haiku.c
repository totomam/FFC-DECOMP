#include "ffc/types.h"

extern void func_02097a10(void *p);
extern char data_020b367c[];

typedef void (*VFn)(void *, uint32_t, uint32_t);

void *func_0209789c(void *p0, uint32_t p1)
{
    uint32_t *w = (uint32_t *)p0;
    uint8_t *s = (uint8_t *)p0;
    uint8_t f = 0;
    uint32_t z = 0;

    w[1] = 0;
    w[2] = 0;
    w[3] = 0;
    w[4] = 0;
    w[5] = 0;
    w[6] = 0;
    *(void **)p0 = data_020b367c;
    w[7] = 0;
    w[8] = 0;

    if (p1 != 0) {
        f = 1;
    }
    s[0x38] = f;

    s[0x39] = 0;
    s[0x3a] = 0;

    w[1] = z;
    w[2] = z;
    w[3] = z;
    w[5] = z;
    w[4] = z;
    w[6] = z;
    w[0xb] = z;
    w[0xa] = z;
    w[9] = z;

    func_02097a10(p0);
    {
        VFn *vt = *(VFn **)p0;
        vt[2](p0, z, p1 >> 1);
    }
    return p0;
}
