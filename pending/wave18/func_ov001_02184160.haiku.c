#include "ffc/types.h"

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_ov001_02184184(uint32_t a, void *b);
extern uint8_t data_ov001_02193764[];

void func_ov001_02184160(uint32_t a, uint32_t b)
{
    uint8_t buf[0x14];
    func_02086ad4(buf, (uint32_t)data_ov001_02193764, b);
    func_ov001_02184184(a, buf);
}
