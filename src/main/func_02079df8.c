#include "ffc/types.h"

extern void func_02089b98(uint8_t a, uint8_t b);

void func_02079df8(uint8_t *a, uint8_t b) {
    if (a != 0) {
        if (b != a[0x2e]) {
            func_02089b98(a[0x3c], b);
            a[0x2e] = b;
        }
    }
}
