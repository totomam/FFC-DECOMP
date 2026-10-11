#include "ffc/types.h"

extern char data_020b18b4[];
extern void func_02059a78(void *p, uint32_t b);
extern void func_0205847c(void *a, void *b);
extern void func_02065f84(void *p);

typedef struct Obj {
    void *vtbl;
    uint32_t w[6];
    void *f1c;
    void *f20;
    uint32_t f24;
    uint32_t w2[2];
    uint32_t f30;
} Obj;

void *func_02066328(Obj *p)
{
    void *o;
    void *r5;
    void *base;

    p->vtbl = data_020b18b4;
    o = p->f20;
    if (o != 0) {
        ((void (**)(void *))(*(void **)o))[1](o);
    }
    base = p->f1c;
    r5 = *(void **)((char *)base + 0x14);
    func_02059a78(r5, p->f24);
    func_0205847c(*(void **)((char *)r5 + 0x34), (void *)p->f30);
    func_02065f84(p);
    return p;
}
