/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Elem;
typedef struct { Elem *begin; int32_t count; int32_t cap; int32_t *capref; int32_t cnt; } Vec;
typedef struct { Elem *begin; int32_t count; int32_t cap; } Self;
struct Fl { uint8_t v; Fl(int x) : v(x) {} };

extern "C" uint32_t func_ov002_021ad2f8(Self *self, int32_t need);
extern "C" void func_ov002_021ad460(Vec *tmp, uint32_t cap, Fl flag);
extern "C" void func_ov002_021ad450(Vec *tmp);

extern "C" void func_ov002_021ad378(Self *self, int32_t n, Elem *src)
{
    Vec tmp;
        Elem *dst, *end, *beg;
    uint32_t cap;

    tmp.begin = 0;
    tmp.count = 0;
    tmp.cap = 0;
    tmp.cnt = 0;
    tmp.capref = &self->cap;
    cap = func_ov002_021ad2f8(self, self->count + n - self->cap);
    Fl flag(0);
    func_ov002_021ad460(&tmp, cap, flag);
    tmp.cnt = self->count;
    dst = tmp.begin + self->count + tmp.count;
    while (n != 0) {
        if (dst != 0) *dst = *src;
        tmp.count++;
        dst++;
        n--;
    }
    end = self->begin + self->count;
    beg = self->begin;
    dst = tmp.begin + tmp.cnt;
    while (end > beg) {
        end--;
        dst--;
        if (dst != 0) *dst = *end;
        tmp.cnt--;
        tmp.count++;
    }
    {
        int32_t t = self->cap; self->cap = tmp.cap; tmp.cap = t;
        Elem *b = self->begin; self->begin = tmp.begin; tmp.begin = b;
        int32_t c = self->count; self->count = tmp.count; tmp.count = c;
    }
    func_ov002_021ad450(&tmp);
}
