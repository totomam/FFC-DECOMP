#include "ffc/types.h"

typedef struct { int32_t a, b, c, d; } Rect;
typedef struct { int32_t x, y; } Pair;
typedef void (*VFn)(Pair *, void *);

extern Rect func_02064574(void *obj, uint32_t i);

static inline Pair gp(void *o) { Pair p; ((VFn)(*(void ***)o)[4])(&p, o); return p; }
static inline Rect get(void *o, uint32_t i) { return func_02064574(o, i); }
static inline void ext(Rect *r, Rect t0)
{
    Rect t = t0;
    if (r->d <= t.d) r->d = t.d;
    if (r->c <= t.c) r->c = t.c;
    if (r->b >= t.b) r->b = t.b;
    if (r->a >= t.a) r->a = t.a;
}

void func_02064898(int32_t *out, void *obj)
{
    Rect r;
    Rect cur;
    Pair p1, p2;
    uint32_t i;
    r.a = 0x7fffffff;
    r.b = 0x7fffffff;
    r.c = 0x80000000;
    r.d = 0x80000000;

    for (i = 0; i < *(uint32_t *)((uint8_t *)obj + 0x28); i++) {
        uint8_t *ent = *(uint8_t **)((uint8_t *)obj + 0x60);
        if (ent[i * 0x1c] != 0) {
            cur = get(obj, i);
            ext(&r, cur);
        }
    }
    if (r.a == 0x7fffffff && r.b == 0x7fffffff && r.c == (int32_t)0x80000000 && r.d == (int32_t)0x80000000) {
        p1 = gp(obj);
        p2 = gp(obj);
        out[0] = p2.x; out[1] = p2.y; out[2] = p1.x; out[3] = p1.y;
        return;
    }
    out[0] = r.a; out[1] = r.b; out[2] = r.c; out[3] = r.d;
}
