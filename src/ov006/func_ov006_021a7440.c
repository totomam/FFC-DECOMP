#include "ffc/types.h"

extern void func_ov006_021a7468(void);
extern void func_ov006_021a3e78(int x);
extern void func_ov006_021a3aa0(int a, int b, int c);
extern void func_ov006_021a74b8(void);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021a7604(void);

void func_ov006_021a7440(void)
{
    func_ov006_021a7468();
    func_ov006_021a3e78(0x11);
    func_ov006_021a3aa0(0x3a, 0x3a - 0x3b, 0);
    func_ov006_021a74b8();
    func_ov006_021a64c8(func_ov006_021a7604);
}
