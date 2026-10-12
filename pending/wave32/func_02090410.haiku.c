#include "ffc/types.h"

int func_02090410(const uint8_t *a, const uint8_t *b, uint32_t n) {
    uint8_t x;
    uint8_t y;
    if (n != 0) {
        do {
            x = *a;
            y = *b;
            a++;
            b++;
            if (x != y) {
                if (*(a - 1) < *(b - 1)) {
                    return -1;
                } else {
                    return 1;
                }
            }
            n--;
        } while (n != 0);
    }
    return 0;
}
