#include "ffc/types.h"

extern int8_t data_ov000_02169762[];
extern int8_t data_ov000_0216975f[];
extern int8_t data_ov000_0216975c[];
extern void func_ov000_02165c60(uint8_t *src, uint8_t *dst, int n);
extern void *func_020903cc(void *p, int c, int n);

void func_ov000_02165cf8(int8_t *src, uint8_t *dst, int len, int32_t *outLen, int mode)
{
    struct { uint8_t b[4]; } tmp;
    int8_t *tbl;
    int i;
    int j;
    int c;
    int k;
    int r;
    uint8_t *t = tmp.b;

    switch (mode) {
    case 1: tbl = data_ov000_02169762; break;
    case 2: tbl = data_ov000_0216975f; break;
    default: tbl = data_ov000_0216975c; break;
    }
    i = 0;
    j = 0;
    if (len <= 0) {
        if (outLen != 0) {
            *outLen = 0;
        }
        dst[0] = 0;
        return;
    }
    while (i < len && src[i] != tbl[2]) {
        c = src[i];
        if (c >= '0' && c <= '9') {
            k = i % 4;
            c += 4;
        } else if (c >= 'a' && c <= 'z') {
            k = i % 4;
            c -= 71;
        } else if (c >= 'A' && c <= 'Z') {
            k = i % 4;
            c -= 65;
        } else if (c == tbl[0]) {
            k = i % 4;
            c = 62;
        } else if (c == tbl[1]) {
            k = i % 4;
            c = 63;
        } else {
            if (tbl[2] == src[i] || src[i] == 0) {
                break;
            }
            if (outLen != 0) {
                *outLen = 0;
            }
            dst[0] = 0;
            return;
        }
        t[k] = (uint8_t)c;
        if (i % 4 == 3) {
            func_ov000_02165c60(t, dst + j, 4);
            j += 3;
            t = tmp.b;
        }
        i++;
    }
    if (i != 0 && i % 4 != 0) {
        func_020903cc(t + i % 4, tbl[2], 4 - i % 4);
        func_ov000_02165c60(t, dst + j, i % 4);
        if (i % 4 == 3) {
            j += 2;
        } else {
            j += 1;
        }
    }
    if (outLen != 0) {
        *outLen = j;
    }
}
