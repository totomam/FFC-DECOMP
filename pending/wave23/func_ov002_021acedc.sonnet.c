#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; uint32_t c; uint32_t d; } Pair;

extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern uint32_t func_02081210(Pair p);

void func_ov002_021acedc(uint32_t *out, uint8_t *obj)
{
    *out = 1 << 12;
    if (func_ov002_021aa11c(obj + 0x190, 12)) {
        uint32_t v = *(uint32_t *)(obj + 0x190 + 0xac);
        Pair p;
        p.a = v << 12;
        p.b = 10 << 12;
        *out = func_02081210(p);
    }
}
