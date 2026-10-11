#include "ffc/types.h"

extern int32_t func_02006f10(void *p, int16_t a, int16_t b, int16_t c);

int32_t func_02006334(uint8_t *p, int32_t a, int32_t b, int32_t c) {
    if (p[0] != 0) {
        return func_02006f10(p + 0x2a14, (int16_t)a, (int16_t)b, (int16_t)c);
    }
    return 0;
}
