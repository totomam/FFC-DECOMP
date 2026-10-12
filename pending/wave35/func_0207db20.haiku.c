#include "ffc/types.h"

extern void func_0208b624(void);
extern uint32_t func_02087460(void);
extern void func_021da9c0(void);
extern void func_0207db94(uint32_t a, uint32_t b);
extern void func_02084800(void);
extern void func_021d9bf0(void);
extern void func_02088f30(void);

void func_0207db20(void)
{
    int32_t flag = ((int32_t)(*(uint16_t *)0x2ffffa8 & 0x8000)) >> 15;
    if (flag) {
        func_0208b624();
    }
    if (func_02087460()) {
        func_021da9c0();
    }
    func_0207db94(1, 1);
    func_02084800();
    if (func_02087460()) {
        func_021d9bf0();
    }
    func_02088f30();
}
