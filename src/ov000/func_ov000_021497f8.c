#include "ffc/types.h"

extern uint32_t data_ov000_0216980c[];
extern uint32_t data_02141510[];
extern uint32_t func_020871d4(const void *object);
extern void func_0208716c(const void *object, uint32_t value);

uint32_t func_ov000_021497f8(void)
{
    if (data_ov000_0216980c[1] < 0x20) {
        const void *obj = (const void *)data_02141510[1];
        uint32_t r = func_020871d4(obj);
        func_0208716c(obj, data_ov000_0216980c[1]);
        return r;
    }
    return (uint32_t)-1;
}
