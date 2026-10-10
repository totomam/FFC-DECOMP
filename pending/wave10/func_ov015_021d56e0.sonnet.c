/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t magic;
    uint32_t i;
    uint32_t j;
    uint8_t s[256];
} RC4State;

void func_ov015_021d56e0(RC4State *st, const uint8_t *key, uint32_t keylen) {
    int i;
    uint8_t a, b;
    uint32_t k = 0;
    uint32_t j = 0;
    uint32_t v = 0x03020100;
    uint32_t *w = (uint32_t *)st->s;
    uint32_t *end = (uint32_t *)(st->s + 256);

    st->magic = 0xaa;
    st->i = 0;
    st->j = j;
    do {
        *w++ = v;
        v += 0x04040404;
    } while (w < end);

    for (i = 255; i >= 0; i--) {
        j = (st->s[i] + (j + key[k])) & 0xff;
        k = k + 1;
        k = (k < keylen) ? k : 0;
        a = st->s[i];
        b = st->s[j];
        st->s[j] = a;
        st->s[i] = b;
    }
}
