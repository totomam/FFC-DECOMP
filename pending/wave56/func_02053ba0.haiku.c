/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};
inline int diff(const Num &a, int b) { return a.v - b; }

typedef struct {
    int32_t x0, y0, x1, y1;
} Rect;

typedef struct {
    Rect *in;
    uint32_t in_count;
    uint32_t in_cap;
    Rect *out;
    uint32_t out_count;
    uint32_t out_cap;
} Buf;

extern "C" void func_02053d60(void *object, void *rect, uint32_t value);

extern "C" void func_02053ba0(Buf *self, Rect clip) {
    Rect *p;
    Rect *end;
    Rect r;
    uint32_t tmp;
    uint32_t *cnt = &self->out_count;

    {
        int n = self->out_count;
        *cnt = diff(n, n);
    }
    p = self->in;
    end = self->in + self->in_count;
    for (; p != end; p++) {
        Rect c = clip;
        r.x0 = p->x0;
        if (r.x0 < c.x0) r.x0 = c.x0;
        r.y0 = p->y0;
        if (r.y0 < c.y0) r.y0 = c.y0;
        r.x1 = p->x1;
        if (r.x1 > c.x1) r.x1 = c.x1;
        r.y1 = p->y1;
        if (r.y1 > c.y1) r.y1 = c.y1;
        if (r.x0 > r.x1) continue;
        if (r.y0 > r.y1) continue;
        if (self->out_count < self->out_cap) {
            Rect *o = self->out + self->out_count;
            if (o != 0) {
                *o = r;
            }
            *cnt = *cnt + 1;
        } else {
            func_02053d60((void *)&self->out, &r, 0);
        }
    }
    tmp = self->in_cap;
    self->in_cap = self->out_cap;
    self->out_cap = tmp;

    {
        Rect *tp = self->in;
        self->in = self->out;
        self->out = tp;
    }
    tmp = self->in_count;
    self->in_count = self->out_count;
    self->out_count = tmp;
}
