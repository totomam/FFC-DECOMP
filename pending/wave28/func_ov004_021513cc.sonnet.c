/* cflags: -lang c++ */
#include "ffc/types.h"
struct Small { uint8_t pad; uint8_t x; Small() : pad(0), x(0) {} Small(const Small &o) : pad(o.pad), x(o.x) {} };
struct Elem { uint32_t a,b,c,d; uint16_t e; uint32_t f; };
struct Arr { Elem *data; uint32_t count; uint32_t cap; };
extern "C" void func_ov004_02152224(Arr *arr, Elem *src, Small s);
inline void grow(Arr *arr, Elem *src, Small s) { func_ov004_02152224(arr, src, s); }
extern "C" void func_ov004_021513cc(Arr *arr, Elem *src)
{
    Small s;
    if (arr->count < arr->cap) {
        Elem *p = &arr->data[arr->count];
        if (p) { p->a=src->a;p->b=src->b;p->c=src->c;p->d=src->d;p->e=src->e;p->f=src->f; }
        arr->count++;
    } else {
        grow(arr, src, s);
    }
}
