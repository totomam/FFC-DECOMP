#include "ffc/types.h"

extern uint32_t func_ov013_021bf0ec(void *self, int32_t delta);
extern void func_ov013_021bf27c(void *tmp, uint32_t cap, uint32_t z);
extern void func_ov013_021bf26c(void *tmp);

typedef struct { uint32_t w[7]; } Elem;
typedef struct { Elem *data; int32_t size; int32_t cap; } Vec;
typedef struct { Elem *data; int32_t size; int32_t cap; int32_t *ref; int32_t oldsize; } Tmp;

void func_ov013_021bf16c(Vec *self, int32_t n, Elem *src)
{
    uint8_t pad[8];
    Tmp t;
    uint32_t r;
    int32_t i;
    Elem *dst;
    Elem *end;
    Elem *base;
    Elem *d;
    int32_t tc;
    Elem *od;

    t.data = 0;
    t.size = 0;
    t.cap = 0;
    t.ref = &self->cap;
    t.oldsize = 0;

    r = func_ov013_021bf0ec(self, self->size + n - self->cap);
    pad[3] = 0;
    func_ov013_021bf27c(&t, r, pad[3]);
    t.oldsize = self->size;

    dst = t.data + self->size + t.size;
    for (i = 0; i < n; i++) {
        dst[i] = *src;
    }
    t.size += n;

    end = self->data + self->size;
    base = self->data;
    d = t.data + t.oldsize;
    while (end > base) {
        end--;
        d--;
        *d = *end;
        t.oldsize--;
        t.size++;
    }

    self->size = 0;
    tc = t.cap;
    t.cap = self->cap;
    self->cap = tc;
    od = self->data;
    self->data = t.data;
    t.data = od;
    self->size = t.size;
    t.size = 0;
    func_ov013_021bf26c(&t);
}
