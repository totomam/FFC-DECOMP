#include "ffc/types.h"

extern void func_ov004_02151d0c(void *p);

int func_ov004_02151e48(void *p) {
    uint8_t *b = (uint8_t *)p;
    if (*(uint32_t *)(b + 0x148) != 0) {
        func_ov004_02151d0c(p);
        return 1;
    }
    return 0;
}
