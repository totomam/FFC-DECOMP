#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
} S;

extern uint32_t func_ov000_021653e4(uint32_t a, uint32_t b);

int func_ov000_02168088(S *s)
{
    uint32_t r4 = s->f8 + (1 << 10);
    uint32_t v = func_ov000_021653e4(s->f0, r4);
    if (v == 0) {
        return 0;
    }
    if (v != s->f0) {
        s->f0 = v;
    }
    s->f8 = r4;
    return 1;
}
