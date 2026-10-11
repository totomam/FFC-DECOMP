#include "ffc/types.h"

uint32_t func_ov007_021bd804(uint8_t *p) {
    if (*(uint32_t *)(p + 0xb8) == 0xffff6256) {
        return 0;
    }
    {
        uint8_t *q = *(uint8_t **)(p + 0xc0);
        if (q != 0) {
            *q = 1;
        }
    }
    return 1;
}
