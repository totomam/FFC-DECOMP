#include "ffc/types.h"

extern void func_ov002_02198e08(void *p);

typedef struct {
    uint32_t a0;
    uint32_t a1;
    uint32_t a2;
    uint32_t c;
    uint32_t d;
    void *e;
} S;

void func_ov002_02198e68(S *p)
{
    func_ov002_02198e08(p->e);
    p->c = (p->c & ~0xffu) | 2;
}
