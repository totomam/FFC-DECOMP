#include "ffc/types.h"

extern int32_t func_ov000_0214aa70(uint8_t *a, uint8_t *b);
extern void func_ov000_02147c54(uint8_t *a, int32_t b, int32_t c, int32_t d, uint8_t *e);

void func_ov000_0214b8e0(uint8_t *r5)
{
    uint8_t *r4 = *(uint8_t **)(r5 + 0xc);
    uint8_t local[0x1c];
    uint8_t *p;
    int32_t res;

    if (r4[0x455] == 8) {
        p = local;
        p[0] = 0x15;
        p[1] = 3;
        p[2] = 0;
        p[3] = 0;
        p[4] = 2;
        p[5] = 1;
        p[6] = 0;
        res = func_ov000_0214aa70(r4, p);
        func_ov000_02147c54(p, res, 0, 0, r5);
    }
    r4[0x455] = 0;
}
