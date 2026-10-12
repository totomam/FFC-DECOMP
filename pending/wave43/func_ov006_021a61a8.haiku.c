#include "ffc/types.h"

extern void func_02081978(void);
extern int func_02088280(void);
extern void func_02088f30(void);
extern int func_020883d8(void);
extern void func_02081944(int x);
extern void func_020817c4(void);
extern void func_0207fe54(void *object);
extern void func_0208a814(void);
extern void func_02089334(void);
extern void func_ov006_021b5444(void);
extern void func_ov006_021b4974(uint32_t x);
extern void func_ov006_021b4fb8(void);
extern void func_ov006_021b55e0(void);
extern void func_ov006_021b3698(void);
extern void func_ov006_021b4a50(void);
extern void func_ov006_021b3f78(void);
extern uint32_t func_ov006_021b49e4(uint32_t a, uint32_t b);
extern void func_ov000_021588d0(void);
extern void func_ov006_021b49fc(uint32_t *p);
extern uint32_t data_ov006_021bc70c[];

void func_ov006_021a61a8(void)
{
    uint32_t val;
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    volatile uint32_t *disp = (volatile uint32_t *)0x04001000;
    uint32_t addr;

    *ime;
    *ime = 0;
    func_02081978();
    *disp = *disp & 0xfffeffff;
    if (func_02088280() == 0) {
        func_02088f30();
    }
    if (func_020883d8() == 0) {
        func_02088f30();
    }
    func_02081944(0);
    func_020817c4();
    func_0207fe54((void *)-1);
    func_0208a814();
    func_02089334();
    func_02081978();
    addr = 0x04001000;
    *disp = *disp & 0xfffeffff;
    func_ov006_021b5444();
    func_ov006_021b4974(data_ov006_021bc70c[1]);
    func_ov006_021b4fb8();
    func_ov006_021b55e0();
    func_ov006_021b3698();
    func_ov006_021b4a50();
    func_ov006_021b3f78();
    val = func_ov006_021b49e4(addr >> 14, 0x20);
    func_ov000_021588d0();
    func_ov006_021b49fc(&val);
}
