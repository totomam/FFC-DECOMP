#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
    int32_t d;
} Rect;

extern void func_0202074c(void *ctx, Vec2 pos, Rect r);

void func_020207b0(void *ctx, Vec2 pos, int32_t a, int32_t b, int32_t c, int32_t d)
{
    Rect r8, r7, r6, r5, r4, r3, r2, r1;
    Vec2 p8, p7, p6, p5, p4, p3, p2, p1;

    p1 = pos;
    r1.a = a; r1.b = b; r1.c = a + 1; r1.d = b + 1;
    func_0202074c(ctx, p1, r1);

    p2.x = pos.x + 2; p2.y = pos.y;
    r2.a = c - 1; r2.b = b; r2.c = c; r2.d = b + 1;
    func_0202074c(ctx, p2, r2);

    p3.x = pos.x; p3.y = pos.y + 2;
    r3.a = a; r3.b = d - 1; r3.c = a + 1; r3.d = d;
    func_0202074c(ctx, p3, r3);

    p4.x = pos.x + 2; p4.y = pos.y + 2;
    r4.a = c - 1; r4.b = d - 1; r4.c = c; r4.d = d;
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
