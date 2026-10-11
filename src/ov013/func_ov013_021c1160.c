#include "ffc/types.h"

int func_ov013_021c1160(void *p) {
    int count = 0;
    uint32_t i;
    for (i = 0; i < 3; i++) {
        if (((uint8_t *)p)[0x8c + i * 8]) {
            count++;
        }
    }
    return count;
}
