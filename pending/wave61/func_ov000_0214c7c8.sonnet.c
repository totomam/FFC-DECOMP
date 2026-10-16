#include "ffc/types.h"
void func_ov000_0214c7c8(uint16_t *a, uint32_t c, int i, int n) {
    do {
        c += a[i];
        a[i] = c;
        i++;
        c >>= 16;
    } while (c != 0 && i < n);
}
