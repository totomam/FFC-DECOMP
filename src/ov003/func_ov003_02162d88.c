#include "ffc/types.h"

int func_ov003_02162d88(uint8_t *p, int x) {
    if (x == 0) {
        *(int *)(p + 0x84) = 0;
        return 0;
    }
    return 1;
}
