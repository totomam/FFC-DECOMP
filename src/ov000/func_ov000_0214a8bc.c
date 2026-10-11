#include "ffc/types.h"

void func_ov000_0214a8bc(uint8_t *p) {
    int i = 8;
    do {
        uint8_t v;
        p--;
        v = (uint8_t)(*p + 1);
        *p = v;
        if (v != 0) {
            return;
        }
        i--;
    } while (i != 0);
}
