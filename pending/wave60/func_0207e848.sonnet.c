#include "ffc/types.h"
extern int32_t func_0207e7e4(uint8_t *s);
int32_t func_0207e848(uint8_t *s) {
    int32_t i;
    uint8_t c;
    do {
        i = func_0207e7e4(s);
        if (i < 0) break;
        c = s[i];
        if (c == 0x2f) break;
    } while (c != 0x5c);
    return i;
}
