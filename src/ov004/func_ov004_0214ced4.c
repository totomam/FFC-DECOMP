/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_020692a4(void *object);
extern void func_020696f8(void *self);
extern void func_020697ac(void *self, int arg);
}
typedef void (*VFn)(void *self, int a, int b);
struct V { void **b; uint32_t n; };
struct It { void **p; It(void **x) : p(x) {} ~It() {} };
inline bool ne(const It &a, const It &b) { return a.p != b.p; }
inline It bg(V *v) { return It(v->b); }
inline It en(V *v) { return It(v->b + v->n); }
extern "C" void func_ov004_0214ced4(uint8_t *p)
{
    void *obj2;
    for (It q = bg((V*)(p+0xc4)); ne(q, en((V*)(p+0xc4))); q.p++)
        func_020692a4(*q.p);
    for (It q = bg((V*)(p+0xd0)); ne(q, en((V*)(p+0xd0))); q.p++)
        func_020692a4(*q.p);
    func_020696f8(p);
    func_020697ac(p, 0);
    func_020692a4(*(void **)(p + 0xc0));
    obj2 = *(void **)(*(uint8_t **)(p + 0xc0) + 0x9c);
    ((VFn)(*(void ***)obj2)[14])(obj2, 6, 0);
}
