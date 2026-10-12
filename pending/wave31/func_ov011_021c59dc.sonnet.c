#include "ffc/types.h"

extern void func_ov011_021c5650(void);

void func_ov011_021c59dc(uint8_t *p, uint32_t x)
{
    uint8_t i;
    uint8_t n;

    if (*(uint8_t *)(p + 0x128) != 0) {
        *(uint8_t *)(p + 0x128) = 0;
        return;
    }
    n = *(uint8_t *)(p + 0x118);
    for (i = 0; i < n; i++) {
        if (x == *(uint32_t *)(p + 0xbc + i * 4)) {
            p[0x117] = i;
            func_ov011_021c5650();
            return;
        }
    }
}
