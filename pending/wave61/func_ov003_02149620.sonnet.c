#include "ffc/types.h"
extern void *func_0205681c(uint32_t sz);
extern void func_ov003_021494c0(void *o, uint32_t a, uint32_t b, uint32_t d, uint32_t e, uint16_t f, uint16_t g, uint32_t h);
extern uint8_t data_ov003_021797a4[];
void *func_ov003_02149620(uint32_t a, uint32_t b, uint16_t c, uint32_t d, uint32_t e, uint16_t f, uint16_t g, uint32_t h)
{
    uint8_t *o = (uint8_t *)func_0205681c(0x2c);
    if (o != 0) {
        func_ov003_021494c0(o, a, b, d, e, f, g, h);
        *(void **)o = data_ov003_021797a4;
        *(uint16_t *)(o + 0x28) = c;
    }
    return o;
}
