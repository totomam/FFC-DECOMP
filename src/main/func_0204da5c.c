#include "ffc/types.h"

extern uint32_t func_0204de50(uint32_t a);
extern uint32_t func_0204de70(void);
extern uint32_t func_0204de80(uint32_t a);
extern uint32_t func_0204dc80(uint32_t a, uint32_t b);
extern int32_t func_0204b334(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

int32_t func_0204da5c(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t x = func_0204de50(a);
    uint32_t y = func_0204de70();
    uint32_t z = func_0204de80(x);
    z = func_0204dc80(z, a);
    return func_0204b334(z, y, b, c) == 0 ? -1 : 0;
}
