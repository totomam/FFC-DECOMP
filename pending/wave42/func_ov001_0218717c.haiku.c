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
        int r7 = (x < y);
        int r1 = (y < 0x4f);
        int t;

        t = (y & 1) ^ ((i ^ x) & 1) ^ r5 ^ r1;

        q[0x74] = (int8_t)((uint32_t)(func_0209a76c(func_02091c0c(), 0x5d) >> 32) + 0x21);

        r5 = t ^ r7;

        if (r5 != 0) {
            if ((q[0x74] & 1) == 0) {
                q[0x74]++;
            }
        } else {
            if ((q[0x74] & 1) == 1) {
                q[0x74]++;
            }
        }
    }
}
