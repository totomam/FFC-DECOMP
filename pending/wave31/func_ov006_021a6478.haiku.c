#include "ffc/types.h"

extern void func_02081978(void);
extern void func_ov006_021b55d4(void);
extern void func_0208bad0(uint32_t x);
extern void func_ov006_021b4aa4(void);
extern void func_ov006_021b5004(void);
extern void func_ov006_021b05e0(void);
extern void func_ov006_021b3a58(void);
extern void func_ov006_021b5168(void);
extern void func_ov006_021b420c(void);
extern void func_ov006_021b3fa8(void);
extern void func_ov006_021b37b0(void);
extern void func_ov006_021b5678(void);
extern void func_ov006_021b49a0(void);
extern void func_ov006_021b54a8(void);

void func_ov006_021a6478(void)
{
    volatile uint32_t *reg = (volatile uint32_t *)0x04001000;

    func_02081978();
    *reg = *reg & 0xfffeffff;
    func_ov006_021b55d4();
    func_0208bad0(1);
    func_ov006_021b4aa4();
    func_ov006_021b5004();
    func_ov006_021b05e0();
    func_ov006_021b3a58();
    func_ov006_021b5168();
    func_ov006_021b420c();
    func_ov006_021b3fa8();
    func_ov006_021b37b0();
    func_ov006_021b5678();
    func_ov006_021b49a0();
    func_ov006_021b54a8();
}
