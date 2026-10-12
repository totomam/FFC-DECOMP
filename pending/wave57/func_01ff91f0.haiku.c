#include "ffc/types.h"

typedef struct {
    uint8_t state[0x60];
    uint32_t count;
} HashCtx;

extern void hash_init(HashCtx *ctx);
extern void hash_update(HashCtx *ctx, const uint8_t *data, uint32_t len);
extern void hash_final(uint8_t *digest, HashCtx *ctx);
extern uint32_t hash_verify(const uint8_t *digest, const uint8_t *sig);

int func_01ff91f0(const uint8_t *msg, uint32_t len, const uint8_t *sig)
{
    HashCtx ctx;
    uint8_t pad[64];
    uint8_t digest[20];
    const uint8_t *key = (const uint8_t *)0x01ff9270;
    uint32_t i;

    ctx.count = 0;
    hash_init(&ctx);
    for (i = 0; i < 64; i++) {
        pad[i] = key[i] ^ 0x36;
    }
    hash_update(&ctx, pad, 64);
    hash_update(&ctx, msg, len);
    hash_final(digest, &ctx);

    ctx.count = 0;
    hash_init(&ctx);
    for (i = 0; i < 64; i++) {
        pad[i] = key[i] ^ 0x5c;
    }
    hash_update(&ctx, pad, 64);
    hash_update(&ctx, digest, 20);
    hash_final(digest, &ctx);

    if (hash_verify(digest, sig) != 0) {
        return 1;
    }
    return 0;
}
