#include "ffc/types.h"

extern int data_ov000_02170b68[];
extern int data_ov000_0216b42c[];
extern int data_ov000_0216b460[];

extern long long func_0209a76c(int a, int b);

#define DQ(x, y) ((int)func_0209a76c((x), (y)))
#define DR(x, y) ((int)(func_0209a76c((x), (y)) >> 32))

int *func_ov000_02165940(int *pv)
{

    int v = *pv;
    int *d = data_ov000_02170b68;
    int r6 = 0;
    int idx;
    int *t;
    int q, n, q2, k;

    if (v < 0) {
        return 0;
    }

    q = DQ(v, 0x7861f80);
    v -= q * 0x7861f80;
    k = q * 4 + 0x46;

    if (v >= 0x1e13380) {
        v -= 0x1e13380;
        k++;
        if (v >= 0x1e13380) {
            v -= 0x1e13380;
            k++;
            if (v >= 0x1e28500) {
                k++;
                v -= 0x1e28500;
            } else {
                r6++;
            }
        }
    }
    d[5] = k;

    q2 = DQ(v, 0x15180);
    d[7] = q2;
    v -= q2 * 0x15180;

    t = data_ov000_0216b42c;
    if (r6 == 0) {
        t = data_ov000_0216b460;
    }
    idx = 1;
    while (t[idx] < q2) {
        idx++;
    }
    n = idx - 1;
    d[4] = n;
    d[3] = d[7] - t[n];

    q = DQ(*pv, 0x15180) + 4;
    d[6] = DR(q, 7);

    k = DQ(v, 0xe10);
    d[2] = k;
    v -= k * 0xe10;

    k = DQ(v, 0x3c);
    d[1] = k;
    d[0] = v - k * 0x3c;
    d[8] = 0;
    return d;
}
