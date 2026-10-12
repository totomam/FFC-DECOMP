#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02087024(void *p);
extern void func_0208898c(uint32_t v);

void func_02086fbc(uint8_t *a)
{
    uint32_t r = func_02088978();
    while (*(int32_t *)(a + 0x64) != 2) {
        func_02087024(a + 0x9c);
    }
    func_0208898c(r);
}
