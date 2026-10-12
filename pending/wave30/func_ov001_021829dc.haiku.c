#include "ffc/types.h"

extern int32_t func_ov000_02168768(uint32_t);
extern int32_t func_ov000_0216876c(uint32_t, int32_t);
extern void func_ov000_02168814(uint32_t, int32_t);
extern uint32_t data_ov001_021952f0;

void func_ov001_021829dc(int32_t a) {
    int32_t i = 0;
    if (func_ov000_02168768(data_ov001_021952f0) > 0) {
        do {
            if (a == func_ov000_0216876c(data_ov001_021952f0, i)) {
                func_ov000_02168814(data_ov001_021952f0, i);
                return;
            }
            i++;
        } while (i < func_ov000_02168768(data_ov001_021952f0));
    }
}
