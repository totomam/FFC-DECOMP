#include "ffc/types.h"

extern int32_t func_ov000_0214ecc8(int32_t x);
extern int32_t func_ov000_0214ece8(int32_t x);

int func_ov000_0214e428(int32_t x) {
    if (x >= 0) {
        if (func_ov000_0214ecc8(x) != 0) {
            if (func_ov000_0214ece8(x) == 0) {
                return 1;
            }
        }
    }
    return 0;
}
