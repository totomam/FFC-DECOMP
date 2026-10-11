#include "ffc/types.h"

extern void *func_0207a7e8(void *p);
extern int32_t func_0207b578(void *a, uint8_t b, uint16_t h, uint8_t c, void *p, void *q);

int32_t func_0207b4f8(void *a, void *b)
{
    uint8_t *p = (uint8_t *)func_0207a7e8(b);
    if (p == 0) {
        return 0;
    }
    return func_0207b578(a, p[9], *(uint16_t *)(p + 4), p[8], p, b);
}
