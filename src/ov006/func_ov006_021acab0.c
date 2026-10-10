#include "ffc/types.h"

extern uint8_t data_ov006_021bc798;
extern void func_ov006_021acadc(void);
extern void func_ov006_021a3eb8(void);
extern void func_ov006_021a3bfc(int32_t arg);
extern void func_ov006_021a354c(int32_t arg);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021acb2c(void);

void func_ov006_021acab0(void)
{
    data_ov006_021bc798 = 0;
    func_ov006_021acadc();
    func_ov006_021a3eb8();
    func_ov006_021a3bfc(0x25);
    func_ov006_021a354c(0x1);
    func_ov006_021a64c8(func_ov006_021acb2c);
}
