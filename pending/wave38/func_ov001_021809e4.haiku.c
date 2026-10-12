#include "ffc/types.h"

extern int32_t func_ov001_021808cc(void *a, uint32_t b, uint32_t c);
extern int32_t func_ov000_02168768(uint32_t x);
extern int32_t func_ov001_02180124(void *a, int32_t b, uint32_t c, uint32_t d, int32_t e);
extern int32_t func_ov001_0217ffa8(void *a, uint32_t b, uint32_t c, int32_t d);

int32_t func_ov001_021809e4(void *p, uint32_t a, uint32_t b) {
    int32_t state = *(int32_t *)((uint8_t *)p + 0xc);
    int32_t ret;
    if (state == 5 || state == 6) {
        if (func_ov000_02168768(*(uint32_t *)((uint8_t *)p + 0x9c)) != 0) {
            ret = 1;
            if (func_ov001_02180124(p, 0, a, b, 1) == 0) {
                ret = 0;
            }
            return ret;
        }
        if (func_ov001_0217ffa8(p, a, b, 1) != 0) {
            return 1;
        }
        return 0;
    }
    if (func_ov001_021808cc(p, a, b) != 0) {
        return 1;
    }
    return 0;
}
