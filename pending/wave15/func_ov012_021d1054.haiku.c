#include "ffc/types.h"

extern void func_ov012_021cfd8c(void *a, int32_t b);

typedef struct {
    uint32_t f0[3];
    uint32_t flags;
    uint32_t f10;
    void *f14;
    uint32_t f18;
} Obj;

void func_ov012_021d1054(Obj *p)
{
    func_ov012_021cfd8c(p->f14, (int8_t)p->f18);
    p->flags = (p->flags & ~0xffu) | 2;
}
