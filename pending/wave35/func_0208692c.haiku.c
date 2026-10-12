#include "ffc/types.h"

extern uint32_t func_020889a4(void);
extern uint32_t func_02088978(void);
extern uint32_t func_02085408(uint32_t a, void *b);
extern void func_020889b8(uint32_t x);
extern void func_0208898c(uint32_t x);

uint32_t func_0208692c(uint32_t a, void *b, void (*cb)(void), int flag)
{
    uint32_t h;
    uint32_t r;

    if (flag) {
        h = func_020889a4();
    } else {
        h = func_02088978();
    }
    r = func_02085408(a, b);
    if (r == 0) {
        if (cb != 0) {
            cb();
        }
        *(uint16_t *)((uint8_t *)b + 4) = (uint16_t)a;
    }
    if (flag) {
        func_020889b8(h);
    } else {
        func_0208898c(h);
    }
    return r;
}
