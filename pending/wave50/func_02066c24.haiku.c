#include "ffc/types.h"

extern void func_02066164(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, int32_t d, uint32_t e);

void func_02066c24(uint8_t *p, int32_t x, uint32_t y)
{
    uint32_t i;
    int32_t ok;
    uint8_t *e;

    i = 0;
    if (*(uint32_t *)(p + 0x30) == 0) {
        return;
    }
    do {
        ok = 0;
        if (x >= *(int32_t *)(*(uint8_t **)(p + 0x2c) + i * 0x1c + 4)) {
            if (x < *(int32_t *)(*(uint8_t **)(p + 0x2c) + i * 0x1c + 0xc)) {
                ok = 1;
            }
        }
        if (ok) {
            e = *(uint8_t **)(p + 0x2c) + i * 0x1c;
            func_02066164(p, *(uint32_t *)(p + 0x48), *(uint32_t *)(e + 0x18),
                          (*(uint32_t *)(e + 8) - *(uint32_t *)e) >> 3,
                          x - *(int32_t *)(e + 4), y + *(uint32_t *)e);
        }
        i++;
    } while (i < *(uint32_t *)(p + 0x30));
}
