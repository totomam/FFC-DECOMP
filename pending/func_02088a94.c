/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t func_02087460(void);
extern void func_02088f30(void);
extern void func_021da9c0(void);
extern uint32_t func_02086a4c(void);
extern void func_0207cabc(uint16_t v);
extern void func_020866bc(uint32_t v);
extern void func_02086724(uint32_t v);
extern void func_02084800(void);
extern void func_021d9bf0(void);
extern void func_020867dc(uint32_t value);
extern uint32_t func_02088094(void);
extern void func_01ff935c(void);

void func_02088a94(uint32_t param)
{
    uint16_t *s = (uint16_t *)0x2fffc40;
    uint32_t *flags = (uint32_t *)0x2ffe234;
    uint32_t *base = (uint32_t *)0x2fffc20;

    if (*s == 2 || (func_02087460() == 1 && (*flags & 4))) {
        func_02088f30();
    }

    if (func_02087460() != 0) {
        func_021da9c0();
    }

    func_0207cabc((uint16_t)func_02086a4c());
    func_020866bc(0x40000);
    func_02086724(0xFFFFFFFF);
    func_02084800();

    if (func_02087460() != 0) {
        func_021d9bf0();
    }

    base[0] = param;
    func_020867dc(0x10);
    base[0x37c / 4] = func_02088094();
    func_01ff935c();
}
