#include "ffc/types.h"

extern uint32_t func_02088978(uint32_t a);
extern void func_0208a358(uint32_t b);
extern void func_0208898c(uint32_t c);

void func_0208a238(uint32_t a, uint32_t b)
{
    uint32_t r = func_02088978(a);
    func_0208a358(b);
    func_0208898c(r);
}
