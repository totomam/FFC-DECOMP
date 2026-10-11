#include "ffc/types.h"

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_ov001_02171ac0(void *a, void *b, uint32_t c);
extern uint8_t data_ov001_0218f328;

void func_ov001_02171d28(void *p0, uint32_t p1)
{
    uint32_t buf[4];
    func_02086ad4(buf, &data_ov001_0218f328, p1);
    func_ov001_02171ac0(p0, buf, 0);
}
