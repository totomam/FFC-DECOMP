#include "ffc/types.h"

int func_ov001_021761d8(uint32_t *a, uint8_t *b) {
    uint32_t v;
    uint32_t n;
    uint8_t *s;
    if (a == 0 || *a == 0) {
        return 2;
    }
    v = *a;
    s = (uint8_t *)(v + 0x614);
    n = 0x19;
    do {
        *b = *s;
        s++;
        b++;
        n--;
    } while (n != 0);
    return 0;
}
