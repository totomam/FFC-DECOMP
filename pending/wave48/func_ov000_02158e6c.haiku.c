#include "ffc/types.h"

int func_ov000_02158e6c(char *s, int n, uint8_t *out, int cap) {
    int i;
    int count;
    int need;
    int len;
    int j;
    int v;
    int c;
    uint8_t *base;
    uint8_t *dst;
    char tmp[4];
    int m;

    dst = out;
    m = n;
    if (m & 3) return -1;
    count = 0;
    for (i = 0; i < n; i++) {
        if (s[i] != '*') count += 6;
    }
    need = count / 8;
    if (dst == 0) return need;
    if (cap < need) return -1;
    if (n == 0) return 0;
    base = dst;
    do {
        for (j = 0; j < 4; j++) {
            c = s[j];
            if (c >= 'A' && c <= 'Z') {
                v = c - 'A';
            } else if (c >= 'a' && c <= 'z') {
                v = c - 0x47;
            } else if (c >= '0' && c <= '9') {
                v = c + 4;
            } else if (c == '.') {
                v = 0x3e;
            } else if (c == '-') {
                v = 0x3f;
            } else {
                v = 0;
            }
            tmp[j] = v;
        }
        s += 4;
        dst[0] = (tmp[0] << 2) | (tmp[1] >> 4);
        len = dst + 1 - base;
        if (len >= need) return len;
        dst[1] = (tmp[1] << 4) | (tmp[2] >> 2);
        len = dst + 2 - base;
        if (len >= need) return len;
        dst[2] = (tmp[2] << 6) | tmp[3];
        dst += 3;
        len = dst - base;
    } while (len < need);
    return len;
}
