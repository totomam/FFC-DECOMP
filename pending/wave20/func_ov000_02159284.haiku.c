#include "ffc/types.h"

extern uint8_t *func_02092a2c(uint8_t *text, uint32_t character);
extern void func_ov000_0215925c(void *a, uint32_t b, uint8_t *c, uint32_t d);
extern uint32_t func_02092864(const uint8_t *text);

uint32_t func_ov000_02159284(void *a, uint32_t b, uint8_t *text, uint32_t d)
{
    uint8_t *p = func_02092a2c(text, 0);
    func_ov000_0215925c(a, b, p, d);
    return func_02092864(text);
}
