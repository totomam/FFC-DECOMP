/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t data_ov015_021d7984[];

int func_ov015_021d57c4(uint32_t *ctx, uint8_t *in, uint8_t *out, uint32_t len)
{
    uint8_t *p, *o;
    uint32_t prev = 0;
    uint32_t i;
    uint32_t (*f1)(uint32_t);
    uint32_t (*f2)(uint32_t *);

    if (len & 3) {
        return -1;
    }
    i = 0;
    if (i < len) {
    f1 = (uint32_t (*)(uint32_t))(data_ov015_021d7984[0] - 0x3200);
    f2 = (uint32_t (*)(uint32_t *))(data_ov015_021d7984[3] - 0x3200);
    do {
        uint32_t r = f1(*(uint32_t *)(in + i));
        p = in + i;
        uint32_t v;
        switch (r) {
        case 1:
            p[3] ^= 1;
        case 2:
            v = *(uint32_t *)p;
            o = out + i;
            *(uint32_t *)o = ((v & 0xff000000) ^ 0x01000000) | (((v & 0xffffff) + 0xc82) & 0xffffff);
            break;
        case 3:
            *(uint32_t *)p ^= 0x01000000;
        default:
            o = out + i;
            *ctx = p[0] ^ f2(ctx);
            o[0] = *ctx;
            *ctx = p[1] ^ f2(ctx);
            o[1] = *ctx;
            *ctx = p[2] ^ f2(ctx);
            o[2] = *ctx;
            break;
        }
        prev = (uint8_t)(prev ^ p[3]);
        o[3] = prev;
        *ctx = *ctx - prev;
        i += 4;
    } while (i < len);
    }
    return 0;
}
