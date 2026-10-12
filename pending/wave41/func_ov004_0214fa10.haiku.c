#include "ffc/types.h"

extern int32_t func_02081210(int32_t a, int32_t b);
extern void func_0206c1a0(int32_t *out, int32_t v);
extern int32_t func_020817c8(int32_t a, int32_t b);
extern void func_ov004_0214e56c(void *obj, int32_t x, int32_t y);
extern int32_t data_ov004_021596bc[2];

void func_ov004_0214fa10(void *a)
{
    uint8_t *p = (uint8_t *)a;
    int32_t k = 0x2000;
    int32_t nv;
    int32_t r4;
    int32_t r6;
    int32_t r7;
    int32_t pad[2];
    int32_t out[2];
    int32_t t4c[3];
    int32_t t38[5];

    nv = *(int32_t *)(p + 0xf0) - 1;
    *(int32_t *)(p + 0xf0) = nv;

    r4 = func_02081210(nv << 12, k);
    r6 = func_02081210(r4, k);

    func_0206c1a0(t38, *(int32_t *)(p + 0xe4));
    r6 = func_020817c8(r4, t38[0]) - r6;

    r7 = func_02081210(r4, k);

    func_0206c1a0(t4c, *(int32_t *)(p + 0xe4));
    out[0] = (func_020817c8(r4, t4c[0]) - r7) >> 12;
    out[1] = r6 >> 12;

    func_ov004_0214e56c(p, out[0], out[1]);

    if (*(int32_t *)(p + 0xf0) == 0) {
        *(int32_t *)(p + 0x80) = data_ov004_021596bc[0];
        *(int32_t *)(p + 0x84) = data_ov004_021596bc[1];
    }
}
