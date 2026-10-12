/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { int32_t x; int32_t y; } Vec2;
typedef struct { int32_t a; int32_t b; int32_t c; int32_t d; } Rect;

inline int32_t dif(const int32_t &a, const int32_t &b) { return a - b; }
extern "C" {
extern void func_0202074c(void *ctx, Vec2 pos, Rect r);

void func_020207b0(void *ctx, Vec2 pos, Rect R)
{
    Rect r1, r2, r3, r4, r5, r6, r7, r8;
    Vec2 p1, p2, p3, p4, p5, p6, p7, p8;
    int32_t a = R.a, b = R.b, c = R.c, d = R.d;
#define C1(v) (1 + dif(v, 0))
    p1 = pos;
    r1.a = a; r1.b = b; r1.c = C1(a); r1.d = C1(b);
    func_0202074c(ctx, p1, r1);

    p2.x = pos.x + 2; p2.y = pos.y;
    r2.a = c - 1; r2.b = b; r2.c = C1(c - 1); r2.d = C1(b);
    func_0202074c(ctx, p2, r2);

    p3.x = pos.x; p3.y = pos.y + 2;
    r3.a = a; r3.b = d - 1; r3.c = C1(a); r3.d = C1(d - 1);
    func_0202074c(ctx, p3, r3);

    p4.x = pos.x + 2; p4.y = pos.y + 2;
    r4.a = c - 1; r4.b = d - 1; r4.c = C1(c - 1); r4.d = C1(d - 1);
    func_0202074c(ctx, p4, r4);

    p5.x = pos.x; p5.y = pos.y + 1;
    r5.a = a; r5.b = b + 1; r5.c = a + 1; r5.d = d - 1;
    func_0202074c(ctx, p5, r5);

    p6.x = pos.x + 1; p6.y = pos.y;
    r6.a = a + 1; r6.b = b; r6.c = c - 1; r6.d = b + 1;
    func_0202074c(ctx, p6, r6);

    p7.x = pos.x + 2; p7.y = pos.y + 1;
    r7.a = c - 1; r7.b = b + 1; r7.c = c; r7.d = d - 1;
    func_0202074c(ctx, p7, r7);

    p8.x = pos.x + 1; p8.y = pos.y + 2;
    r8.a = a + 1; r8.b = d - 1; r8.c = c - 1; r8.d = d;
    func_0202074c(ctx, p8, r8);
}
}
