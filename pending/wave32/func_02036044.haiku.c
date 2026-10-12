#include "ffc/types.h"

extern uint32_t func_02036418(void);
extern uint32_t func_02019e78(uint32_t a, uint32_t b, uint32_t c);
extern uint8_t *func_020197b4(uint32_t a);
extern uint32_t data_020b8e44;

uint32_t func_02036044(void)
{
    uint32_t r1 = func_02036418();
    uint32_t r0 = func_02019e78(data_020b8e44, r1, 0);
    uint8_t *p;
    uint32_t res = 0;

    if (r0 != 0) {
        p = func_020197b4(data_020b8e44);
        if (p[4] != 0) {
            return 1;
        }
        if (p[7] != 0) {
            return 3;
        }
        if (p[6] != 0) {
            res = 2;
        }
        return res;
    }
    return 4;
}
