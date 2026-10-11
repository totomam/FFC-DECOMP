#include "ffc/types.h"

extern void func_02086b04(const uint8_t *a, uint32_t b, const void *c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern uint32_t func_02092864(const uint8_t *text);
extern uint8_t data_ov000_0216af70[];

uint32_t func_ov000_0215925c(uint32_t a0, uint32_t a1, const uint8_t *a2, uint32_t a3) {
    func_02086b04(a2, 0x1000, data_ov000_0216af70, a3, a0, a3, a1);
    return func_02092864(a2);
}
