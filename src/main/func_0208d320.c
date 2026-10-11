#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint32_t func_0208cef8(void);
extern void func_0208898c(uint32_t h);
extern uint32_t func_0208ceec(void);

uint32_t func_0208d320(uint32_t a)
{
    uint32_t h = func_02088978();
    uint32_t r = func_0208cef8();
    if (r != 0) {
        func_0208898c(h);
        return r;
    }
    {
        uint32_t *p = (uint32_t *)(func_0208ceec() + 0xc8);
        *p = a;
    }
    func_0208898c(h);
    return 0;
}
