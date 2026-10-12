#include "ffc/types.h"

extern int8_t data_ov000_02169762[];
extern int8_t data_ov000_0216975f[];
extern int8_t data_ov000_0216975c[];
extern void func_ov000_02165c60(uint8_t *src, uint8_t *dst, int n);
extern void *func_020903cc(void *p, int c, int n);

void func_ov000_02165cf8(int8_t *src, uint8_t *dst, int len, int32_t *outLen, int mode)
{
    uint8_t tmp[4];
    int8_t *tbl;
    int i;
    int j;
    int c;
    int k;
    int r;

    if (mode == 1) {
        tbl = data_ov000_02169762;
    } else if (mode == 2) {
        tbl = data_ov000_0216975f;
    } else {
        tbl = data_ov000_0216975c;
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
    for (; i < len; i++) {
        c = src[i];
        if (c == tbl[2]) {
            break;
        }
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
            if (c == 0) {
                break;
            }
            if (outLen != 0) {
                *outLen = 0;
            }
            dst[0] = 0;
            return;
        }
        tmp[k] = (uint8_t)c;
        if (i % 4 == 3) {
            func_ov000_02165c60(tmp, dst + j, 4);
            j += 3;
        }
    }
    if (i != 0 && i % 4 != 0) {
        func_020903cc(tmp + i % 4, tbl[2], 4 - i % 4);
        func_ov000_02165c60(tmp, dst + j, i % 4);
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
