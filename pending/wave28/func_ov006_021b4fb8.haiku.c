#include "ffc/types.h"

extern void func_020866bc(uint32_t);
extern void func_020866dc(uint32_t);
extern uint32_t func_020865f4(uint32_t);
extern void func_0208658c(uint32_t, void (*)(void));
extern void func_02086724(uint32_t);
extern void func_02088964(uint16_t);
extern void func_ov006_021b5028(void);
extern uint32_t data_ov006_021bc840[2];

void func_ov006_021b4fb8(void)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    volatile uint32_t *ie = (volatile uint32_t *)0x4000210;
    uint16_t old;
    uint16_t one = 1;

    data_ov006_021bc840[1] = *ie;
    func_020866bc(0x40018);
    func_020866dc(1);
    data_ov006_021bc840[0] = func_020865f4(1);
    func_0208658c(1, func_ov006_021b5028);
    func_02086724(1);
    old = *ime;
    *ime = one;
    func_02088964(old);
}
