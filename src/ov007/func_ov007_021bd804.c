#include "ffc/types.h"

int func_ov007_021bd804(uint8_t *p) {
    uint8_t *q;
    if (*(uint32_t *)(p + 0xb8) == 0xffff6256) {
        return 0;
    }
    q = *(uint8_t **)(p + 0xc0);
    if (q != 0) {
        *q = 1;
    }
    return 1;
}
