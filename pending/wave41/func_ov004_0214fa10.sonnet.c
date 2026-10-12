#include "ffc/types.h"

typedef struct { int32_t x, y; } P;
extern int32_t func_02081210(int32_t a, int32_t b);
extern void func_0206c1a0(int32_t *out, int32_t v);
extern int32_t func_020817c8(int32_t a, int32_t b);
extern void func_ov004_0214e56c(void *obj, P p);
extern P data_ov004_021596bc;

void func_ov004_0214fa10(void *a)
{
    uint8_t *p = (uint8_t *)a;
    int32_t nv;

    int32_t r6;
    int32_t r4;
    int32_t r7;
    int32_t d1;
    struct { int32_t pad[14]; int32_t t38[5]; int32_t t4c[3]; P out; int32_t pad2[2]; } L;

    nv = *(int32_t *)(p + 0xf0) - 1;
    *(int32_t *)(p + 0xf0) = nv;

    r4 = func_02081210(nv << 12, 0x2000);
    r6 = func_02081210(r4, 0x2000);

    func_0206c1a0(L.t38, *(int32_t *)(p + 0xe4));
    d1 = func_020817c8(r4, L.t38[0]) - r6;

    r7 = func_02081210(r4, 0x2000);

    func_0206c1a0(L.t4c, *(int32_t *)(p + 0xe4));
    L.out.x = (func_020817c8(r4, L.t4c[0]) - r7) >> 12;
    L.out.y = d1 >> 12;

    func_ov004_0214e56c(p, L.out);

    if (*(int32_t *)(p + 0xf0) == 0) {
        *(P *)(p + 0x80) = data_ov004_021596bc;
    }
}
