#include "ffc/types.h"

extern void func_0208359c(void);
extern void func_020835ac(void);
extern void func_0208364c(void);
extern void func_0208365c(void);
extern void func_ov006_021b554c(void);
extern void func_02082de0(uint32_t);
extern void func_02082f30(uint32_t);
extern void func_02082fe8(uint32_t);
extern void func_02083084(uint32_t);
extern void func_020830f0(uint32_t);
extern void func_020831ec(uint32_t);
extern void func_02083264(uint32_t);
extern void func_0208336c(uint32_t);
extern void func_020833c8(uint32_t);
extern void func_0208340c(uint32_t);
extern void func_0208345c(uint32_t);
extern void func_02083354(uint32_t);
extern uint32_t data_ov006_021bc850[];

void func_ov006_021b54a8(void)
{
    uint32_t *p = data_ov006_021bc850;

    func_0208359c();
    func_020835ac();
    func_0208364c();
    func_0208365c();
    func_ov006_021b554c();
    func_02082de0(p[0]);
    func_02082f30(p[1]);
    func_02082fe8(p[2]);
    func_02083084(p[3]);
    func_020830f0(p[4]);
    func_020831ec(p[5]);
    func_02083264(p[6]);
    func_0208336c(p[7]);
    func_020833c8(p[8]);
    func_0208340c(p[9]);
    func_0208345c(p[10]);
    func_02083354(p[12]);

    *(volatile uint16_t *)0x04000050 = 0;
    *(volatile uint16_t *)0x04001050 = 0;
    *(volatile uint32_t *)0x04000010 = 0;
    *(volatile uint32_t *)0x04000014 = 0;
    *(volatile uint32_t *)0x04000018 = 0;
    *(volatile uint32_t *)0x0400001c = 0;
    *(volatile uint32_t *)0x04001010 = 0;
    *(volatile uint32_t *)0x04001014 = 0;
    *(volatile uint32_t *)0x04001018 = 0;
    *(volatile uint32_t *)0x0400101c = 0;
}
