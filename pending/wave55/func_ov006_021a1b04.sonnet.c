#include "ffc/types.h"

extern uint32_t func_ov006_021a1fbc(uint8_t *ks, uint32_t key, uint32_t keybits);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern void func_ov006_021a1cbc(uint8_t *dst, const uint8_t *a, const uint8_t *b);
extern void func_ov006_021a2508(uint8_t *dst, uint32_t ctx, const uint8_t *a, const uint8_t *b);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);

int32_t func_ov006_021a1b04(uint8_t *out, const uint8_t *in, uint32_t len, uint32_t key, uint32_t keybits)
{
    int32_t ok = 1;
    uint8_t ks[0x140];
    uint8_t a[8];
    uint8_t b[8];
    uint64_t tv;
    uint32_t iv[2];
    uint32_t ctx;
    int32_t n;
    int32_t i;
    int32_t j;
    int32_t k;
    uint64_t m;
    uint64_t t;
    uint8_t *p;

    iv[0] = 0xa6a6a6a6;
    iv[1] = 0xa6a6a6a6;
    if ((len & 7) != 0 || (keybits & 7) != 0) {
        return 0;
    }
    n = (int32_t)((len - 1) >> 3);
    if (n < 2) {
        return 0;
    }
    ctx = func_ov006_021a1fbc(ks, key, keybits << 3);
    for (k = 0; k < 8; k++) {
        a[k] = in[k];
    }
    func_02090380(out, in + 8, len - 1);
    for (j = 5; j >= 0; j--) {
        m = func_0209a71c((uint64_t)(int64_t)n, (uint64_t)(int64_t)j);
        for (i = n; i > 0; i--) {
            t = m + (uint64_t)(int64_t)i;
            tv = ((t & 0xff00000000000000ULL) >> 56);
            tv |= ((t & 0x00ff000000000000ULL) >> 40);
            tv |= ((t & 0x0000ff0000000000ULL) >> 24);
            tv |= ((t & 0x000000ff00000000ULL) >> 8);
            tv |= ((t & 0x00000000ff000000ULL) << 8);
            tv |= ((t & 0x0000000000ff0000ULL) << 24);
            tv |= ((t & 0x000000000000ff00ULL) << 40);
            tv |= ((t & 0x00000000000000ffULL) << 56);
            func_ov006_021a1cbc(a, (uint8_t *)&tv, a);
            p = out + (i - 1) * 8;
            for (k = 0; k < 8; k++) {
                b[k] = p[k];
            }
            func_ov006_021a2508(ks, ctx, a, a);
            for (k = 0; k < 8; k++) {
                p[k] = b[k];
            }
        }
    }
    if (func_02090410((const uint8_t *)iv, a, 8) != 0) {
        ok = 0;
    }
    return ok;
}
