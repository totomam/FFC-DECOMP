#include "ffc/types.h"

extern int func_020074b8(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

int func_020065a4(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint16_t d, uint32_t e) {
    if (*p == 0) {
        return 0;
    }
    return func_020074b8(p + 0x2bb8, a, b, c, d, e);
}
