#include "ffc/types.h"

extern void func_020834f0(void *p);
extern uint8_t data_021413a8[];

void func_0208368c(void) {
    uint32_t *reg = (uint32_t *)0x04001000;
    *reg &= 0x7fffffff;
    func_020834f0(data_021413a8);
}
