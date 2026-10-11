#include "ffc/types.h"

extern void func_ov000_02147da8(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t data_02141510;

typedef struct {
    uint8_t pad[0x68];
    uint32_t f68;
    uint32_t f6c;
} S;

void func_ov000_02147ed0(void)
{
    S *s = *(S **)(*(uint8_t **)((uint8_t *)&data_02141510 + 4) + 0xa4);
    if (s != 0 && s->f6c != 0) {
        func_ov000_02147da8(s->f68, s->f6c, 0, 0);
        s->f6c = 0;
    }
}
