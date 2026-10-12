#include "ffc/types.h"

extern void *func_020279c8(void *tree, void *key, uint32_t head, uint32_t *headaddr);

void func_0202795c(void **out, uint32_t *a, uint32_t *key)
{
    uint8_t *n = (uint8_t *)func_020279c8(a, key, a[1], &a[1]);
    int found;

    found = (n == (uint8_t *)&a[1]);
    if (!found) {
        if (n + 12 == (uint8_t *)key) {
            found = 0;
        } else if (key[0] < *(uint32_t *)(n + 12)) {
            found = 1;
        } else if (key[0] > *(uint32_t *)(n + 12)) {
            found = 0;
        } else if (key[1] < *(uint32_t *)(n + 16)) {
            found = 1;
        } else if (key[1] > *(uint32_t *)(n + 16)) {
            found = 0;
        } else {
            found = *((uint8_t *)key + 8) < n[20];
        }
    }

    if (found) {
        *out = &a[1];
    } else {
        *out = n;
    }
}
