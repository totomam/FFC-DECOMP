#include "ffc/types.h"

int func_ov001_02188954(uint8_t *dst, int8_t *src, int n) {
    int count = 0;
    int i;
    for (i = 0; i < n; i++) {
        uint8_t val = count;
        int8_t c = src[count];
        if (c != 0) {
            count++;
            src++;
            *dst = c;
        } else {
            *dst = val;
        }
        dst++;
    }
    return count;
}
