#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov001_0217fc20(const uint8_t *s);
extern uint32_t func_02091c0c(void);
extern int64_t func_0209a76c(int32_t a, int32_t b);
extern uint32_t func_0208f68c(uint32_t v);
extern const int8_t data_ov001_021919f8[];

uint8_t *func_ov001_0217fd14(uint8_t *out, const uint8_t *in) {
    volatile volatile uint32_t h = func_02092864(data_ov001_021919f8);
    uint32_t len = func_ov001_0217fc20(in);
    int32_t i;

    for (i = 0; i < 0x20; i++) {
        uint32_t w;
        int32_t rem;
        int32_t x;
        uint32_t s, t, r, idx, q;
        uint8_t b;

        if (len == 0 || i == 0 || i == 0xd) {
            w = func_02091c0c();
        } else {
            int32_t c;
            if (i == 1 || i == 0xe) {
                c = (int8_t)in[i];
            } else {
                c = (int8_t)in[i - 1];
            }

            rem = (int32_t)(func_0209a76c(i + in[i], (int32_t)h) >> 32);
            func_0209a76c(c * (i * 0x4647), (int32_t)h);
            x = data_ov001_021919f8[rem] + i * in[i];
            s = (uint32_t)x >> 31;
            t = ((uint32_t)x << 27) - s;
            r = (t >> 27) | (t << 5);
            idx = s + r;
            q = in[idx];
            w = func_0208f68c((uint32_t)(data_ov001_021919f8[h] ^ q));
        }
        out[i] = (uint8_t)((func_0209a76c((int32_t)w, 0x5d) >> 32) + 0x21);
    }
    return out;
}
