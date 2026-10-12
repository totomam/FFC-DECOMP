#include "ffc/types.h"

extern int32_t func_ov001_02171ac0(void *a, void *b, int32_t c);
extern uint8_t data_ov001_0218f320[];
extern uint8_t data_ov001_0218f324[];

int32_t func_ov001_02171c60(void *a, void *b, void *c)
{
    int32_t r = 0;

    if (func_ov001_02171ac0(a, b, 0) == 0) {
        return r;
    }
    if (func_ov001_02171ac0(a, data_ov001_0218f320, 2) == 0) {
        return r;
    }
    if (func_ov001_02171ac0(a, c, 0) == 0) {
        return r;
    }
    if (func_ov001_02171ac0(a, data_ov001_0218f324, 2) != 0) {
        r = 1;
    }
    return r;
}
