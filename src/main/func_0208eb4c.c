#include "ffc/types.h"

extern void CpuSet(const void *src, void *dst, uint32_t control);
extern uint32_t func_02086a4c(void);
extern uint8_t data_021440c4[];
extern uint8_t data_021440c0[];

void func_0208eb4c(void) {
    uint32_t x = 0;
    CpuSet(&x, data_021440c4, 0x5000001);
    *(uint16_t *)(data_021440c0 + 6) = (uint16_t)func_02086a4c();
}
