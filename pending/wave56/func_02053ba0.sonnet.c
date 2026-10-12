/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};
inline int diff(const Num &a, int b) { return a.v - b; }

typedef struct { int32_t x0, y0, x1, y1; } Rect;
typedef struct {
    Rect *in; uint32_t in_count; uint32_t in_cap;
    Rect *out; uint32_t out_count; uint32_t out_cap;
} Buf;

extern "C" void func_02053d60(void *object, void *rect, bool value);

extern "C" void func_02053ba0(Buf *self, Rect clip) {
    Rect *p;
    Rect r;
    uint32_t tmp;
    bool fl;
    uint32_t *volatile cnt;
    int n = self->out_count;
    cnt = &self->out_count;
    *cnt = diff(n, n);
    p = self->in;
    for (; p != self->in + self->in_count; p++) {
        Rect **volatile ob = &self->out;
        Rect c = clip;
        int y1 = p->y1; if (y1 > c.y1) y1 = c.y1;
        int x1 = p->x1; if (x1 > c.x1) x1 = c.x1;
        int y0 = p->y0; if (y0 < c.y0) y0 = c.y0;
        int x0 = p->x0; if (x0 < c.x0) x0 = c.x0;
        r.x0 = x0; r.y0 = y0; r.x1 = x1; r.y1 = y1;
        if (x0 > x1) continue;
        if (y0 > y1) continue;
        if (self->out_count < self->out_cap) {
            Rect *o = self->out + self->out_count;
            if (o != 0) *o = r;
            *cnt = *cnt + 1;
        } else {
            fl = false;
            func_02053d60((void *)ob, &r, fl);
        }
    }
    tmp = self->in_cap; self->in_cap = self->out_cap; self->out_cap = tmp;
    { Rect *tp = self->in; self->in = self->out; self->out = tp; }
    tmp = self->in_count; self->in_count = self->out_count; self->out_count = tmp;
}
