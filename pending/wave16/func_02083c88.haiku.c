#include "ffc/types.h"

extern uint32_t data_021413ac;
extern void func_02083bf4(void);
extern void func_02084160(void);
extern void (*data_020b2b10)(void);

uint32_t func_02083c88(uint32_t a)
{
    uint32_t old = data_021413ac;
    data_021413ac = a;
    if (a != 0) {
        data_020b2b10 = func_02083bf4;
    } else {
        data_020b2b10 = func_02084160;
    }
    return old;
}
