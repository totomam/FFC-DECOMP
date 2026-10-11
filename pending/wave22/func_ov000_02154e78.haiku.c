#include "ffc/types.h"

extern uint32_t func_ov000_02154e4c(void *p);
extern uint32_t func_ov000_02154e3c(void *p);

int func_ov000_02154e78(void *p) {
    if (func_ov000_02154e4c(p) == 3) {
        if ((func_ov000_02154e3c(p) & 4) == 4) {
            return 1;
        }
        return 0;
    }
    return 0;
}
