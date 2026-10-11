#include "ffc/types.h"

extern uint32_t func_02086700(uint32_t a);
extern uint32_t func_02081334(uint32_t a, uint32_t b);
extern void func_02088f30(void);
extern void func_020866dc(uint32_t a);

void func_ov006_021b3f0c(uint8_t *p, uint32_t v)
{
    uint32_t t = func_02086700(1);
    uint32_t r6 = func_02081334(p[3] + 1, *(uint16_t *)p);
    if (r6 == p[2]) {
        func_02088f30();
    }
    *(uint32_t *)(p + p[3] * 4 + 4) = v;
    p[3] = (uint8_t)r6;
    func_020866dc(t);
}
