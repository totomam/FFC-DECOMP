#include "ffc/types.h"

extern void func_ov006_021a6640(void *);
extern void func_ov006_021a8980(void);
extern void func_ov006_021a3bfc(int);
extern void func_ov006_021a354c(int);
extern void func_ov006_021b0600(int);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021a8bac(void);
extern void func_ov006_021a89d0(void);
extern uint8_t data_ov006_021bc768;

void func_ov006_021a8948(void)
{
    func_ov006_021a6640((void *)func_ov006_021a8bac);
    data_ov006_021bc768 = 0;
    func_ov006_021a8980();
    func_ov006_021a3bfc(0x1c);
    func_ov006_021a354c(0);
    func_ov006_021b0600(0xb);
    func_ov006_021a64c8((void *)func_ov006_021a89d0);
}
