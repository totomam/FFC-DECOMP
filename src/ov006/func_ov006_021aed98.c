#include "ffc/types.h"

extern uint8_t data_ov006_021bc7c8;
extern void func_ov006_021aee44(void);
extern void func_ov006_021aedd4(void);
extern void func_ov006_021a3e78(int x);
extern void func_ov006_021a3aa0(int a, int b, int c);
extern void func_ov006_021a3bb0(int x);
extern void func_ov006_021a3bfc(int x);
extern void func_ov006_021a64c8(void (*fn)(void));

void func_ov006_021aed98(void)
{
    data_ov006_021bc7c8 = 0;
    func_ov006_021aedd4();
    func_ov006_021a3e78(8);
    func_ov006_021a3aa0(0x38, 0x38 - 0x39, 0);
    func_ov006_021a3bb0(1);
    func_ov006_021a3bfc(0x27);
    func_ov006_021a64c8(func_ov006_021aee44);
}
