#include "ffc/types.h"

extern uint32_t func_ov000_02152b68(void);
extern uint32_t func_ov000_02152dd4(void);
extern uint32_t func_ov000_02152e1c(void);
extern uint32_t func_ov000_02154910(void);
extern void func_ov000_02152b80(uint32_t x);
extern void *func_02088978(void);
extern uint32_t func_ov000_02153d04(void);
extern void func_ov000_02152b20(uint32_t x);
extern void func_0208898c(void *p);
extern uint32_t func_ov000_02152040(void);
extern uint32_t func_ov000_02153c70(void);
extern uint32_t func_ov000_02154968(void);
extern uint32_t func_ov000_021533e0(void);
extern uint32_t func_ov000_02152d4c(void);
extern void func_ov000_02152d28(void);

int func_ov000_02152730(void)
{
    uint32_t r5;
    uint32_t r4;
    void *p;

    r5 = func_ov000_02152b68();
    if (r5 == 1) {
        if (func_ov000_02152dd4() != 0) {
            if (func_ov000_02152e1c() != 0) {
                r5 = func_ov000_02154910();
            } else {
                func_ov000_02152b80(8);
                r5 = func_ov000_021533e0();
            }
        } else {
            func_ov000_02152b80(7);
            r5 = func_ov000_021533e0();
        }
    } else if (r5 < 7) {
        p = func_02088978();
        r5 = func_ov000_02153d04();
        func_ov000_02152b20(r5);
        func_0208898c(p);
    } else if (r5 < 9) {
        r5 = func_ov000_02152040();
    } else if (r5 < 0xa) {
        r5 = func_ov000_02153c70();
    } else if (r5 < 0x10) {
        r5 = func_ov000_02154968();
    } else if (r5 == 0x11) {
        r5 = func_ov000_021533e0();
    }

    func_ov000_02152b20(r5);

    if (r5 == 0x10) {
        r4 = func_ov000_02152d4c();
        func_ov000_02152d28();
        return (int)r4;
    }
    if (r5 == 0x12) {
        func_ov000_02152d28();
        return -1;
    }
    return 0;
}
