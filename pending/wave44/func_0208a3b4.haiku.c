#include "ffc/types.h"

extern void func_020878ac(void *p, uint32_t n);

void func_0208a3b4(void *arg)
{
    uint8_t *p = (uint8_t *)arg;
    int i, j, k;

    *(uint32_t *)(p + 4) = 0;
    *(uint16_t *)(p + 8) = 0;
    *(uint16_t *)(p + 0xa) = 0;
    *(uint32_t *)(p) = 0;

    for (i = 0; i < 16; i++) {
        uint8_t *e = p + i * 0x24;
        *(uint32_t *)(e + 0x40) = 0;
        for (j = 0; j < 16; j++) {
            *(int16_t *)(e + 0x20 + j * 2) = -1;
        }
    }

    for (k = 0; k < 16; k++) {
        *(int16_t *)(p + k * 2 + 0x260) = -1;
    }

    func_020878ac(p, 0x280);
}
