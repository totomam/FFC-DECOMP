#include "ffc/types.h"

extern void *func_02077b70(void *a, void *b);

void *func_02077b90(void *p, uint32_t key)
{
    uint8_t *n;
    void *r;

    n = (uint8_t *)func_02077b70(p, 0);
    while (n != 0) {
        if (*(uint32_t *)(n + 0x18) <= key && key < *(uint32_t *)(n + 0x1c)) {
            r = func_02077b90(n + 0xc, key);
            if (r != 0) {
                return r;
            }
            return n;
        }
        n = (uint8_t *)func_02077b70(p, n);
    }
    return 0;
}
