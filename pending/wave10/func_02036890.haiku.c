#include "ffc/types.h"

int func_02036890(void *p) {
    int count = 0;
    uint32_t i;
    for (i = 0; i < 5; i++) {
        if (((uint8_t *)p)[0x34 + i * 4]) {
            count++;
        }
    }
    return count;
}
