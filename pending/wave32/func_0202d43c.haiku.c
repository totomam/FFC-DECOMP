#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t w;
} Sub;

typedef struct {
    void *f0;
    void *f4;
    uint32_t *f8;
} S;

void *func_0202d43c(S *p, void *a, void *b, uint32_t *c)
{
    Sub *s;
    p->f8 = c;
    p->f0 = a;
    p->f4 = b;
    func_0208763c(b);
    (*p->f8)++;
    if (*p->f8 == 1) {
        s = (Sub *)((uint8_t *)p->f0 + 0x48);
        s->w = (s->w & ~0xffu) | 1u;
        s = (Sub *)((uint8_t *)p->f0 + 0x14);
        s->w = (s->w & ~0xffu) | 1u;
    }
    func_02087678(b);
    return p;
}
