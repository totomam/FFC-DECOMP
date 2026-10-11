#include "ffc/types.h"

extern void func_02023e70(void *p);

void func_0202b228(uint8_t *p, uint8_t v, uint32_t n)
{
    if (n == 0) {
        p[0x41] = v;
        return;
    }
    if (*(void **)(p + 0x34) != 0) {
        func_02023e70(*(void **)(p + 0x34));
    }
}
