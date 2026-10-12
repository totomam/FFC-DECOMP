#include "ffc/types.h"

extern void func_02088f30(void);
extern uint8_t data_0213e018[];

int func_02053524(void) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    volatile uint8_t saved;
    uint8_t f;
    uint32_t i;
    uint16_t old;

    old = *ime;
    *ime = 0;
    f = 0;
    if (old != 0) {
        f = 1;
    }
    saved = f;
    for (i = 0; i < 4; i++) {
        if (data_0213e018[i] == 0) {
            data_0213e018[i] = 1;
            (void)*ime;
            *ime = saved;
            return i;
        }
    }
    func_02088f30();
    (void)*ime;
    *ime = saved;
    return 0;
}
