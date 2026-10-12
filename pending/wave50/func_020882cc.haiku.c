#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint32_t data_02141858[];

typedef struct {
    volatile uint16_t t;
    uint32_t lo;
    uint32_t hi;
} S;

uint64_t func_020882cc(void) {
    S s;
    uint64_t d;

    func_02088978();
    s.t = *(uint16_t *)0x4000100;
    d = *(uint64_t *)&data_02141858[2];
    s.hi = (uint32_t)(d >> 32) & 0xffff;
    s.lo = (uint32_t)d;
    if (*(uint32_t *)0x4000214 & 8) {
        if (!(s.t & 0x8000)) {
            uint64_t v = ((uint64_t)s.hi << 32 | s.lo) + 1;
            s.lo = (uint32_t)v;
            s.hi = (uint32_t)(v >> 32);
        }
    }
    func_0208898c();
    return (((uint64_t)s.hi << 32 | s.lo) << 16) | s.t;
}
