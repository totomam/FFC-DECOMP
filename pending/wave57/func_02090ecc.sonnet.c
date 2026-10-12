#include "ffc/types.h"

void func_02090ecc(uint8_t *p, int32_t n) {
    int32_t len;
    int32_t c;
    uint8_t v;
    uint8_t *e;
    uint8_t *s;
    uint8_t d;
    uint8_t *q;

    if (n < 0) {
zero:
        *(int16_t *)(p + 2) = 0;
        p[4] = 1;
        p[5] = '0';
        return;
    }
    len = p[4];
    if (n >= len) return;
    s = p + 5;
    q = s + n + 1; q--;
    d = (uint8_t)(*q - 0x30);
    if (d == 5) {
        e = s + len;
        do {
            e--;
            if (e <= q) break;
        } while (*e == '0');
        if (e == q) c = q[-1] & 1;
        else c = 1;
    } else {
        c = 1;
        if (d <= 5) c = 0;
    }
    if (n != 0) {
        do {
            q--;
            v = (uint8_t)(*q - 0x30 + c);
            c = 1;
            if (v <= 9) c = 0;
            if (c || v == 0) {
                n--;
            } else {
                *q = (uint8_t)(v + 0x30);
                break;
            }
        } while (n != 0);
    }
    if (c) {
        *(int16_t *)(p + 2) += 1;
        p[4] = 1;
        p[5] = '1';
        return;
    }
    if (n == 0) goto zero;
    p[4] = (uint8_t)n;
}
