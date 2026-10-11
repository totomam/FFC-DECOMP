#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t data_ov000_0216ff6c[];

uint32_t func_ov000_02157310(void) {
    uint32_t v;
    func_0208763c((uint8_t *)data_ov000_0216ff6c[1] + 0x11dc);
    v = *(uint32_t *)((uint8_t *)data_ov000_0216ff6c[1] + 0x1000);
    func_02087678((uint8_t *)data_ov000_0216ff6c[1] + 0x11dc);
    return v;
}
