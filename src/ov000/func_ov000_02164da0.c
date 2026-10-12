#include "ffc/types.h"

extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern uint8_t data_ov000_02170a18[];
extern uint8_t data_ov000_02170a10[];
extern uint8_t data_ov000_0216b37c[];

int32_t func_ov000_02164da0(uint8_t *a, int32_t n, uint8_t *b, uint32_t *out)
{
    if (n < 7) {
        return 1;
    }
    if (func_02090410(b + 4, data_ov000_02170a18, 4) != 0) {
        return 1;
    }
    if (*(uint16_t *)(b + 2) != ((uint16_t *)data_ov000_02170a10)[3]) {
        return 1;
    }
    if (func_02090410(a, data_ov000_0216b37c, 3) != 0) {
        return 1;
    }
    {
        int8_t c3 = (int8_t)a[3];
        int8_t c4 = (int8_t)a[4];
        int8_t c5 = (int8_t)a[5];
        uint32_t v = ((uint32_t)c3 << 24) & 0xff000000u;
        v |= ((uint32_t)c4 << 16) & 0x00ff0000u;
        v |= ((uint32_t)c5 << 8) & 0x0000ff00u;
        v |= a[6];
        *out = v;
    }
    return 0;
}
