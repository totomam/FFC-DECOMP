#include "ffc/types.h"

int32_t func_0209cd1c(uint8_t *pat, uint8_t *s, int32_t *out) {
    uint8_t *p;
    uint8_t *q;
    uint8_t c;
    uint8_t r0;
    int32_t v;

    *out = 0;
    p = s;
    if (s == 0) return 1;
    q = pat;
    c = *s;
    if (c == 'P') {
        p++;
        if (*p == 'V') p++;
        if (*p == 'K') p++;
        if (*p == 'v') {
            if (*pat == 'P' || *pat == '*') return 1;
        }
        p = s;
    }

    c = *pat;
    if (c == '!' || c == '*') {
        c = *pat;
        if (c != *p) return 0;
        q = pat + 1;
        p = p + 1;
        for (;;) {
            r0 = *p;
            c = *q;
            p++;
            if (c == r0) {
                q++;
                if (c != '!') continue;
                if (*q == '!') {
                    *out = 0;
                    return 1;
                }
                v = 0;
                do {
                    v = *q + v * 10 - 0x30;
                    q++;
                } while (*q != '!');
                *out = v;
                return 1;
            }
            do {
                r0 = *q;
                q++;
            } while (r0 != '!');
            do {
                r0 = *q;
                q++;
            } while (r0 != '!');
            if (*q == 0) return 0;
            p = s + 1;
        }
    }

    for (;;) {
        c = *q;
        if ((c == 'P' || c == 'R') && c == *p) {
            p++;
            r0 = *p;
            q++;
            if (r0 == 'K') {
                if (*q == 'K') q++;
                p++;
            }
            if (*q == 'K') return 0;
            if (*p == 'V') {
                if (*q == 'V') q++;
                p++;
            }
            if (*q == 'V') return 0;
            continue;
        }
        break;
    }
    while (c == *p) {
        if (c == 0) return 1;
        q++;
        p++;
        c = *q;
    }
    return 0;
}
