/* cflags: -nothumb */
#include "ffc/types.h"

int func_ov014_0214650c(uint8_t *s)
{
    int32_t *P;
    int32_t r4;
    int32_t i;
    uint32_t ret;

    if (*(uint32_t *)(s + 0x9c) > *(uint32_t *)(s + 0xa0)) {
        return 0;
    }

    P = *(int32_t **)(s + 0x34);
    if (**(uint16_t **)P & 0x8000) {
        *(int32_t *)(s + 0xa4) = 1;
        r4 = 4;
    } else {
        r4 = 0;
        *(int32_t *)(s + 0xa4) = 0;
    }

    ret = ((uint32_t (*)(void *))(*(void **)(s + 0x38)))(*(void **)(s + 0x34));

    P = *(int32_t **)(s + 0x34);
    *P += ret;

    if (*(int8_t *)(s + 8) == 0x4e && *(int8_t *)(s + 9) == 0x33) {
        P = *(int32_t **)(s + 0x34);
        *P += r4;
    }

    P = *(int32_t **)(s + 0x34);
    ((int32_t *)(*(void **)(s + 0x64)))[*(int32_t *)(s + 0xac)] =
        *(int32_t *)((uint8_t *)P + 0x3b4);

    *(int32_t *)(s + 0xcc) = 0;
    *(int32_t *)(s + 0xd0) = 0;

    for (i = 0; i < 6; i++) {
        uint8_t *q = s + (i << 2);
        int32_t v = *(int32_t *)(q + 0xac) + 1;
        *(int32_t *)(q + 0xac) = v;
        if (*(int32_t *)(s + 0xa8) == v) {
            *(int32_t *)(q + 0xac) = 0;
        }
    }

    *(int32_t *)(s + 0xa0) += 1;
    return 1;
}
