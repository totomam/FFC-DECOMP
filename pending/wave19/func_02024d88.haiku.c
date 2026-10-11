#include "ffc/types.h"

extern uint32_t func_02026fe8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);

uint32_t func_02024d88(uint8_t *p, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g) {
    uint32_t v = *(uint32_t *)(p + 0x178);
    if (v == 0) {
        return 0;
    }
    return func_02026fe8(v, b, c, d, e, f, g);
}
