#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02087058(uint32_t *p);
extern void func_0208898c(uint32_t v);

void func_02089010(uint32_t *p, uint32_t f) {
    uint32_t r = func_02088978();
    if (f) {
        *p |= f;
        func_02087058(p + 1);
    }
    func_0208898c(r);
}
