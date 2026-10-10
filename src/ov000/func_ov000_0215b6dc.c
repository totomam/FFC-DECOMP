#include "ffc/types.h"

extern void *func_ov001_02180840(void);

uint32_t func_ov000_0215b6dc(void) {
    uint8_t *p = (uint8_t *)func_ov001_02180840();
    if (p) {
        return p[1];
    }
    return 0xff;
}
