#include "ffc/types.h"

typedef struct {
    uint32_t f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10;
    uint8_t b;
} Elem;

extern void func_0209cf5c(void *base, int n, int size, void *ctor, void *dtor);
extern void func_ov002_021c8f98(Elem *e);
extern void func_ov002_021c9054(Elem *e);

void *func_ov002_021c90a0(void *p)
{
    Elem *a = (Elem *)p;
    Elem tmp;
    Elem *d;
    uint32_t i;

    func_0209cf5c(a, 4, 0x30, (void *)func_ov002_021c8f98, (void *)func_ov002_021c9054);
    for (i = 0; i < 4; i++) {
        func_ov002_021c8f98(&tmp);
        d = &a[i];
        d->f0 = tmp.f0;
        d->f1 = tmp.f1;
        d->f2 = tmp.f2;
        d->f3 = tmp.f3;
        d->f4 = tmp.f4;
        d->f5 = tmp.f5;
        d->f6 = tmp.f6;
        d->f7 = tmp.f7;
        d->f8 = tmp.f8;
        d->f9 = tmp.f9;
        d->f10 = tmp.f10;
        d->b = tmp.b;
        func_ov002_021c9054(&tmp);
    }
    *(uint32_t *)((uint8_t *)a + 0xc0) = 0;
    *((uint8_t *)a + 0xc4) = 1;
    return a;
}
