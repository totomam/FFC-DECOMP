/* cflags: -lang c++ */
#include "ffc/types.h"

struct Elem { uint32_t w[7]; };
struct Vec { Elem *data; int32_t size; int32_t cap; };
struct Alloc { uint8_t b; Alloc(uint8_t x) : b(x) {} ~Alloc() {} };
struct Pass { uint8_t b; };
inline Pass mk(const Alloc &z) { Pass p; p.b = z.b; return p; }
struct Tmp { Elem *data; int32_t size; int32_t cap; int32_t *ref; int32_t oldsize; };

extern "C" uint32_t func_ov013_021bf0ec(void *self, int32_t delta);
extern "C" void func_ov013_021bf27c(void *tmp, uint32_t cap, Pass a);
extern "C" void func_ov013_021bf26c(void *tmp);
extern "C" void func_ov013_021bf16c(Vec *self, int32_t n, Elem *src);

extern "C" void func_ov013_021bf16c(Vec *self, int32_t n, Elem *src)
{
    Tmp t;
    t.data = 0;
    t.size = 0;
    t.cap = 0;
    t.ref = &self->cap;
    t.oldsize = 0;

    uint32_t r = func_ov013_021bf0ec(self, self->size + n - self->cap);
    
    func_ov013_021bf27c(&t, r, mk(Alloc(mk(Alloc(0)).b)));
    t.oldsize = self->size;

    Elem *dst = t.data + self->size + t.size;
    if (n != 0) { int32_t k = n; do {
        dst->w[0]=src->w[0];dst->w[1]=src->w[1];dst->w[2]=src->w[2];dst->w[3]=src->w[3];dst->w[4]=src->w[4];dst->w[5]=src->w[5];dst->w[6]=src->w[6];
        dst++;
    } while (--k); }
    t.size += n;

    Elem *end = self->data + self->size;
    Elem *base = self->data;
    Elem *d = t.data + t.oldsize;
    while (end > base) {
        end--;
        d--;
        *d = *end;
        t.oldsize--;
        t.size++;
    }

    self->size = 0;
    int32_t tc = t.cap;
    t.cap = self->cap;
    self->cap = tc;
    Elem *od = self->data;
    self->data = t.data;
    t.data = od;
    self->size = t.size;
    t.size = 0;
    func_ov013_021bf26c(&t);
}
