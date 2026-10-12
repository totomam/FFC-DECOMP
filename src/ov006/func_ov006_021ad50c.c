#include "ffc/types.h"

struct S { uint8_t a; uint8_t pad; uint16_t b; };
extern struct S data_ov006_021bc7a8;
extern void func_ov006_021ad55c(void);
extern void func_ov006_021a3aa0(int a, int b, int c);
extern void func_ov006_021a3eb8(void);
extern void func_ov006_021a3bb0(int a);
extern void func_ov006_021a3bfc(int a);
extern void func_ov006_021a354c(int a);
extern void func_ov006_021af9e0(void);
extern void func_ov006_021afa28(void);
extern void func_ov006_021b0600(int a);
extern void func_ov006_021a64c8(void *cb);
extern void func_ov006_021ad5cc(void);

void func_ov006_021ad50c(void)
{
    ((struct S *)&data_ov006_021bc7a8)->b = 0;
    ((struct S *)&data_ov006_021bc7a8)->a = 0;
    func_ov006_021ad55c();
    func_ov006_021a3aa0(0x33, 0x33 - 0x34, 0);
    func_ov006_021a3eb8();
    func_ov006_021a3bb0(2);
    func_ov006_021a3bfc(0x33);
    func_ov006_021a354c(0);
    func_ov006_021af9e0();
    func_ov006_021afa28();
    func_ov006_021b0600(10);
    func_ov006_021a64c8((void *)func_ov006_021ad5cc);
}
