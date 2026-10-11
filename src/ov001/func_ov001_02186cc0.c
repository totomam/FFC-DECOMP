#include "ffc/types.h"

extern void func_ov001_02185f6c(void *a, uint32_t b);

void func_ov001_02186cc0(uint8_t *p, void *q)
{
    void *v = *(void **)(p + 0x7d8);
    if (v == 0) {
        func_ov001_02185f6c(q, 0);
    } else {
        func_ov001_02185f6c(q, (uint32_t)v);
    }
    *(void **)(p + 0x7d8) = q;
}
