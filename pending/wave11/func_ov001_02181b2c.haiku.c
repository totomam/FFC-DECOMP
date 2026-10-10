#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint16_t b;
    uint16_t pad;
    uint32_t c;
} S;

extern void func_ov001_02181b3c(uint32_t x, uint32_t y, uint16_t z);

void func_ov001_02181b2c(S *s)
{
    func_ov001_02181b3c(s->c, s->a, s->b);
}
