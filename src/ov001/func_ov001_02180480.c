#include "ffc/types.h"

extern int func_ov001_02181a30(void *p, uint32_t d);

int func_ov001_02180480(uint8_t *p, uint32_t t) {
    if (*(uint32_t *)(p + 0x90) == 0) {
        return 1;
    }
    t = t - *(uint32_t *)(p + 0x94);
    if (t > 0x64) {
        if (func_ov001_02181a30(p, t) == 0) {
            return 0;
        }
    }
    return 1;
}
