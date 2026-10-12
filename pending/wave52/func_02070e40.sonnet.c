/* cflags: -lang c++ */
#include "ffc/types.h"
struct Fill { uint8_t v; };
struct Tmp { uint8_t *begin; uint32_t count; uint32_t cap; };
struct Elem { uint32_t a,b,c; Tmp sub; uint8_t flag; };
struct Outer { Elem *begin; uint32_t count; uint32_t cap; };
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
extern "C" {
extern void func_0207138c(Tmp *t, uint32_t n, Fill f);
extern void func_02071420(Tmp *dst, uint8_t *first, uint8_t *last, Fill f);
extern void func_02071348(void *vec, Elem *elem, Fill f);
extern void func_02071404(Tmp *t);
void func_02070e40(Outer *self, uint32_t value, int n);
void func_02070e40(Outer *self, uint32_t value, int n) {
    Elem e; Fill f; f.v = 0;
    e.sub.begin = 0; e.sub.count = 0; e.sub.cap = 0;
    e.a = value; e.b = 0; e.c = 0;
    if (n > 0) func_0207138c(&e.sub, n, f);
    else if (n < 0) { int m = n; e.sub.count = diff(0, diff(0, m)); }
    e.flag = 0;
    if (self->count < self->cap) {
        Elem *p = self->begin + self->count;
        if (p) { p->a=e.a; p->b=e.b; p->c=e.c; p->sub.begin=0;p->sub.count=0;p->sub.cap=0;
          func_02071420(&p->sub, e.sub.begin, e.sub.begin + e.sub.count*16, f); p->flag = e.flag; }
        self->count++;
    } else func_02071348(&self->begin, &e, f);
    func_02071404(&e.sub);
}
}
