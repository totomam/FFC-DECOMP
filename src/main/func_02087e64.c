#include "ffc/types.h"

extern uint32_t func_02088978(uint32_t a);
extern void func_0208898c(uint32_t a);

uint32_t func_02087e64(uint32_t a, uint32_t b) {
    uint32_t r = func_02088978(a);
    func_0208898c(r);
    return *(uint32_t *)(b - 0x18) - 0x20;
}
