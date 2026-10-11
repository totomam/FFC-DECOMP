#include "ffc/types.h"

void func_ov006_0219ee44(int8_t *a, uint8_t *b, int32_t len) {
    int32_t n = len / 2;
    int32_t i = 0;
    if (n > 0) {
        uint8_t *p = b + n;
        do {
            int8_t s = a[i];
            i++;
            *p = *p ^ s;
            p++;
        } while (i < n);
    }
}
