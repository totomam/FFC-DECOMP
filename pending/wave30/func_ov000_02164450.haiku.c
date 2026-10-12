#include "ffc/types.h"

extern uint32_t func_ov000_0215b6a0(uint32_t a);
extern uint32_t func_ov000_02163c60(void);
extern uint32_t func_ov001_02180728(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov000_02163cf0(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov000_02159014(uint32_t a, uint32_t b);

uint32_t func_ov000_02164450(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t r = func_ov000_0215b6a0(a);
    uint32_t x;

    if (d != 0) {
        if (func_ov000_02163c60() != 0) {
            x = func_ov001_02180728(r, b, c, d);
            if (x == 0) {
                return x;
            }
        }
        x = func_ov000_02163cf0(r, b, c);
        if (x != 0) {
            return x;
        }
        return func_ov000_02159014(6, 0xfffe82a2);
    }
    return func_ov001_02180728(r, b, c, d);
}
