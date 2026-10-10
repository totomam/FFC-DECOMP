#include "ffc/types.h"

extern uint8_t data_ov006_021bc758;
extern void func_ov006_021a80e4(void);
extern void func_ov006_021a3e78(int32_t a);
extern void func_ov006_021a3aa0(int32_t a, int32_t b, int32_t c);
extern void func_ov006_021a3bfc(int32_t a);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021a8134(void);

void func_ov006_021a80b0(void)
{
    data_ov006_021bc758 = 0;
    func_ov006_021a80e4();
    func_ov006_021a3e78(0x13);
    func_ov006_021a3aa0(0x3c, -1, 0);
    func_ov006_021a3bfc(0x1b);
    func_ov006_021a64c8((void *)func_ov006_021a8134);
}
