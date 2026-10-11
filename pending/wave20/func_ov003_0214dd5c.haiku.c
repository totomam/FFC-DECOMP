#include "ffc/types.h"

extern void func_ov003_0214dd80(uint8_t *a, uint32_t b);

int func_ov003_0214dd5c(uint8_t *a, uint32_t b) {
    if (a[0x410] != 0) {
        if (*(uint32_t *)(a + 0x40C) >= b) {
            func_ov003_0214dd80(a, b);
            return 1;
        }
    } else {
        return 1;
    }
    return 0;
}
