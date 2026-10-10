#include "ffc/types.h"

typedef struct {
    uint32_t pad0;
    uint32_t pad4;
    uint32_t f8;
    uint32_t fc;
} S;

extern void func_02084ca4(uint32_t a, uint32_t b, uint32_t c);

void func_020223d4(S *p, uint32_t x)
{
    func_02084ca4(x, p->fc, (p->f8 + 7) >> 3);
}
