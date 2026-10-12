#include "ffc/types.h"

typedef struct HmacCtx {
    uint32_t digest_size;                                        /* 0x00 */
    uint32_t block_size;                                         /* 0x04 */
    void *ctx;                                                   /* 0x08 */
    uint8_t *inner;                                              /* 0x0c */
    void (*init)(void *ctx);                                     /* 0x10 */
    void (*update)(void *ctx, const uint8_t *data, uint32_t len);/* 0x14 */
    void (*final)(void *ctx, uint8_t *out);                      /* 0x18 */
} HmacCtx;

void func_02083f14(uint8_t *out, const uint8_t *msg, uint32_t msglen,
                   const uint8_t *key, uint32_t keylen, HmacCtx *h)
{
    uint8_t tmp[64];
    uint8_t ipad[64];
    uint8_t opad[64];
    uint32_t i;

    if (out == 0 || msg == 0 || msglen == 0 || key == 0 || keylen == 0 || h == 0) {
        return;
    }

    if (keylen > h->block_size) {
        h->init(h->ctx);
        h->update(h->ctx, key, keylen);
        h->final(h->ctx, tmp);
        key = tmp;
        keylen = h->digest_size;
    }

    for (i = 0; i < keylen; i++) {
        ipad[i] = key[i] ^ 0x36;
    }
    for (; i < h->block_size; i++) {
        ipad[i] = 0x36;
    }
    h->init(h->ctx);
    h->update(h->ctx, ipad, h->block_size);
    h->update(h->ctx, msg, msglen);
    h->final(h->ctx, h->inner);

    for (i = 0; i < keylen; i++) {
        opad[i] = key[i] ^ 0x5c;
    }
    for (; i < h->block_size; i++) {
        opad[i] = 0x5c;
    }
    h->init(h->ctx);
    h->update(h->ctx, opad, h->block_size);
    h->update(h->ctx, h->inner, h->digest_size);
    h->final(h->ctx, out);
}
