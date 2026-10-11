#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02087058(uint32_t *p);
extern void func_0208898c(uint32_t s);

void func_02089010(uint32_t *p, uint32_t flags)
{
    uint32_t s = func_02088978();
    if (flags) {
        *p |= flags;
        func_02087058(p + 1);
    }
    func_0208898c(s);
}
