#include "ffc/types.h"

extern uint8_t data_ov006_021bc744;
extern void func_ov006_021a703c(void);
extern void func_ov006_021a3e78(int32_t a);
extern void func_ov006_021a3aa0(int32_t a, int32_t b, int32_t c);
extern void func_ov006_021a3bfc(int32_t a);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021a708c(void);

void func_ov006_021a7008(void)
{
    data_ov006_021bc744 = 0;
    func_ov006_021a703c();
    func_ov006_021a3e78(0x12);
    func_ov006_021a3aa0(0x3b, -1, 0);
    func_ov006_021a3bfc(0x17);
    func_ov006_021a64c8((void *)func_ov006_021a708c);
}
