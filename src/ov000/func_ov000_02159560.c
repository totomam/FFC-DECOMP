#include "ffc/types.h"

extern uint32_t data_ov000_0217004c[];
extern int32_t func_ov000_0215aab4(void);
extern int32_t func_ov000_0215a638(void);
extern uint32_t func_ov000_021553c4(uint32_t a, void *b);
extern int32_t func_ov001_02175ea8(uint32_t a, uint32_t b);
extern void func_ov001_02175f00(uint32_t a, uint32_t b);
extern void *func_02084b2c(void *p, int32_t c, uint32_t n);

void func_ov000_02159560(void *p)
{
    uint32_t r4;

    if (data_ov000_0217004c[3] != 0) {
        if (func_ov000_0215aab4() != 0) {
            if (func_ov000_0215a638() != 0) {
                uint32_t v = func_ov000_0215a638();
                r4 = func_ov000_021553c4(v, p);
                if (r4 != 0 && r4 != (uint32_t)-1) {
                    if (func_ov001_02175ea8(((uint32_t *)data_ov000_0217004c[3])[1], r4) != 0) {
                        func_ov001_02175f00(((uint32_t *)data_ov000_0217004c[3])[1], r4);
                    }
                }
            }
        }
    }
    func_02084b2c(p, 0, 12);
}
