#include "ffc/types.h"

uint32_t func_ov000_02154dc0(uint32_t *p, uint32_t value, uint32_t shift, uint32_t mask) {
    if (value & ~mask) {
        return 0;
    }
    *p = (*p & ~(mask << shift)) | (value << shift);
    return 1;
}
