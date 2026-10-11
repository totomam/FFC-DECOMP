#include "ffc/types.h"

extern void func_ov006_021a8c48(void);
extern void func_ov006_021a3eb8(void);
extern void func_ov006_021a3aa0(int a, int b, int c);
extern void func_ov006_021a3bb0(int a);
extern void func_ov006_021a3bfc(int a);
extern void func_ov006_021a354c(int a);
extern void func_ov006_021a5fa0(void);
extern void func_ov006_021b0600(int a);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021a8cb8(void);
extern uint16_t data_ov006_021bc76c[];

void func_ov006_021a8c00(void)
{
    data_ov006_021bc76c[1] = 0;
    func_ov006_021a8c48();
    func_ov006_021a3eb8();
    func_ov006_021a3aa0(0x36, -1, 0);
    func_ov006_021a3bb0(2);
    func_ov006_021a3bfc(0x22);
    func_ov006_021a354c(0);
    func_ov006_021a5fa0();
    func_ov006_021b0600(0xb);
    func_ov006_021a64c8(func_ov006_021a8cb8);
}
