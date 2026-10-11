#include "ffc/types.h"

extern int func_ov001_02181938(void *p);

int func_ov001_021804ac(void *p, uint32_t t) {
    uint32_t d = t - *(uint32_t *)((uint8_t *)p + 0x88);
    if (d > 0x7530) {
        if (func_ov001_02181938(p) == 0) {
            return 0;
        }
    }
    return 1;
}
