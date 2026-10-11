#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint32_t data_02143580[];

uint32_t func_0208d260(void) {
    uint32_t r4;
    uint8_t *p;
    func_02088978();
    p = (uint8_t *)data_02143580[1];
    if (p != 0) {
        r4 = *(uint16_t *)(p + 0x150);
    } else {
        r4 = 0;
    }
    func_0208898c();
    return r4;
}
