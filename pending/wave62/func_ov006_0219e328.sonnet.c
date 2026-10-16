#include "ffc/types.h"
uint32_t func_ov006_0219e328(uint8_t *p, int n) {
    uint32_t r = 0;
    int k = n - 1;
    int i = r;
    uint8_t *q = p + k;
    if (i < n) {
        do {
            uint32_t b = *q;
            q--;
            i++;
            r = (r << 8) + b;
        } while (i < n);
    }
    return r;
}
