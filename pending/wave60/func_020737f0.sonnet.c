#include "ffc/types.h"
extern uint32_t *func_02072234(uint32_t a, uint32_t b);
extern uint32_t func_ov000_02159450(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov000_02159440(uint32_t a, uint32_t b);
uint32_t func_020737f0(uint8_t *self, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    if (d != 0 && e != 0) {
        uint32_t *p = func_02072234(*(uint32_t *)(self + 0x18), b);
        return func_ov000_02159450(p[2], d, e, c);
    }
    {
        uint32_t *p = func_02072234(*(uint32_t *)(self + 0x18), b);
        return func_ov000_02159440(p[2], c);
    }
}
