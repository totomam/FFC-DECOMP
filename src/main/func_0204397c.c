#include "ffc/types.h"

int func_0204397c(uint8_t *self, uint8_t *arg)
{
    void *x = *(void **)(self + 0x8c);
    uint32_t *s;
    uint32_t off;

    if (x != 0) {
        s = *(uint32_t **)(self + 0xc0);
        if (s[0] == 0xa) {
            off = *(uint32_t *)(arg + 8);
            if (s[1] == *(uint32_t *)(arg + off)) {
                return 1;
            }
        }
    }
    return 0;
}
