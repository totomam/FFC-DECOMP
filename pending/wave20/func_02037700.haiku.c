#include "ffc/types.h"

extern uint32_t data_021395b4;
extern uint32_t func_0205681c(uint32_t a);
extern uint32_t func_02037bb0(uint32_t a);

uint32_t func_02037700(void) {
    if (data_021395b4 == 0) {
        uint32_t r = func_0205681c(0x344);
        if (r != 0) {
            r = func_02037bb0(r);
        }
        data_021395b4 = r;
    }
    return data_021395b4;
}
