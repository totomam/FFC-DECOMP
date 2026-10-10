#include "ffc/types.h"

extern void func_ov007_0219ed7c(void *p);

typedef struct {
    uint32_t a0;
    uint32_t a1;
    uint32_t a2;
    uint32_t c;
    uint32_t d;
    void *e;
} S;

void func_ov007_0219ef40(S *p)
{
    func_ov007_0219ed7c(p->e);
    p->c = (p->c & ~0xffu) | 2;
}
