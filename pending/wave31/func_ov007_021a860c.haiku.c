#include "ffc/types.h"

extern void *func_ov007_021a865c(void *a, uint8_t *key, uint32_t x, uint32_t *y);

void func_ov007_021a860c(void **out, uint8_t *p, uint8_t *key)
{
    uint8_t *r = (uint8_t *)func_ov007_021a865c(p, key, *(uint32_t *)(p + 4), (uint32_t *)(p + 4));
    int found;
    uint32_t i;
    if (r == p + 4) {
        found = 1;
    } else {
        found = 0;
    }
    if (found == 0) {
        for (i = 0; i < 6; i++) {
            uint8_t v = r[0xc + i];
            uint8_t k = key[i];
            if (k < v) {
                found = 1;
                break;
            }
            if (k > v) {
                found = 0;
                break;
            }
        }
    }
    if (found != 0) {
        *out = p + 4;
    } else {
        *out = r;
    }
}
