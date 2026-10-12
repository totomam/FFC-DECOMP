#include "ffc/types.h"

extern uint32_t data_ov001_021952f0[];
extern uint32_t data_ov001_02191b4c[];
extern int func_ov001_0218306c(uint32_t);
extern int func_ov000_02168768(void);
extern void func_ov000_0216876c(uint32_t, int);
extern void func_ov001_02183338(void);

void func_ov001_021835e0(void)
{
    if (data_ov001_021952f0[8]) {
        uint32_t r1 = 0;
        if (func_ov001_0218306c(data_ov001_02191b4c[2])) {
            if (func_ov001_0218306c(data_ov001_02191b4c[1])) {
                r1 = 1;
            }
        }
        data_ov001_021952f0[8] = r1;
    }
    if (data_ov001_021952f0[0]) {
        int i = func_ov000_02168768() - 1;
        while (i >= 0) {
            func_ov000_0216876c(data_ov001_021952f0[0], i);
            func_ov001_02183338();
            i--;
        }
    }
}
