#include "ffc/types.h"

int func_0202b934(void *p) {
    uint8_t *b = (uint8_t *)p;
    if (b[0x40] != 0) {
        if (*(int32_t *)(b + 0x14) >= *(int32_t *)(b + 0x18)) {
            if (b[0x41] != 0) {
                if (*(uint32_t *)(b + 0x60) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
