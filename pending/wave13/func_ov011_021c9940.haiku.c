#include "ffc/types.h"

extern void func_ov011_021c9824(void *p, uint32_t x);

void func_ov011_021c9940(uint8_t *p, uint32_t x) {
    if (p[0x3d4]) {
        func_ov011_021c9824(p, x);
    }
}
