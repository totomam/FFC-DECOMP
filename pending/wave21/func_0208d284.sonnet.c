#include "ffc/types.h"
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern uint8_t data_02143580[];

uint16_t func_0208d284(void) {
    uint32_t r;
    uint32_t r4;
    uint8_t *p;

    r = func_02088978();
    p = *(uint8_t **)(data_02143580 + 4);
    if (p != 0) {
        r4 = *(uint32_t *)(p + 0x14c);
    } else {
        r4 = 0;
    }
    func_0208898c(r);
    return (uint16_t)r4;
}
