#include "ffc/types.h"

extern int32_t func_ov000_0214ecc8(int32_t x);
extern int32_t func_ov000_0214ece8(int32_t x);

int32_t func_ov000_0214e428(int32_t a0) {
    if (a0 >= 0) {
        if (func_ov000_0214ecc8(a0) != 0) {
            if (func_ov000_0214ece8(a0) == 0) {
                return 1;
            }
        }
    }
    return 0;
}
