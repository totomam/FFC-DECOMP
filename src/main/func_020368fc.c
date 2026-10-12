#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_02015ba4(void *unused, uint32_t index);

int func_020368fc(uint32_t mode, uint32_t index, uint32_t val) {
    uint8_t *p;

    switch (mode) {
    case 0:
        p = (uint8_t *)func_02015ba4(data_020b8e44, index);
        if (val == p[1]) {
            return 1;
        }
        return 0;
    case 1:
        p = (uint8_t *)func_02015ba4(data_020b8e44, index);
        if (val == p[0x15]) {
            return 1;
        }
        return 0;
    case 2:
        p = (uint8_t *)func_02015ba4(data_020b8e44, index);
        if (val == p[0x16]) {
            return 1;
        }
        return 0;
    default:
        return 0;
    }
}
