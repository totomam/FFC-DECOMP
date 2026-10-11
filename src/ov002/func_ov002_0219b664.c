#include "ffc/types.h"

int func_ov002_0219b664(uint8_t *p) {
    if (*(uint32_t *)(p + 0x80) == *(uint32_t *)(p + 0x88)) {
        return 0;
    }
    return 1;
}
