#include "ffc/types.h"

extern uint32_t func_ov000_02145764(void);
extern uint32_t func_ov000_02145a4c(void);

uint32_t func_ov000_021468f0(void) {
    if (func_ov000_02145764() == 0) {
        return 1;
    }
    return func_ov000_02145a4c();
}
