#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern void func_ov003_02164834(void *p, uint32_t a, uint32_t b, uint16_t c, uint32_t d, uint16_t e, uint16_t f, uint32_t g);
extern uint32_t data_ov003_0217adc4;
void *func_ov003_02164a78(uint32_t *p, uint32_t a, uint32_t b, S sv, uint16_t s1, uint32_t s2, uint16_t s3, uint16_t s4, uint32_t s5)
{
    func_ov003_02164834(p, a, b, s1, s2, s3, s4, s5);
    *p = (uint32_t)&data_ov003_0217adc4;
    *(uint32_t *)((uint8_t *)p + 0x94) = sv.a;
    *(uint32_t *)((uint8_t *)p + 0x98) = sv.b;
    return p;
}
