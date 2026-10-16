/* cflags: -lang c++ -noO4,p -O4 */
#include "ffc/types.h"
extern "C" uint64_t func_0209a978(uint32_t a, uint32_t b);
extern "C" void func_02056844(void *p);
extern "C" void func_0205c804(void *p);
struct D { uint32_t *buf; uint32_t start, size, cap; };
struct It {
    uint32_t *cur, *first, *b, *last;
    It(D *d, uint32_t i) { cur = d->buf + i; first = d->buf; b = d->buf + d->start; last = d->buf + d->cap; }
    void next() { cur++; if (cur == last) cur = first; }
};
struct S { uint32_t x; uint32_t y; D d; };
extern "C" S *func_0205bc04(S *self) {
    D *d = &self->d;
    self->y = 0;
    if (d->size != 0) {
        uint32_t e = 0;
        if (d->cap != 0) e = (uint32_t)(func_0209a978(d->start + d->size, d->cap) >> 32);
        It en(d, e);
        It i(d, d->start);
        while (i.cur != en.cur) {
            if (*i.cur != 0) func_02056844((void *)*i.cur);
            i.next();
        }
    }
    func_0205c804(&self->d);
    return self;
}
