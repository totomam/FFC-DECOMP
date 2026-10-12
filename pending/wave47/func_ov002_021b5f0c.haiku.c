#include "ffc/types.h"

typedef struct {
    int x;
    int y;
} V2;

typedef struct {
    int a;
    int b;
    int c;
    int d;
} S4;

extern void *func_0203b6fc(void *p);
extern void *func_02062a78(void *obj, V2 p, int c, int d, int e, int f);
extern void func_02056bc0(void *object, void *node);

void *func_ov002_021b5f0c(uint8_t *self, int a, int b, int c, int d, int e, int f) {
    S4 *s = (S4 *)&a;
    void *obj = func_0203b6fc(self);
    void *n;
    V2 p1;
    int c1, d1;
    V2 p2;
    int c2, d2;
    V2 p3;
    int c3, d3;

    n = func_02062a78(*(void **)(self + 0x80), *(V2 *)&s->a, s->c, s->d, e, f);
    func_02056bc0(obj, n);

    p1.x = s->a - 0x5b;
    p1.y = s->b - 6;
    c1 = s->c - 0x5b;
    d1 = s->d - 6;
    n = func_02062a78(*(void **)(self + 0x8c), p1, c1, d1, e, f);
    func_02056bc0(obj, n);

    p2.x = s->a + 0x31;
    p2.y = s->b - 8;
    c2 = s->c + 0x31;
    d2 = s->d - 8;
    n = func_02062a78(*(void **)(self + 0x88), p2, c2, d2, e, f);
    func_02056bc0(obj, n);

    if (*(void **)(self + 0x84)) {
        p3.x = s->a + 0x28;
        p3.y = s->b;
        c3 = s->c + 0x28;
        d3 = s->d;
        n = func_02062a78(*(void **)(self + 0x84), p3, c3, d3, e, f);
        func_02056bc0(obj, n);
    }
    return obj;
}
