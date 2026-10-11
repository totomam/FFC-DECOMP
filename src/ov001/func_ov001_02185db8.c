#include "ffc/types.h"

extern uint32_t data_ov001_02195750[];
extern int func_ov000_02168a8c(void);
extern void func_ov000_02168a5c(uint32_t);

void func_ov001_02185db8(void) {
    if (data_ov001_02195750[1] != 0) {
        if (func_ov000_02168a8c() == 0) {
            func_ov000_02168a5c(data_ov001_02195750[1]);
            data_ov001_02195750[1] = 0;
        }
    }
}
