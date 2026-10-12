#include "ffc/types.h"

typedef struct {
    int16_t x;
    int16_t y;
    uint8_t len;
    uint8_t buf[33];
} Ctx;

void func_020941b0(Ctx *dst, uint16_t *src, Ctx *s2)
{
    uint8_t *db = (uint8_t *)dst;
    uint8_t *sb = (uint8_t *)s2;
    uint8_t *buf = dst->buf;
    uint8_t *sbuf = s2->buf;
    uint8_t *e, *q, *p, *ip, *r2p, *z, *lim;
    int i, len, m, dx, t, eoff, cnt, flag;

    {
        uint16_t *w = (uint16_t *)dst;
        i = 0x13;
        do {
            *w++ = *src++;
        } while (--i != 0);
    }
    if (s2->buf[0] == 0) {
        return;
    }

    len = dst->len;
    m = dst->len;
    if (len < s2->len) {
        m = s2->len;
    }
    dx = dst->y - s2->y;
    m += dx;
    if (m > 0x20) {
        m = 0x20;
    }
    while (len < m) {
        int old = dst->len;
        dst->len = old + 1;
        buf[old] = 0;
        len = dst->len;
    }

    t = s2->len + dx;
    eoff = (t < m) ? t : m;
    e = buf + eoff;
    q = sbuf + (eoff - dx);

    while (e > buf && q > sbuf) {
        e--;
        q--;
        if (*e < *q) {
            p = e - 1;
            if (*p == 0) {
                do {
                    p--;
                } while (*p == 0);
            }
            if (p != e) {
                do {
                    (*p)--;
                    p++;
                    *p += 10;
                } while (p != e);
            }
        }
        *e = *e - *q;
    }

    ip = q;
    cnt = eoff - dx;
    if (cnt < s2->len) {
        flag = 0;
        r2p = e;
        if (*ip < 5) {
            flag = 1;
        } else if (*ip == 5) {
            z = ip + 1;
            lim = sbuf + s2->len;
            flag = 1;
            while (z < lim) {
                if (*z != 0) {
                    flag = 0;
                    break;
                }
                z++;
            }
            if (flag) {
                r2p = buf + eoff - 1;
                flag = (*r2p & 1) ? 1 : 0;
            }
        }
        if (flag) {
            if (*r2p < 1) {
                p = r2p - 1;
                if (*p == 0) {
                    do {
                        p--;
                    } while (*p == 0);
                }
                if (p != r2p) {
                    do {
                        (*p)--;
                        p++;
                        *p += 10;
                    } while (p != r2p);
                }
            }
            *r2p = *r2p - 1;
        }
    }

    p = buf;
    if (*buf == 0) {
        do {
            p++;
        } while (*p == 0);
    }
    if (p > buf) {
        int k = p - buf;
        uint8_t *end;
        dst->y = dst->y - (uint8_t)k;
        end = buf + dst->len;
        while (p < end) {
            *buf++ = *p++;
        }
        dst->len = dst->len - (uint8_t)k;
    }

    len = dst->len;
    p = dst->buf + len;
    if (p > dst->buf) {
        do {
            p--;
            if (*p != 0) {
                break;
            }
        } while (p > dst->buf);
    }
    dst->len = (uint8_t)((p - dst->buf) + 1);
}
