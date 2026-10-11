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
    uint32_t cur = h->c;
    if (h->b != cur) {
        uint32_t s = func_02081334(cur + h->a - 1);
        h->c = (uint8_t)s;
        uint32_t *q = (uint32_t *)((uint8_t *)h + (h->c << 2));
        r4 = q[1];
    }
    func_020866dc(r6);
    return r4;
}
