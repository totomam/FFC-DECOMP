#include "ffc/types.h"

extern int func_02091c0c(void);
extern unsigned long long func_0209a76c(int a, int b);

void func_ov001_0218717c(int8_t *p)
{
    int i;
    int r5;

    p[0x74] = (int8_t)((uint32_t)(func_0209a76c(func_02091c0c(), 0x5d) >> 32) + 0x21);
    r5 = 0;

    for (i = 1; i < 8; i++) {
        int8_t *q = p + i;
        int x = q[0x73];
        int y = p[0x74];
        int a = (x < y);
        int b = (y < 0x4f);
        int c = y & 1;
        int d = (i ^ x) & 1;
        r5 = ((c ^ (r5 ^ d)) ^ b) ^ a;
        q[0x74] = (int8_t)((uint32_t)(func_0209a76c(func_02091c0c(), 0x5d) >> 32) + 0x21);
        if (r5 != 0) {
            if ((q[0x74] & 1) == 0) q[0x74]++;
        } else {
            if ((q[0x74] & 1) == 1) q[0x74]++;
        }
    }
}
