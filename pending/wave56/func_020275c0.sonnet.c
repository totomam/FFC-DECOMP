#include "ffc/types.h"

typedef struct {
    uint16_t *data;
    uint32_t size;
    uint32_t cap;
    uint32_t *link;
    int32_t rem;
} Tmp;

typedef struct {
    uint16_t *data;
    uint32_t size;
    uint32_t cap;
} Buf;
typedef struct { uint8_t v; } B;

extern uint32_t func_02027540(Buf *self, uint32_t n);
extern void func_0202784c(void *p, uint32_t a, B b);
extern void func_02090380(void *dst, const void *src, uint32_t n);
extern void *func_020903cc(void *obj, uint32_t c, uint32_t n);
extern void func_020277dc(void *p);

void func_020275c0(Buf *self, uint32_t count, const uint16_t *src) {
    uint8_t loc[8];
    Tmp t;
    int32_t n;
    uint32_t i;
    uint16_t *d;
    uint32_t tc;
    uint16_t *tp;
    uint8_t b;
    uint32_t zero;
    uint8_t *p;
    uint8_t *q;
    uint32_t sz, len;
    uint16_t *bb;

    zero = 0;
    t.data = 0;
    t.size = zero;
    t.cap = zero;
    t.rem = zero;
    t.link = &self->cap;
    n = func_02027540(self, self->size + count - self->cap);
    p = loc;
    q = p + 3;
    *q = zero;
    b = *q;
    p[4] = b;

    func_0202784c(&t, n, *(B *)(p + 4));
    t.rem = self->size;
    d = t.data + self->size;
    d += t.size;
    for (i = count; i != 0; i--) {
        *d++ = *src;
    }
    t.size += count;
    sz = self->size;
    bb = self->data;
    n = ((int32_t)(bb + sz) - (int32_t)bb) / 2;
    len = n * 2;
    t.rem -= n;
    func_02090380(t.data + t.rem, bb, len);
    func_020903cc(bb, 0, len);
    t.size += n;
    self->size = 0;
    {
    uint32_t *pc = &t.cap;
    tc = self->cap;
    self->cap = *pc;
    *pc = tc;
    }
    tp = self->data;
    self->data = t.data;
    t.data = tp;
    self->size = t.size;
    t.size = 0;
    func_020277dc(&t);
}
