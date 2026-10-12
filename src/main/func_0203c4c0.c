#include "ffc/types.h"

extern uint32_t data_021395fc;
extern uint32_t data_020b8e44;
extern uint32_t func_02015938(void);
extern uint32_t func_0205681c(uint32_t);
extern uint32_t func_0206bf5c(void);

void func_0203c4c0(void) {
    if (data_021395fc != 0) {
        return;
    }
    if (data_020b8e44 != 0) {
        data_021395fc = func_02015938();
    }
    if (data_021395fc != 0) {
        return;
    }
    {
        uint32_t r = func_0205681c(8);
        if (r != 0) {
            r = func_0206bf5c();
        }
        data_021395fc = r;
    }
}
