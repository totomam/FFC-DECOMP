/* cflags: -lang c++ */
#include "ffc/types.h"
struct B { uint8_t v; };
extern "C" void func_0200acb8(void *a, void *b, void *c, B d);
struct E { uint8_t *p; int n; int pad; };
struct S { uint8_t pad[0xb4]; E arr[13]; int cnt; };
extern "C" void func_0200ada8(S *self, E *src)
{
    int n = ++self->cnt;
    E *dst = &self->arr[n];
    if (dst == src) return;
    uint8_t *p = src->p;
    B z; z.v = 0;
    func_0200acb8(dst, p, p + src->n * 16, z);
}
