#include "ffc/types.h"

void *func_ov001_0217c128(uint8_t **self, uint32_t id)
{
    uint8_t *n = *(uint8_t **)(*self + 0x5d8);
    while (n != 0) {
        if (*(uint32_t *)(n + 0x10) == id) {
            return n;
        }
        n = *(uint8_t **)(n + 0x4c);
    }
    return 0;
}
