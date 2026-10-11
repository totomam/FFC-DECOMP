#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint32_t data_02143580[];

uint16_t func_0208d284(void) {
    uint32_t *p;
    uint32_t v;
    func_02088978();
    p = (uint32_t *)data_02143580[1];
    if (p != 0) {
        v = p[0x53];
    } else {
        v = 0;
    }
    func_0208898c();
    return (uint16_t)v;
}
