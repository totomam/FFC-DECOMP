/* cflags: -nothumb */
#include "ffc/types.h"
extern uint32_t data_ov015_021d7984[];
typedef int (*FA)(uint32_t);
typedef uint32_t (*FB)(uint32_t *);
int func_ov015_021d590c(uint32_t *self, uint8_t *in, uint8_t *out, uint32_t size)
{
    uint32_t i;
    uint32_t prev = 0;
    FA fa;
    FB fb;
    if (size & 3) return prev - 1;
    i = prev;
    if (size != 0) {
    fa = (FA)(data_ov015_021d7984[0] - 0x3200);
    fb = (FB)(data_ov015_021d7984[3] - 0x3200);
    do {
        uint8_t *p = in + i;
        uint32_t b = p[3];
        uint32_t w;
        int k;
        p[3] = b ^ prev;
        w = *(uint32_t *)(in + i);
        prev = b;
        k = fa(w);
        uint8_t *q = out + i;
        uint8_t x;
        if (k == 1 || k == 3) {
            if (k == 1) p[3] ^= 1;
            *(uint32_t *)q = ((w & 0xff000000) ^ 0x1000000) | ((w + 0xfffff37e) & 0xffffff);
        } else if (k == 2) {
            x = p[0]; q[0] = x ^ fb(self); *self = x;
            x = p[1]; q[1] = x ^ fb(self); *self = x;
            x = p[2]; q[2] = x ^ fb(self); *self = x;
            q[3] = p[3] ^ 1;
        } else {
            x = p[0]; q[0] = x ^ fb(self); *self = x;
            x = p[1]; q[1] = x ^ fb(self); *self = x;
            x = p[2]; q[2] = x ^ fb(self); *self = x;
            q[3] = p[3];
        }
        *self -= b;
        i += 4;
    } while (i < size);
    }
    return 0;
}
