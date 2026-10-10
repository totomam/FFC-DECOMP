#include "ffc/types.h"

extern void *func_02054218(void *p);
extern void func_02054380(void *p);

typedef struct {
    uint32_t a0;
    uint32_t a1;
    uint32_t a2;
    uint32_t c;
} S;

void func_ov007_021aecd0(S *p)
{
    func_02054380(func_02054218(p));
    p->c = (p->c & ~0xffu) | 2;
}
