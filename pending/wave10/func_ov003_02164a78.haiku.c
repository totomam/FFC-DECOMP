#include "ffc/types.h"

extern void func_ov003_02164834(void *self, uint32_t a, uint32_t b, uint16_t c, uint32_t d, uint16_t e, uint16_t f, uint32_t g);
extern uint8_t data_ov003_0217adc4[];

void *func_ov003_02164a78(void *self, uint32_t a, uint32_t b, uint32_t c)
{
    func_ov003_02164834(self, a, b, *(uint16_t *)((uint8_t *)(&c + 1) + 4), *(uint32_t *)((uint8_t *)(&c + 1) + 8),
                        *(uint16_t *)((uint8_t *)(&c + 1) + 0xc), *(uint16_t *)((uint8_t *)(&c + 1) + 0x10),
                        *(uint32_t *)((uint8_t *)(&c + 1) + 0x14));
    {
        uint32_t t = c;
        *(uint8_t **)self = data_ov003_0217adc4;
        *(uint32_t *)((uint8_t *)self + 0x94) = t;
    }
    *(uint32_t *)((uint8_t *)self + 0x98) = *(uint32_t *)(&c + 1);
    return self;
}
