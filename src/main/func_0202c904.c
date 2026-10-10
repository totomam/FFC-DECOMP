#include "ffc/types.h"

extern void func_02023e70(void *a, uint8_t b, uint32_t c);

void func_0202c904(void *p)
{
    uint8_t *b = (uint8_t *)p;
    void *x = *(void **)(b + 0x34);
    if (x) {
        func_02023e70(x, b[0x46], 0);
    }
}
