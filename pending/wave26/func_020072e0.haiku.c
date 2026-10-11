#include "ffc/types.h"

extern int32_t func_020071f4(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02007214(void *a, int32_t b, int32_t c);

int32_t func_020072e0(void *a, uint32_t b, uint32_t c, uint32_t d)
{
    int32_t idx = func_020071f4(a, b, c, d);
    if (idx == -1) {
        return 0;
    }
    func_02007214(a, 1, idx);
    uint32_t *p = (uint32_t *)((uint8_t *)a + idx * 0x14);
    p[5] = b;
    p[6] = c;
    p[7] = d;
    return 1;
}
