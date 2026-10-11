#include "ffc/types.h"

extern int32_t func_ov002_02198d34(uint8_t *p);

int32_t func_ov002_02198d48(uint8_t *p) {
    if (func_ov002_02198d34(p) != 0) {
        return -1;
    }
    return *(int32_t *)(*(uint8_t **)(p + 0x100) + 0x2FC);
}
