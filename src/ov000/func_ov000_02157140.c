#include "ffc/types.h"

extern uint8_t *func_ov000_021570d4(uint32_t a, uint32_t b);
extern int32_t func_02092864(const uint8_t *text);
extern void func_02092878(uint32_t x, const uint8_t *text);

int32_t func_ov000_02157140(uint32_t a, uint32_t b, uint32_t c, int32_t d)
{
    uint8_t *p = func_ov000_021570d4(a, b);
    if (p == 0) {
        return 0;
    }
    if (func_02092864(p) >= d) {
        return 0;
    }
    func_02092878(c, p);
    return 1;
}
