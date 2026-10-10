#include "ffc/types.h"

extern uint8_t data_ov006_021bc79c;
extern void func_ov006_021acdb8(void);
extern void func_ov006_021a3eb8(void);
extern void func_ov006_021a3bfc(int32_t arg);
extern void func_ov006_021a354c(int32_t arg);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021ace08(void);

void func_ov006_021acd8c(void)
{
    data_ov006_021bc79c = 0;
    func_ov006_021acdb8();
    func_ov006_021a3eb8();
    func_ov006_021a3bfc(0x2a);
    func_ov006_021a354c(0x2);
    func_ov006_021a64c8(func_ov006_021ace08);
}
