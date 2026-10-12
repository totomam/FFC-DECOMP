#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t x);
extern void func_ov003_0214bcb0(uint32_t a, uint32_t b, uint32_t c, uint32_t *d);
extern void func_ov003_0214bdfc(uint32_t a, uint32_t b);
extern void func_ov003_021464b4(uint32_t a);

void func_ov003_0216734c(uint32_t *p)
{
    uint32_t r6 = 0;
    uint32_t *q = p + 8;
    for (; r6 < 2; r6++) {
        uint32_t r4 = (r6 == 1);
        if (p[6] == 0 || p[6] == r6 + 1) {
            uint32_t r7 = p[7];
            if (r7 != 0) {
                func_ov003_0214bcb0(func_020424e0(p[5]), r4, r7, q);
            } else {
                func_ov003_0214bdfc(func_020424e0(p[5]), r4);
                if (r4 == 0) {
                    func_ov003_021464b4(func_020424e0(p[5]));
                }
            }
        }
    }
}
