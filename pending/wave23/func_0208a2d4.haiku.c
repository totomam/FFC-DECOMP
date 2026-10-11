#include "ffc/types.h"

extern int32_t func_02087448(void);
extern void func_02088978(void);
extern void func_0208898c(void);

int32_t func_0208a2d4(void) {
    uint32_t v;
    if (func_02087448() == 0) {
        return 1;
    }
    func_02088978();
    *(volatile uint32_t *)0x4fff200 = 0x10;
    v = *(volatile uint32_t *)0x4fff200;
    func_0208898c();
    if (v == 0) {
        return 0;
    }
    return 1;
}
