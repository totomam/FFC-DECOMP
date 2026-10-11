#include "ffc/types.h"

extern int32_t func_0202b7cc(void *a, void *b, int32_t c);

int32_t func_0202d818(uint8_t *p, void *q, int32_t c)
{
    void *v = *(void **)(p + 0x84);
    if (v != 0 && c != 0) {
        if (func_0202b7cc(v, q, c) != 0) {
            return 1;
        }
    }
    return 0;
}
