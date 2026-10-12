#include "ffc/types.h"

extern int32_t func_02081210(int32_t a, int32_t b);
extern int32_t func_0208123c(int32_t a, int32_t b);
extern int32_t func_020817c8(int32_t a, int32_t b);
extern void func_0206b54c(int32_t a, int32_t b, int32_t c, int32_t d);
extern void func_0206bba0(int32_t a, int32_t b, int32_t c, int32_t d);
extern void func_0206b484(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e);
extern int32_t data_ov004_02158b14;
extern int32_t data_ov004_02158b04[];
extern int32_t data_ov004_02158cb4[];

typedef struct {
    uint8_t pad0[0x80];
    int32_t f80;
    int32_t f84;
    int32_t f88;
    int32_t f8c;
    int32_t f90;
    uint8_t pad94[4];
    int32_t f98;
    int32_t f9c;
    int32_t fa0;
} Obj;

void func_ov004_0214a5f0(Obj *p)
{
    int32_t a;
    int32_t b;
    int32_t *q;
    int32_t *q2;
    int32_t v1;
    int32_t v2;
    int32_t r6;
    int32_t old;
    int32_t arr[4];

    a = p->f9c - 1;
    q = (a >= p->f98) ? &p->f98 : &a;
    v1 = func_02081210(*q << 12, p->f9c << 12);
    v1 = func_0208123c(v1, p->f9c);
    v1 = func_020817c8(v1, p->f9c << 12);
    v1 = func_020817c8(v1, 0x8000);
    r6 = v1 >> 12;

    b = p->f98 - 2;
    q2 = (b < data_ov004_02158b04[4]) ? &data_ov004_02158b14 : &b;
    v2 = func_02081210(*q2 << 12, p->f9c << 12);
    v2 = func_0208123c(v2, p->f9c);
    v2 = func_020817c8(v2, p->f9c << 12);
    v2 = func_020817c8(v2, 0x8000);

    func_0206b54c(p->fa0, p->f8c, p->f90, r6);
    func_0206bba0(p->fa0, p->f8c, p->f90, v2 >> 12);

    arr[0] = 0xff;
    arr[1] = 0;
    arr[2] = 0x100;
    arr[3] = 0xc0;
    func_0206b484(p->fa0, arr[0], arr[1], arr[2], arr[3]);

    old = p->f98;
    p->f98 = old + 1;
    if (old > p->f9c + 2) {
        p->f80 = data_ov004_02158cb4[0];
        p->f84 = data_ov004_02158cb4[1];
    }
}
