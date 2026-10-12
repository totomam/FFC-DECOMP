#include "ffc/types.h"

int func_ov000_02158e6c(char *s, int n, uint8_t *out, uint32_t cap) {
    int count;
    int i;
    int need;
    int len;
    int j;
    int v;
    int c;
    uint8_t *base;
    uint8_t *dst;
    char tmp[4];

    if (n & 3) return -1;
    count = 0;
    i = 0;
    if (n > 0) {
        do {
            if (s[i] != '*') count += 6;
            i++;
        } while (i < n);
    }
    need = count / 8;
    if (out == 0) return need;
    if (cap < (uint32_t)need) return -1;
    if (n == 0) return 0;
    base = out;
    dst = out;
    do {
        for (j = 0; j < 4; j++) {
            c = s[j];
            if (c >= 'A' && c <= 'Z') {
                tmp[j] = c - 'A';
            } else if (c >= 'a' && c <= 'z') {
                tmp[j] = c - 0x47;
            } else if (c >= '0' && c <= '9') {
                tmp[j] = c + 4;
            } else if (c == '.') {
                tmp[j] = 0x3e;
            } else if (c == '-') {
                tmp[j] = 0x3f;
            } else {
                tmp[j] = 0;
            }
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
