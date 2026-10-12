/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t data_ov015_021d7984[];

int func_ov015_021d57c4(uint32_t *ctx, uint8_t *in, uint8_t *out, uint32_t len)
{
    uint32_t i = 0;
    uint8_t prev = 0;
    uint32_t r;
    uint32_t v;
    uint32_t (*f1)(uint32_t);

    if (len & 3) {
        return -1;
    }
    while (i < len) {
        uint8_t *p = in + i;
        uint8_t *o = out + i;
        if (i == 0) {
            f1 = (uint32_t (*)(uint32_t))(data_ov015_021d7984[0] - 0x3200);
        }
        r = f1(*(uint32_t *)p);
        if (r == 1 || r == 2) {
            if (r == 1) {
                p[3] ^= 1;
            }
            v = *(uint32_t *)p;
            *(uint32_t *)o = ((v & 0xff000000) ^ 0x01000000) | (((v & 0xffffff) + 0xc82) & 0xffffff);
        } else {
            uint32_t (*f2)(uint32_t *) = (uint32_t (*)(uint32_t *))(data_ov015_021d7984[3] - 0x3200);
            if (r == 3) {
                *(uint32_t *)p ^= 0x01000000;
            }
            *ctx = (uint32_t)p[0] ^ f2(ctx);
            o[0] = (uint8_t)*ctx;
            *ctx = (uint32_t)p[1] ^ f2(ctx);
            o[1] = (uint8_t)*ctx;
            *ctx = (uint32_t)p[2] ^ f2(ctx);
            o[2] = (uint8_t)*ctx;
        }
        prev = prev ^ p[3];
        o[3] = prev;
        *ctx = *ctx - prev;
        i += 4;
    }
    return 0;
}
