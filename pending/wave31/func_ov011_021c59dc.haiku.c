#include "ffc/types.h"

extern void func_ov011_021c5650(void);

void func_ov011_021c59dc(uint8_t *p, uint32_t x)
{
    uint32_t off = 0x4a * 4;
    uint8_t i;
    uint8_t n;

    if (p[off] != 0) {
        p[off] = 0;
        return;
    }
    off -= 0x10;
    n = p[off];
    i = 0;
    while (i < n) {
        if (x == *(uint32_t *)(p + 0xbc + i * 4)) {
            p[0x117] = i;
            func_ov011_021c5650();
            return;
        }
        i++;
    }
}
