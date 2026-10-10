#include "ffc/types.h"

int func_ov007_021bc668(uint8_t *p)
{
    uint8_t *q = *(uint8_t **)(p + 0xc0);
    if (q != 0) {
        *q = 1;
    }
    return 1;
}
