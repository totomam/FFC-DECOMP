#include "ffc/types.h"

extern uint8_t *func_ov000_02146820(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov000_02146a60(uint32_t a, uint32_t b);
extern void func_ov000_021469ac(uint32_t a, uint32_t b, uint32_t c);

uint32_t func_ov000_02146af0(uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t *p = func_ov000_02146820(a, b, c);
    if (p) {
        if (p[8] == 1) {
            func_ov000_02146a60(a, b);
        } else if (p[8] == 3) {
            *(int32_t *)(p + 0x34) -= 1;
            func_ov000_02146a60(a, b);
        } else {
            func_ov000_021469ac(a, b, c);
        }
        return 1;
    }
    return 0;
}
