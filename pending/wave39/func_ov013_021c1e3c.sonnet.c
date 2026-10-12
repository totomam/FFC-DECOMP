/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0200b65c(void *dst, void *src);
extern "C" void *func_020059cc(void *object);
struct Elem { uint32_t a; uint32_t b[3]; };
struct Vec { Elem *data; int size; };
struct It { Elem *p; It(Elem *x) : p(x) {} ~It() {} };
extern "C" Elem *func_ov013_021c1e3c(Vec *v, Elem *pos);
extern "C" Elem *func_ov013_021c1e3c(Vec *v, Elem *pos)
{
    It first(pos);
    volatile int pad[1]; (void)pad;
    Elem *end = v->data + v->size;
    if (((end - first.p) - 1) != 0) {
        Elem *p = first.p;
        Elem *q = p + 1;
        while (q < end) {
            p->a = q->a;
            func_0200b65c(&p->b, &q->b);
            p++;
            q++;
        }
    }
    v->size = v->size - 1;
    func_020059cc(&v->data[v->size].b);
    return first.p;
}
