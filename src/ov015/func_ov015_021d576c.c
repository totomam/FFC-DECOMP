/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t i;
    uint32_t j;
    uint8_t s[256];
} RC4State;

uint8_t func_ov015_021d576c(RC4State *p)
{
    uint32_t i;
    uint32_t j;
    uint8_t si;
    uint8_t sj;
    uint8_t t;

    i = (p->i + 1 + p->a) & 0xff;
    si = p->s[i];
    j = (si + p->j + p->a) & 0xff;
    sj = p->s[j];
    t = (si + sj) & 0xff;
    p->i = i;
    p->j = j;
    p->s[j] = si;
    p->s[i] = sj;
    return p->s[t];
}
