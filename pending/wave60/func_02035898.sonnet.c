#include "ffc/types.h"
extern void *func_0205327c(void *d, const void *s);
extern void func_02052be0(void *p);
extern void func_02052d10(void *a, void *b);
typedef struct { uint8_t pad[4]; void *a; void *b; uint8_t c; } S;
void func_02035898(S *dst, S *src) {
    void *a, *b; uint8_t c;
    func_0205327c(dst, src);
    a = src->a;
    b = src->b;
    dst->a = a;
    dst->b = b;
    c = src->c;
    dst->c = c;
    if (a == 0) return;
    func_02052be0(a);
    if (dst->c == 0) return;
    func_02052d10(dst->a, dst->b);
}
