#include "ffc/types.h"

void func_ov006_0219ee44(int8_t *a, uint8_t *b, int32_t len) {
    int32_t i;
    int32_t n = len / 2;
    uint8_t *p;
    i = 0;
    if (n > 0) {
        p = b + n;
        do {
            int8_t s = a[i];
            *p = *p ^ s;
            p++;
            i++;
        } while (i < n);
    }
}
