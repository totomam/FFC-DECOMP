#include "ffc/types.h"

extern uint32_t func_ov006_021a1d04(void *ctx, const void *key, uint32_t bits);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern void func_ov006_021a214c(void *ctx, uint32_t res, void *a, void *b);
extern void func_ov006_021a1cbc(void *a, const void *b, void *c);

uint32_t func_ov006_021a194c(uint8_t *dst, const uint8_t *src, uint32_t size, const void *key, uint32_t keylen)
{
    uint8_t ctx[0x140];
    uint64_t t;
    uint64_t v;
    uint32_t iv[2];
    uint8_t blk[8];
    uint8_t tmp[8];
    uint32_t cw[2];
    uint32_t res;
    uint32_t hi;
    uint32_t lo;
    int n;
    int i;
    int j;
    int k;

    iv[0] = 0xa6a6a6a6;
    iv[1] = 0xa6a6a6a6;
    if ((size & 7) != 0 || (keylen & 7) != 0) {
        return 0;
    }
    n = size >> 3;
    if (n < 2) {
        return 0;
    }

    res = func_ov006_021a1d04(ctx, key, keylen << 3);
    func_02090380(dst + 8, src, size);

    {
        uint8_t *s = (uint8_t *)iv;
        for (k = 0; k < 8; k++) {
            blk[k] = s[k];
        }
    }

    for (i = 0; i < 6; i++) {
        t = func_0209a71c((uint64_t)(int64_t)n, (uint64_t)(int64_t)i);
        for (j = 1; j <= n; j++) {
            uint8_t *p = dst + (j << 3);
            for (k = 0; k < 8; k++) {
                tmp[k] = p[k];
            }
            func_ov006_021a214c(ctx, res, blk, blk);
            v = t + (uint64_t)(int64_t)j;
            hi = (uint32_t)(v >> 32);
            lo = (uint32_t)v;
            cw[0] = (hi >> 24) | ((hi >> 8) & 0xff00) | ((hi << 8) & 0xff0000) | (hi << 24);
            cw[1] = (lo >> 24) | ((lo >> 8) & 0xff00) | ((lo << 8) & 0xff0000) | (lo << 24);
            func_ov006_021a1cbc(blk, cw, blk);
            for (k = 0; k < 8; k++) {
                p[k] = tmp[k];
            }
        }
    }

    for (k = 0; k < 8; k++) {
        dst[k] = blk[k];
    }
    return 1;
}
