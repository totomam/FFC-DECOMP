#include "ffc/types.h"

extern void *func_ov000_02165940(int32_t *p);
extern const int32_t data_ov000_0216b460[];

typedef struct {
    int32_t f0, f4, f8, fc, f10, f14, f18, f1c, f20;
} S;

#define ADDC(P,Q) q = Q; t = (P) + q; if (((P) >= 0 && q >= 0 && t < 0) || ((P) < 0 && q < 0 && t >= 0)) return -1;

static inline int32_t mulc(int32_t *p, int32_t t, int32_t k)
{
    *p = t * k;
    if (t == 0)
        return 0;
    if (*p / t == k)
        return 0;
    return 1;
}

int32_t func_ov000_02165a1c(S *s)
{
    int32_t t, p, m, d, q;
    void *r;

    t = s->f14;
    if (t < 0x45 || t > 0x8b) {
        return -1;
    }
    if (s->f10 < 0 || s->f10 > 11) {
        t += s->f10 / 12;
        s->f10 = s->f10 % 12;
        if (s->f10 < 0) {
            s->f10 += 12;
            t--;
        }
        if (t < 0x45 || t > 0x8b) {
            return -1;
        }
    }

    m = s->f10;
    d = data_ov000_0216b460[m];
    if ((t & 3) == 0 && m > 1) {
        d++;
    }
    p = ((t - 1) >> 2) + 0x16d * (t - 0x46) - 0x11 + d;
    ADDC(p, s->fc)
    if (mulc(&p, t, 0x18)) return -1;
    ADDC(p, s->f8)
    if (mulc(&p, t, 0x3c)) return -1;
    ADDC(p, s->f4)
    if (mulc(&p, t, 0x3c)) return -1;
    ADDC(p, s->f0)

    r = func_ov000_02165940(&t);
    if (r == 0) {
        return -1;
    }
    *s = *(S *)r;
    return t;
}
