#include "ffc/types.h"

int func_ov002_02198d34(void *p) {
    uint32_t **pp = (uint32_t **)((uint8_t *)p + 0x100);
    if (**pp == 3) {
        return 1;
    }
    return 0;
}
