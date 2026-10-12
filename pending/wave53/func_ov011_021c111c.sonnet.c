#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern void func_ov005_02196144(void *a, uint8_t b);
extern void func_ov009_021ada58(void *self);
extern void func_ov011_021c2e64(void *self);
extern void func_02069724(void *out, void *self);
extern void func_02069828(void *self, Pair p);
extern int func_ov011_021c1234(void *self);
extern uintptr_t func_02069734(const void *object);
extern void func_020697ac(void *self, void *obj);
typedef struct { int32_t a, b, c, d; } Rect;
typedef void (*RectFn)(Rect *out, void *obj);

void func_ov011_021c111c(void *self)
{
    Rect best;
    Rect cur;
    Pair pos;
    Pair args;
    int32_t bestDist, bestIdx, i, d;

    func_ov005_02196144(*(void **)((uint8_t *)self + 0x16c), (uint8_t)(*((uint8_t *)self + 0x27d) + 1));
    func_ov009_021ada58(self);
    func_ov011_021c2e64(self);
    if (*((uint8_t *)self + 0x340) == 0) {
        func_02069724(&args, self);
        func_02069828(self, args);
    }
    if (func_ov011_021c1234(self) == 0) return;
    if (func_02069734(self) != 0) return;
    func_02069724(&pos, self);
    {
        void **o = *(void ***)((uint8_t *)self + 0x13c);
        ((RectFn)(*(void ***)o)[4])(&best, o);
    }
    bestDist = (int32_t)pos.a - ((best.a + best.c) >> 1);
    if (bestDist < 0) bestDist = -bestDist;
    bestIdx = 0;
    for (i = 1; i < 5; i++) {
        void **o = *(void ***)((uint8_t *)self + i * 4 + 0x13c);
        ((RectFn)(*(void ***)o)[4])(&cur, o);
        best.a=cur.a;best.b=cur.b;best.c=cur.c;best.d=cur.d;
        d = (int32_t)pos.a - ((cur.a + cur.c) >> 1);
        if (d < 0) d = -d;
        if (d < bestDist) { bestDist = d; bestIdx = i; }
    }
    func_020697ac(self, *(void **)((uint8_t *)self + bestIdx * 4 + 0x13c));
}
