#include "ffc/types.h"

extern void *func_02015ba4(void *unused, uint32_t index);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint32_t func_02005f1c(void *object, uint32_t third);
extern uint8_t data_020acdc8[];

uint32_t func_02015cb8(void *a, void *b, uint32_t c, uint32_t d, uint8_t flag)
{
    uint8_t buf[0x44];
    uint16_t *p;

    if (flag != 0) {
        p = (uint16_t *)((uint8_t *)func_02015ba4(a, c) + 0x40);
        c = *p;
    }
    func_02086ad4(buf, (uint32_t)data_020acdc8, c, d);
    return func_02005f1c(b, (uint32_t)buf);
}
