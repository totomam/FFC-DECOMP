#include "ffc/types.h"

extern uint32_t func_ov003_021481c0(uint32_t a);
extern uint32_t func_020424e0(uint32_t a);
extern uint32_t func_ov003_021464f4(uint32_t a, uint32_t b);
extern void func_ov003_02158894(uint32_t a, uint32_t b);

typedef struct {
    uint8_t pad[0x14];
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
} S;

void func_ov003_02165d14(S *s)
{
    uint32_t r4 = func_ov003_021481c0(s->f18);
    s->f18 = r4;
    if (r4 == 0) {
        return;
    }
    {
        uint32_t r = func_ov003_021464f4(func_020424e0(s->f14), r4);
        if (r == 0) {
            return;
        }
        func_ov003_02158894(r, s->f1c);
    }
}
