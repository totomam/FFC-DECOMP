#include "ffc/types.h"

void func_0202d774(uint8_t *p) {
    uint8_t *n;
    *(p + 0xb4) = 0;
    n = *(uint8_t **)(p + 0x5c);
    while (n != 0) {
        *(n + 0x41) = 0;
        n = *(uint8_t **)(n + 4);
    }
}
