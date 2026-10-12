#include "ffc/types.h"

extern void *func_ov007_021a865c(void *a, uint8_t *key, uint32_t x, uint32_t *y);

static inline int lt(const uint8_t *a, const uint8_t *b)
{
    uint32_t i;
    for (i = 0; i < 6; i++) {
        if (a[i] < b[i]) return 1;
        if (a[i] > b[i]) return 0;
    }
    return 0;
}

void func_ov007_021a860c(void **out, uint8_t *p, uint8_t *key)
{
    uint8_t *r = (uint8_t *)func_ov007_021a865c(p, key, *(uint32_t *)(p + 4), (uint32_t *)(p + 4));
    int found = (r == p + 4) ? 1 : 0;
    if (!found) found = lt(key, r + 0xc);
    if (found) *out = p + 4;
    else *out = r;
}
