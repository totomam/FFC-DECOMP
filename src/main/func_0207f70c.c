#include "ffc/types.h"
extern int func_0207f4bc(void *a, int b, int c);
int func_0207f70c(int a, uint8_t *o, int c, uint32_t d, uint32_t *e)
{
    uint8_t *p = o + 0x30;
    int r;
    *(uint32_t *)p = d;
    *(uint16_t *)(p + 8) = 0;
    *(uint16_t *)(p + 10) = 0;
    *(uint32_t *)(p + 4) = *e;
    r = func_0207f4bc(o, 5, 1);
    if (r == 0)
        *e = *(uint32_t *)(p + 4);
    return r;
}
