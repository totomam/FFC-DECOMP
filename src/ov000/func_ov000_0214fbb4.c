#include "ffc/types.h"

extern uint8_t data_ov000_0216e214[];

typedef struct {
    uint16_t a;
    uint16_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
} S;

typedef void (*Fn)(S *);

void func_ov000_0214fbb4(uint16_t a, uint16_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint8_t *o = *(uint8_t **)(data_ov000_0216e214 + 4);
    if (*(Fn *)(o + 0x12d0)) {
        S s;
        s.a = a;
        s.b = b;
        s.c = c;
        s.d = d;
        s.e = e;
        (*(Fn *)(o + 0x12d0))(&s);
    }
}
