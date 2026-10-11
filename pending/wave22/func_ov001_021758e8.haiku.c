#include "ffc/types.h"

extern int func_ov001_021768a0(void *a, int b);

int func_ov001_021758e8(void *p)
{
    uint32_t *q;

    if (p == 0 || (q = *(uint32_t **)p) == 0) {
        return 2;
    }
    if (*(uint32_t *)((uint8_t *)q + 0x108) != 0) {
        return 0;
    }
    return func_ov001_021768a0(p, 0);
}
