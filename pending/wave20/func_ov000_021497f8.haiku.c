#include "ffc/types.h"

extern uint32_t func_020871d4(const void *object);
extern void func_0208716c(void *object, uint32_t value);
extern uint32_t data_ov000_0216980c[];
extern uint32_t data_02141510[];

uint32_t func_ov000_021497f8(void)
{
    uint32_t r4;
    void *r5;

    if (data_ov000_0216980c[1] < 0x20) {
        r5 = (void *)data_02141510[1];
        r4 = func_020871d4(r5);
        func_0208716c(r5, data_ov000_0216980c[1]);
        return r4;
    }
    return (uint32_t)-1;
}
