/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t data_ov015_021d79b4;
extern uint32_t data_ov015_021d79b8;

uint32_t func_ov015_021d6768(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t *f) {
    uint32_t fn = ((uint32_t (*)(uint32_t, uint32_t, uint32_t))(data_ov015_021d79b4 - 0x3200))(f[1], f[2], f[3]);
    uint32_t r = ((uint32_t (*)(uint32_t, uint32_t, uint32_t, uint32_t))fn)(a, b, c, d);
    f[1] = ((uint32_t (*)(uint32_t, uint32_t, uint32_t))(data_ov015_021d79b8 - 0x3200))(f[1], f[2], f[3]);
    return r;
}
