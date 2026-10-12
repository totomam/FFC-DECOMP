#include "ffc/types.h"

typedef struct {
    int16_t x;
    int16_t y;
    uint8_t len;
    uint8_t buf[33];
} Ctx;

void func_020941b0(Ctx *dst, uint16_t *src, Ctx *s2)
{
    uint16_t *w = (uint16_t *)dst;
    uint32_t i = 0x13;
    uint8_t *e, *q, *p, *b, *sb;
    int len, m, dx, cnt, flag, k;
    do {
        *w++ = *src++;
        i--;
    } while (i != 0);
    if (s2->buf[0] == 0) return;

    len = dst->len;
    m = len;
    if (m < s2->len) m = s2->len;
    dx = dst->y - s2->y;
    m += dx;
    if (m > 0x20) m = 0x20;
    while (len < m) {
        dst->len++;
        dst->buf[len] = 0;
        len = dst->len;
    }
    b = dst->buf;
    sb = s2->buf;
    {
        int t = s2->len + dx;
        e = b + m;
        if (t < m) e = b + t;
    }
    cnt = e - b;
    q = sb + (cnt - dx);
    while (e > b && q > sb) {
        e--; q--;
        if (*e < *q) {
            p = e - 1;
            if (*p == 0) { do { p--; } while (*p == 0); }
            if (p != e) {
                do { (*p)--; p++; *p += 10; } while (p != e);
            }
        }
        *e = *e - *q;
    }
    cnt = q - sb;
    if (cnt < s2->len) {
        uint8_t *r = e;
        flag = 0;
        if (*q < 5) flag = 1;
        else if (*q == 5) {
            uint8_t *z = q + 1, *lim = sb + s2->len;
            while (z < lim) {
                if (*z != 0) goto done;
                z++;
            }
            r = b + cnt + dx - 1;
            if (*r & 1) flag = 1;
        }
        if (flag) {
            if (*r < 1) {
                p = r - 1;
                if (*p == 0) { do { p--; } while (*p == 0); }
                if (p != r) {
                    do { (*p)--; p++; *p += 10; } while (p != r);
                }
            }
            (*r)--;
        }
    }
done:
    p = b;
    if (*p == 0) { do { p++; } while (*p == 0); }
    if (p > b) {
        uint8_t *end;
        k = (uint8_t)(p - b);
        dst->y -= k;
        end = b + dst->len;
        while (p < end) *b++ = *p++;
        b = dst->buf;
        dst->len -= k;
    }
    p = dst->buf + dst->len;
    if (p > dst->buf) {
        do { p--; if (*p) break; } while (p > dst->buf);
    }
    dst->len = (p - dst->buf) + 1;
}
