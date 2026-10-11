#include "ffc/types.h"

extern int func_ov001_02179d24(uint8_t a, uint8_t b, uint32_t c, uint32_t *d);
extern int func_ov001_0217ef6c(void *p, void *s);
extern uint8_t data_ov001_02190b74[];

int func_ov001_02179e00(void *p0, int32_t x, uint32_t *p2, uint32_t *p3, uint32_t *p4)
{
    uint8_t a = (uint8_t)(x >> 24);
    uint8_t b = (uint8_t)(x >> 16);
    uint32_t c = ((uint32_t)x << 16) >> 16;

    if (func_ov001_02179d24(a, b, c, p3) == 0) {
        func_ov001_0217ef6c(p0, data_ov001_02190b74);
        return 2;
    }
    *p2 = a;
    *p3 = b;
    *p4 = c;
    return 0;
}
