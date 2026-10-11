#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} P;

extern void func_ov003_0215c19c(uint32_t a, P p, uint16_t h, uint32_t e);

typedef struct {
    uint8_t pad0[0x14];
    uint32_t *p14;
    uint16_t h18;
    uint16_t pad1;
    uint32_t w1c;
    P p20;
} S;

void func_ov003_0214e150(S *a)
{
    uint32_t v = a->p14[0x5a];
    if (v) {
        func_ov003_0215c19c(v, a->p20, a->h18, a->w1c);
    }
}
