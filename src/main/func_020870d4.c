#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint32_t func_02086c78(uint32_t v);
extern void func_0208898c(uint32_t v);

void func_020870d4(void)
{
    uint32_t a = func_02088978();
    func_02086c78(a);
    func_0208898c(a);
}
