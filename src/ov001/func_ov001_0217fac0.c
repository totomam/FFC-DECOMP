#include "ffc/types.h"

extern int func_ov001_0217f9bc(int a, int b, int c, int d);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_ov001_0217f9fc(int a, void *buf, int c, int d, int e);
extern uint8_t data_ov001_021919e8[];

void func_ov001_0217fac0(int a, uint32_t b, int c, int d, int e)
{
    uint8_t buf[0x40];
    int r;

    r = func_ov001_0217f9bc(a, e, c, d);
    func_02086ad4(buf, (uint32_t)data_ov001_021919e8, b, r);
    func_ov001_0217f9fc(a, buf, c, d, e);
}
