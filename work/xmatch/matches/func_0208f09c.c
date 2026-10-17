#include "ffc/types.h"
/* From pret/pokeplatinum lib/crypto/src/rc4_init.c (CRYPTO_RC4Init), matched by tools/xmatch.py. */
typedef unsigned char u8;
typedef unsigned long u32;
#define RC4_S_SIZE 256
typedef struct CRYPTORC4Context { u8 i, j; u8 padd[2]; u8 s[RC4_S_SIZE]; } CRYPTORC4Context;
typedef struct CRYPTORC4FastContext { u32 i, j; u32 s[RC4_S_SIZE]; } CRYPTORC4FastContext;

void func_0208f09c(CRYPTORC4Context *ctx, const void *key, u32 keyLength)
{
    u8 *s;
    u8 id1, id2;
    int i;

    if (keyLength > 16) {
        keyLength = 16;
    }

    ctx->i = 0;
    ctx->j = 0;

    s = ctx->s;

    for (i = 0; i < RC4_S_SIZE; i++) {
        s[i] = i;
    }

    id1 = id2 = 0;
    for (i = 0; i < RC4_S_SIZE; i++) {
        u8 tmp = s[i];
        id2 = (((u8 *)key)[id1] + tmp + id2);
        if (++id1 == (u8)keyLength) {
            id1 = 0;
        }
        s[i] = s[id2];
        s[id2] = tmp;
    }
}
