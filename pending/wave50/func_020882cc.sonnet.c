#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint64_t data_02141858[];

uint64_t func_020882cc(void) {
    volatile uint16_t t;
    volatile uint64_t v;
    uint64_t d; uint32_t hm = 0xffff;

    func_02088978();
    t = *(volatile uint16_t *)0x4000100;
    d = data_02141858[1];
    v = ((uint64_t)((uint32_t)(d>>32) & hm) << 32) | (uint32_t)d;
    if (*(volatile uint32_t *)0x4000214 & 8) {
        if (!(t & 0x8000)) {
            v++;
        }
    }
    func_0208898c();
    return (v << 16) | t;
}
