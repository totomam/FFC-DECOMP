/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t h[5];
    uint32_t w[16];
} Sha1Blk;

#define ROL(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

#define STEP(f, k, wi)                         \
    t = ROL(a, 5) + (f) + e + (k) + (wi);      \
    e = d;                                     \
    d = c;                                     \
    c = ROL(b, 30);                            \
    b = a;                                     \
    a = t;

#define SCHED(i) \
    W[(i) & 15] = ROL(W[(i - 16) & 15] ^ W[(i - 14) & 15] ^ W[(i - 8) & 15] ^ W[(i - 3) & 15], 1)

void func_02084160(Sha1Blk *ctx) {
    uint32_t W[16];
    uint32_t a, b, c, d, e, t, y;
    int i;

    for (i = 0; i < 16; i++) {
        y = ctx->w[i];
        W[i] = (((y ^ ROL(y, 16)) >> 8) & 0xffff00ffu) ^ ROL(y, 8);
    }

    a = ctx->h[0];
    b = ctx->h[1];
    c = ctx->h[2];
    d = ctx->h[3];
    e = ctx->h[4];

    for (i = 0; i < 16; i++) {
        STEP(((b & c) | (~b & d)), 0x5A827999u, W[i & 15]);
    }
    for (i = 16; i < 20; i++) {
        SCHED(i);
        STEP(((b & c) | (~b & d)), 0x5A827999u, W[i & 15]);
    }
    for (i = 20; i < 40; i++) {
        SCHED(i);
        STEP((b ^ c ^ d), 0x6ED9EBA1u, W[i & 15]);
    }
    for (i = 40; i < 60; i++) {
        SCHED(i);
        STEP(((b & c) | (b & d) | (c & d)), 0x8F1BBCDCu, W[i & 15]);
    }
    for (i = 60; i < 80; i++) {
        SCHED(i);
        STEP((b ^ c ^ d), 0xCA62C1D6u, W[i & 15]);
    }

    ctx->h[0] += a;
    ctx->h[1] += b;
    ctx->h[2] += c;
    ctx->h[3] += d;
    ctx->h[4] += e;
}
