#include "ffc/types.h"

int func_ov001_0217fdb4(uint8_t *a, uint8_t *b) {
    int i = 0;
    while (i < 0x20) {
        if (i != 0 && i != 0xd) {
            if (a[i] != b[i]) {
                return 0;
            }
        }
        i++;
    }
    return 1;
}
