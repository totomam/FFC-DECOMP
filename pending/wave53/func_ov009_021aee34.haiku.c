#include "ffc/types.h"

typedef struct Rect { int32_t x0, y0, x1, y1; } Rect;
typedef struct Vec2 { int32_t x, y; } Vec2;

#define VT(o) (*(void ***)(o))

extern void func_ov005_02195db0(void *obj, int32_t v);
extern void func_020628ac(void *obj, Rect r);
extern void func_02056c4c(void *p);
extern void *func_ov005_02195e2c(void *obj, Rect a, Rect b, int32_t c, int32_t d);
extern void func_02056bc0(void *object, void *node);
extern int32_t data_ov009_021b0e3c[];

void func_ov009_021aee34(uint8_t *self, void *node) {
    Rect r;
    Rect s;
    Vec2 a;
    Vec2 b;
    void *o;
    int32_t i;
    int32_t *d;
    void *res;

    if (node == 0) {
        o = *(void **)(self + 0xe8);
        ((void (*)(void *))VT(o)[11])(o);
        return;
    }
    ((void (*)(Rect *, void *))VT(node)[4])(&r, node);
    func_ov005_02195db0(*(void **)(self + 0xe8), 1);
    d = data_ov009_021b0e3c;
    a.x = d[13];
    a.y = d[14];
    for (i = 0; i < 6; i++) {
        if (node == ((void **)(self + 0xc4))[i]) {
            b = a;
            r.x0 += a.x;
            r.y0 += a.y;
            r.x1 += b.x;
            r.y1 += b.y;
        }
    }
    o = *(void **)(self + 0xe8);
    if (((int32_t (*)(void *))VT(o)[12])(o)) {
        func_020628ac(o, r);
    } else {
        func_02056c4c(*(void **)(self + 0xe4));
        o = *(void **)(self + 0xe8);
        ((void (*)(Rect *, void *))VT(o)[7])(&s, o);
        res = func_ov005_02195e2c(*(void **)(self + 0xe8), s, r, 10, -5);
        func_02056bc0(*(void **)(self + 0xe4), res);
    }
    o = *(void **)(self + 0xe8);
    ((void (*)(void *))VT(o)[10])(o);
}
