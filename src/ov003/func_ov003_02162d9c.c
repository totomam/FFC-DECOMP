#include "ffc/types.h"

int func_ov003_02162d9c(uint8_t *p, int x) {
    if (x == 0) {
        *(int *)(p + 0x88) = 0;
        return 0;
    }
    return 1;
}
