#include "ffc/types.h"

extern void func_020834f0(void *p);
extern uint8_t data_021413a6[];

void func_0208366c(void) {
    uint32_t *reg = (uint32_t *)0x04001000;
    *reg &= 0xbfffffff;
    func_020834f0(data_021413a6);
}
