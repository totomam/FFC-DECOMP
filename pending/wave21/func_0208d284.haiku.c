#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint8_t data_02143580[];

uint16_t func_0208d284(void) {
    uint32_t r4;
    uint8_t *p;

    func_02088978();
    p = *(uint8_t **)(data_02143580 + 4);
    if (p != 0) {
        r4 = *(uint32_t *)(p + 0x14c);
    } else {
        r4 = 0;
    }
    func_0208898c();
    return (uint16_t)r4;
}
