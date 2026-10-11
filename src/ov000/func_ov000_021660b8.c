#include "ffc/types.h"

extern uint32_t func_ov000_02167300(void);
extern uint32_t func_ov000_02167390(uint32_t x, uint32_t a, uint32_t b);

typedef struct {
    uint8_t pad0[0x14];
    uint32_t f14;
    uint32_t f18;
    uint8_t pad1[0x10];
    uint32_t f2c;
    uint32_t f30;
} S;

uint32_t func_ov000_021660b8(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, S *s)
{
    uint32_t r;
    s->f2c = a1;
    s->f30 = 1;
    s->f18 = a2;
    if (a1 == 0) {
        r = func_ov000_02167300();
        s->f14 = r;
        if (r == 0) {
            s->f2c = 1;
        } else {
            if (func_ov000_02167390(r, a2, a3) == 0) {
                s->f2c = 7;
            }
        }
    }
    return 0;
}
