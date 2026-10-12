#include "ffc/types.h"

typedef struct {
    uint32_t a, b;
} Pair;

extern void func_ov005_02196144(void *a, uint8_t b);
extern void func_ov009_021ada58(void *self);
extern void func_ov011_021c2e64(void *self);
extern void func_02069724(void *out, void *self);
extern void func_02069828(void *self, Pair p);
extern int func_ov011_021c1234(void *self);
extern uintptr_t func_02069734(const void *object);
extern void func_020697ac(void *self, void *obj);

typedef struct {
    int32_t a, b, c, d;
} Rect;

typedef void (*RectFn)(Rect *out, void *obj);

void func_ov011_021c111c(void *self)
{
    Rect best;
    Rect cur;
    int32_t pos;
    Pair args;
    int32_t bestDist;
    int32_t bestIdx;
    int32_t i;
    void *obj;

    func_ov005_02196144(*(void **)((uint8_t *)self + 0x16c), (uint8_t)(*((uint8_t *)self + 0x27d) + 1));
    func_ov009_021ada58(self);
    func_ov011_021c2e64(self);

    if (*((uint8_t *)self + 0x340) == 0) {
        func_02069724(&args, self);
        func_02069828(self, args);
    }

    if (func_ov011_021c1234(self) != 0) {
        if (func_02069734(self) == 0) {
            func_02069724(&pos, self);
            obj = *(void **)((uint8_t *)self + 0x13c);
            ((RectFn)((void **)*(void **)obj)[4])(&best, obj);
            bestDist = pos - ((best.a + best.c) >> 1);
            if (bestDist < 0) {
                bestDist = -bestDist;
            }
            bestIdx = 0;
            for (i = 1; i < 5; i++) {
                obj = *(void **)((uint8_t *)self + i * 4 + 0x13c);
                ((RectFn)((void **)*(void **)obj)[4])(&cur, obj);
                best = cur;
                if (pos - ((cur.a + cur.c) >> 1) < bestDist && pos - ((cur.a + cur.c) >> 1) >= 0) {
                    bestDist = pos - ((cur.a + cur.c) >> 1);
                    bestIdx = i;
                }
            }
            obj = *(void **)((uint8_t *)self + bestIdx * 4 + 0x13c);
            func_020697ac(self, obj);
        }
    }
}
