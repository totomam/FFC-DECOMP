#include "ffc/types.h"

int func_ov011_021c1234(uint8_t *p) {
    if (*(uint32_t *)(p + 0x330) == 1) {
        return 1;
    }
    return 0;
}
