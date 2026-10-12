#include "ffc/types.h"

extern int32_t func_0208bf10(void *obj, void *fmt, int32_t *a, int32_t *b, int32_t *c, int32_t *d);
extern uint8_t data_ov001_0218ffa4[];
extern uint16_t data_020a6254[];

static inline int32_t isf(int32_t c)
{
    int32_t sel = 1;
    int32_t f;
    if (c >= 0 && c < 0x80) sel = 0;
    if (sel) f = 0;
    else f = data_020a6254[c] & 0x100;
    return f;
}

int32_t func_ov001_02174e48(uint8_t *self)
{
    int32_t v14, v10, vc, v8, ret, c;

    ret = func_0208bf10(*(void **)(self + 0xa4), data_ov001_0218ffa4, &v14, &v10, &vc, &v8);
    if (ret != 3 || v14 < 1 || vc < 100 || vc >= 600) {
        *(int32_t *)(self + 0x124) = 1;
        *(int32_t *)(self + 0x40) = 7;
        return 0;
    } else {
        while ((c = ((int8_t *)*(void **)(self + 0xa4))[v8]) != 0 && isf(c) != 0)
            v8++;

        *(int32_t *)(self + 0x110) = v14;
        *(int32_t *)(self + 0x114) = v10;
        *(int32_t *)(self + 0x118) = vc;
        *(int32_t *)(self + 0x11c) = v8;
        return 1;
    }
}
