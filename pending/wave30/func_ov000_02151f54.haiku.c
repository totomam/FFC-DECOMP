#include "ffc/types.h"

extern int32_t func_ov000_02151fa4(uint32_t state);
extern void func_ov000_021572b8(uint32_t state);
extern void func_ov000_02157240(void);
extern int32_t func_ov000_02152008(uint32_t state);

int32_t func_ov000_02151f54(uint8_t *p)
{
    uint8_t s = *p;
    if (s <= 10) {
        int32_t r = func_ov000_02151fa4(s);
        if (r == 1) {
            *p = 0;
            return 1;
        }
        if (r == -1) {
            *p = 0x12;
            return 1;
        }
    } else if (s == 14) {
        func_ov000_021572b8(s);
        func_ov000_02157240();
        *p = 12;
    } else if (s < 18) {
        if (func_ov000_02152008(s) == 1) {
            *p = 10;
        }
    }
    return 0;
}
