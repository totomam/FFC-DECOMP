#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_02015ba4(void *unused, uint32_t index);

uint32_t func_020369d4(void *unused, uint32_t index) {
    uint8_t *p = (uint8_t *)func_02015ba4(data_020b8e44, index);
    if (*(uint16_t *)(p + 0x38) != 0) {
        return *(uint16_t *)(p + 0x38);
    }
    return index;
}
