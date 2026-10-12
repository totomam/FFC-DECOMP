#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} L;

typedef struct {
    uint32_t base;
    uint32_t size;
    uint32_t x;
} P;

extern void func_0206f22c(L *s, uint32_t r1, uint32_t v);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void *func_020903cc(void *object, int c, uint32_t n);
extern void func_0206f5e0(L *s);

void func_0206f2d0(P *p, uint32_t r1)
{
    volatile uint8_t z[4];
    L l;
    uint32_t t;
    uint32_t n;
    uint32_t base;
    uint32_t end;
    uint32_t v;

    z[2] = 0;
    l.a = 0;
    l.b = 0;
    l.c = 0;
    v = z[2];
    func_0206f22c(&l, r1, v);
    base = p->base;
    end = base + p->size;
    n = end - base;
    func_02090380((void *)(l.a + l.b), (const void *)base, n);
    func_020903cc((void *)base, 0, n);
    l.b += n;
    p->size = 0;
    t = p->x;
    p->x = l.c;
    l.c = t;
    t = p->base;
    p->base = l.a;
    l.a = t;
    p->size = l.b;
    l.b = 0;
    func_0206f5e0(&l);
}
