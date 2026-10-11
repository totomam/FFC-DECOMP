#include "ffc/types.h"

extern void *func_02088978(void);
extern void *func_ov000_0214fa54(void *p);
extern void func_ov000_021504e8(void);
extern uint32_t func_ov000_0215049c(void);
extern void func_0208898c(void *p);

uint32_t func_ov000_02150468(void) {
    void *a = func_02088978();
    uint8_t *p = func_ov000_0214fa54(a);
    uint32_t r = 0;
    if (p != 0 && p[0x12de] == 9) {
        func_ov000_021504e8();
        r = func_ov000_0215049c();
    }
    func_0208898c(a);
    return r;
}
