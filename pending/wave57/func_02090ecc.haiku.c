#include "ffc/types.h"

void func_02090ecc(uint8_t *p, int32_t n) {
    uint8_t *s;
    uint8_t *e;
    uint8_t *q;
    uint8_t len;
    uint8_t d;
    uint8_t ch;
    int32_t c;
    int32_t i;

    if (n >= 0) {
        goto body;
    }
zero:
    *(int16_t *)(p + 2) = 0;
    p[4] = 1;
    p[5] = '0';
    return;

body:
    len = p[4];
    if (n >= len) {
        goto done;
    }
    s = p + 5;
    q = s + n;
    d = (uint8_t)(*q - 0x30);
    if (d == 5) {
        e = s + len - 1;
        while (e > q) {
            ch = *e;
            if (ch != '0') {
                break;
            }
            e--;
        }
        if (e == q) {
            c = q[-1] & 1;
        } else {
            c = 1;
        }
    } else {
        c = d > 5;
    }

    i = n;
    while (i != 0) {
        uint8_t v;
        q--;
        v = (uint8_t)(*q - 0x30 + c);
        if (v > 9) {
            c = 1;
            i--;
        } else if (v != 0) {
            c = 0;
            *q = (uint8_t)(v + 0x30);
            break;
        } else {
            c = 0;
            i--;
        }
    }

    if (c) {
        *(int16_t *)(p + 2) += 1;
        p[4] = 1;
        p[5] = '1';
        return;
    }
    if (i == 0) {
        goto zero;
    }
    p[4] = (uint8_t)i;
done:
    return;
}
