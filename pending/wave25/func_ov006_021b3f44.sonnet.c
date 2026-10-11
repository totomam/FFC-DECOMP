#include "ffc/types.h"

extern uint32_t func_02086700(uint32_t x);
extern uint32_t func_02081334(uint32_t x);
extern void func_020866dc(uint32_t x);

typedef struct {
    uint16_t a;
    uint8_t b;
    uint8_t c;
    uint32_t e[1];
} H;

uint32_t func_ov006_021b3f44(H *h)
{
    uint32_t r4 = 0;
    uint32_t r6 = func_02086700(1);
    if (h->b != h->c) {
        uint32_t s = func_02081334(h->c + h->a - 1);
        h->c = (uint8_t)s;
        r4 = h->e[h->c];
    }
    func_020866dc(r6);
    return r4;
}
