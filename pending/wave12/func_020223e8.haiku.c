#include "ffc/types.h"

extern void func_02084ca4(uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
} S;

void func_020223e8(S *p, uint32_t b)
{
    func_02084ca4(p->fc, b, (p->f8 + 7) >> 3);
}
