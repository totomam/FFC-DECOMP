#include "ffc/types.h"

extern char data_020ad854[];
extern void func_02025bcc(void);
extern void func_02025bc0(void);
extern void *func_0209cec8(uint32_t size, uint32_t a, uint32_t b, void *c, void *d);

void *func_02025b7c(void *p0)
{
    uint32_t *p = (uint32_t *)p0;
    uint32_t *q;
    uint32_t n;
    uint32_t s;

    *(char **)p = data_020ad854;
    p[13] = 0;
    p[14] = 0;
    p[15] = 0;
    q = (uint32_t *)((char *)p0 + 0x3c);
    q[1] = 0;
    q[2] = 0;
    n = 0x20;

    s = n * 0x20;
    p[19] = n;
    p[18] = (uint32_t)func_0209cec8(s, 0xc, 8, (void *)func_02025bc0, (void *)func_02025bcc);
    return p0;
}
