#include "ffc/types.h"

extern int32_t func_02024d88(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f, int32_t g);

int32_t func_ov003_02153ce8(uint8_t *s, int32_t a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f)
{
    int32_t *obj = *(int32_t **)(s + 0x1e4);
    if (obj != 0) {
        return func_02024d88(obj[0xd], a, b, c, d, e, f);
    }
    return 1;
}
