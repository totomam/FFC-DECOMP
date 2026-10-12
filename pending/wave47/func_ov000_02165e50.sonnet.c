#include "ffc/types.h"

extern void func_ov000_02165ca4(uint8_t *in, uint8_t *out, int count);
extern long long func_0209a76c(int a, int b);
extern int8_t data_ov000_02169762[];
extern int8_t data_ov000_0216975f[];
extern int8_t data_ov000_0216975c[];

void func_ov000_02165e50(uint8_t *in, uint8_t *out, int n, int mode)
{
    int8_t *tbl;
    uint8_t *base;
    uint8_t *pad;
    int c;
    int left;
    int rem;

    left = n;
    base = out;
    switch (mode) {
    case 1:
        tbl = data_ov000_02169762;
        break;
    case 2:
        tbl = data_ov000_0216975f;
        break;
    default:
        tbl = data_ov000_0216975c;
        break;
    }

    if (n > 0) {
        do {
            func_ov000_02165ca4(in, out, left < 3 ? left : 3);
            left -= 3;
            out += 4;
            in += 3;
        } while (left > 0);
    }

    pad = out;
    rem = (int)(func_0209a76c(n, 3) >> 32);
    if (rem == 1) {
        pad = out - 2;
    } else if (rem == 2) {
        pad = out - 1;
    }

    *out = 0;
    if (out > base) {
        do {
            out--;
            if (out >= pad) {
                *out = tbl[2];
            } else {
                c = *(int8_t *)out;
                if (c <= 0x19) {
                    *out = c + 0x41;
                } else if (c <= 0x33) {
                    *out = c + 0x47;
                } else if (c <= 0x3d) {
                    *out = c - 4;
                } else if (c == 0x3e) {
                    *out = tbl[0];
                } else if (c == 0x3f) {
                    *out = tbl[1];
                }
            }
        } while (out > base);
    }
}
