#include "ffc/types.h"

extern void func_ov006_021ad234(void);
extern void func_ov006_021a3eb8(void);
extern void func_ov006_021a3aa0(int a, int b, int c);
extern void func_ov006_021a3bb0(int a);
extern void func_ov006_021a3bfc(int a);
extern void func_ov006_021a354c(int a);
extern void func_ov006_021b0600(int a);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021ad2a4(void);
extern uint8_t data_ov006_021bc7a4;

void func_ov006_021ad1f0(void)
{
    data_ov006_021bc7a4 = 0;
    func_ov006_021ad234();
    func_ov006_021a3eb8();
    func_ov006_021a3aa0(0x37, -1, 0);
    func_ov006_021a3bb0(2);
    func_ov006_021a3bfc(0x24);
    func_ov006_021a354c(0);
    func_ov006_021b0600(0xb);
    func_ov006_021a64c8(func_ov006_021ad2a4);
}
