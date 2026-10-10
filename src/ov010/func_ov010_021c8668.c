#include "ffc/types.h"

extern void *func_02015ba4(void *unused, uint32_t index);
extern void *data_020b8e44;

int func_ov010_021c8668(void *unused, uint32_t *p1, uint32_t *p2) {
    uint16_t a = *(uint16_t *)((uint8_t *)func_02015ba4(data_020b8e44, *p1) + 0x34);
    uint16_t b = *(uint16_t *)((uint8_t *)func_02015ba4(data_020b8e44, *p2) + 0x34);
    if (a < b) {
        return 1;
    }
    return 0;
}
