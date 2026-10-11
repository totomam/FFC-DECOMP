#include "ffc/types.h"

extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_ov000_021497ec(void *q);
extern uint32_t data_ov000_0216e280[];

void func_ov000_02152e44(uint8_t *p, uint16_t id, int unused, void *q)
{
    if (data_ov000_0216e280[1] == 0) {
        func_02084b2c(p, 0, 0x68);
        *(uint16_t *)(p + 0xa) = 1;
        *(uint16_t *)(p + 4) = 1;
        *(uint16_t *)(p + 8) = id;
        *(uint16_t *)(p + 6) = 0;
        *(uint8_t *)(p + 0x11) = 0;
        *(uint32_t *)(p + 0x14) = 0;
        *(uint8_t *)(p + 0x10) = 0;
        data_ov000_0216e280[1] = (uint32_t)p;
        func_ov000_021497ec(q);
    }
}
