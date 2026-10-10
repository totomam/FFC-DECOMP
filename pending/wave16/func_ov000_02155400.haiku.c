#include "ffc/types.h"

extern uint32_t func_ov000_02154f90(uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint8_t pad[0x1c];
    uint32_t f1c;
    uint8_t pad2[4];
    uint32_t f24;
} S;

uint32_t func_ov000_02155400(S *s)
{
    uint32_t r = 0;
    uint32_t b = 0;
    if (s->f1c != 0) {
        b = s->f24;
        r = 1;
        r = func_ov000_02154f90(s->f1c, b, r);
    }
    return r;
}
