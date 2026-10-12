#include "ffc/types.h"

extern void func_02079f0c(uint8_t *p, uint32_t x);
extern void func_0207c914(uint8_t *p, uint32_t x);
extern void func_0207a014(uint8_t *p, uint32_t x);

void func_02079dc0(uint8_t *p, uint32_t flag) {
    if (p == 0) return;
    if (p[0x2c] == 0) return;
    if (flag == 0) {
        func_02079f0c(p, p[0x2c]);
        return;
    }
    func_0207c914(p + 0x1c, 0);
    func_0207a014(p, 0);
    p[0x2c] = 2;
}
