#include "ffc/types.h"

extern uint32_t func_0208fbd8(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

typedef struct {
    uint8_t pad[0x3c];
    uint32_t f3c;
} S;

uint32_t func_020980c8(S *s, uint32_t b, uint32_t c)
{
    return func_0208fbd8(b, 1, c, s->f3c);
}
