#include "ffc/types.h"

int func_ov006_021a3300(char *dst, int val) {
    char *p = dst;
    uint8_t n = (uint8_t)val;
    int i;
    int nib = (n & 0xf0) >> 4;
    for (i = 0; i < 2; i++) {
        if (nib <= 9) {
            nib += 0x30;
        } else {
            nib += 0x37;
        }
        *p = nib;
        p++;
        nib = n & 0xf;
    }
    *p = 0;
    return p - dst;
}
