/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t data_ov015_021d7984[];

int func_ov015_021d590c(uint32_t *sl, uint8_t *in, uint8_t *out, uint32_t len)
{
    uint32_t i;
    uint32_t prev;
    uint32_t orig;
    uint32_t w;
    int r;
    int (*f1)(uint32_t);
    uint32_t (*f2)(uint32_t *);

    if (len & 3) {
        return -1;
    }
    if (len == 0) {
        return 0;
    }
    f1 = (int (*)(uint32_t))(data_ov015_021d7984[0] - 0x3200);
    f2 = (uint32_t (*)(uint32_t *))(data_ov015_021d7984[3] - 0x3200);
    prev = 0;
    i = 0;
    do {
        uint8_t *b = in + i;
        uint8_t *o = out + i;

        orig = b[3];
        b[3] = orig ^ prev;
        prev = orig;
        w = *(uint32_t *)b;
        r = f1(w);
        if (r == 1 || r == 3) {
            if (r == 1) {
                b[3] ^= 1;
            }
            *(uint32_t *)o = ((w & 0xff000000u) ^ 0x01000000u) |
                             (((w & 0x00ffffffu) + 0xfffff37eu) & 0x00ffffffu);
        } else {
            *sl = b[0];
            o[0] = b[0] ^ f2(sl);
            *sl = b[1];
            o[1] = b[1] ^ f2(sl);
            *sl = b[2];
            o[2] = b[2] ^ f2(sl);
            o[3] = b[3] ^ (r == 2);
        }
        *sl -= orig;
        i += 4;
    } while (i < len);
    return 0;
}
