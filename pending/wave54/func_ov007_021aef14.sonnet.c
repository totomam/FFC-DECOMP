#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);
extern int32_t func_020817c8(int32_t first, int32_t second);
extern int32_t func_02081210(int32_t a, int32_t b);
extern const int32_t data_ov007_021c5664[];
extern const int32_t data_ov007_021c5674[];

int32_t func_ov007_021aef14(int32_t *p)
{
    struct { int32_t pad[93]; int32_t L[14]; } S;
    
    
    int32_t t10, t11, t12, t13, t9;
    int32_t r4, r5, r7;
    int i;

    func_02084b2c(S.L, 0, 0x38);
    S.L[0] = func_020817c8(p[0] << 12, 0x266);
    S.L[0] = func_02081210(S.L[0], 0xf << 14);
    for (i = 0; i < 4; i++) {
        S.L[i + 6] = func_020817c8(data_ov007_021c5664[i], p[i + 6] << 12);
        S.L[i + 10] = func_020817c8(data_ov007_021c5674[i], p[i + 10] << 12);
    }

    t10 = func_02081210(S.L[10], 0x19 << 14);
    r4 = (1 << 12) + func_02081210(S.L[6], 0x19 << 14);
    t11 = func_02081210(S.L[11], 0x19 << 14);
    r5 = (1 << 12) + func_02081210(S.L[7], 0x19 << 14);
    t12 = func_02081210(S.L[12], 0xfa << 14);
    r7 = (1 << 12) + func_02081210(S.L[8], 0xfa << 14);
    t13 = func_02081210(S.L[13], 0xfa << 14);
    t9 = (1 << 12) + func_02081210(S.L[9], 0xfa << 14);

    S.L[1] = func_020817c8(0x4cd - S.L[0], p[1] << 12);
    S.L[2] = func_020817c8(r4 + t10, p[2] << 12);
    S.L[3] = func_020817c8(r5 + t11, p[3] << 12);
    S.L[4] = func_020817c8(r7 + t12, p[4] << 12);
    S.L[5] = func_020817c8(t9 + t13, p[5] << 12);

    return (S.L[1] + S.L[2] + S.L[3] + S.L[4] + S.L[5]) >> 12;
}
