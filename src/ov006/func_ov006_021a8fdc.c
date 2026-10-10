#include "ffc/types.h"

extern uint8_t data_ov006_021bc774;
extern void func_ov006_021a9008(void);
extern void func_ov006_021a3eb8(void);
extern void func_ov006_021a3bfc(int32_t arg);
extern void func_ov006_021b0600(int32_t arg);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021a9050(void);

void func_ov006_021a8fdc(void)
{
    data_ov006_021bc774 = 0;
    func_ov006_021a9008();
    func_ov006_021a3eb8();
    func_ov006_021a3bfc(0x23);
    func_ov006_021b0600(0x10);
    func_ov006_021a64c8(func_ov006_021a9050);
}
