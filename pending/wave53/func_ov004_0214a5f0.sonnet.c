/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {

extern int32_t func_02081210(int32_t a, int32_t b);
extern int32_t func_0208123c(int32_t a, int32_t b);
extern int32_t func_020817c8(int32_t a, int32_t b);
typedef struct { int32_t x, y; } P2;
typedef struct { int32_t a, b, c, d; } P4;
extern void func_0206b54c(int32_t a, P2 b, int32_t d);
extern void func_0206bba0(int32_t a, P2 b, int32_t d);
extern void func_0206b484(int32_t a, P4 b);
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

}
static inline const int32_t &mn(const int32_t &a, const int32_t &b){ return (a < b) ? a : b; }
static inline const int32_t &mx(const int32_t &a, const int32_t &b){ return (a < b) ? b : a; }
extern "C" void func_ov004_0214a5f0(Obj *p)
{
    int32_t a;
    int32_t b;
    int32_t *q;
    int32_t *q2;
    int32_t v1;
    int32_t v2;
    int32_t r6;
    int32_t old;
    P4 arr;
    int32_t pad[22];
    int32_t sh = 0;

    a = p->f9c - 1;
    q = (int32_t*)&mn(a, p->f98);
    sh = p->f9c << 12;
    v1 = func_02081210(*q << 12, sh);
    v1 = func_0208123c(v1, p->f9c);
    v1 = func_020817c8(v1, p->f9c << 12);
    v1 = func_020817c8(v1, 0x8000);
    r6 = v1 >> 12;

    b = p->f98 - 2;
    q2 = (int32_t*)&mx(b, data_ov004_02158b04[4]);
    v2 = func_02081210(*q2 << 12, p->f9c << 12);
    v2 = func_0208123c(v2, p->f9c);
    v2 = func_020817c8(v2, p->f9c << 12);
    v2 = func_020817c8(v2, 0x8000);

    func_0206b54c(p->fa0, *(P2 *)&p->f8c, r6);
    func_0206bba0(p->fa0, *(P2 *)&p->f8c, v2 >> 12);

    arr.a = 0xff;
    arr.b = 0;
    arr.c = 0x100;
    arr.d = 0xc0;
    func_0206b484(p->fa0, arr);

    old = p->f98;
    p->f98 = old + 1;
    if (old > p->f9c + 2) {
        p->f80 = data_ov004_02158cb4[0];
        p->f84 = data_ov004_02158cb4[1];
    }
}
