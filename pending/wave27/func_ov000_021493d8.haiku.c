#include "ffc/types.h"

extern int32_t func_ov000_02149540(void *p);
extern int32_t func_ov000_0214946c(void *p);

int32_t func_ov000_021493d8(uint8_t *p) {
    uint8_t v = p[0xe7];
    if (v == 0xff) {
        return 1;
    }
    if (v > 2) {
        return 0;
    }
    if (func_ov000_02149540(p + 0x40) == 0) {
        return 0;
    }
    if (func_ov000_0214946c(p) != 0) {
        return 1;
    }
    return 0;
}
