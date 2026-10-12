#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint32_t func_02086a48(uint32_t *p);
extern uint32_t func_020869a0(void *p);
extern void func_0208898c(uint32_t v);
extern void WaitByLoop(uint32_t n);

void func_0208ec74(void *a, uint32_t *b)
{
    uint32_t *p = b;
    for (;;) {
        p[1] = func_02088978();
        p[0] = func_02086a48((uint32_t *)0x2ffffe8) & 0x40;
        if (p[0]) {
            return;
        }
        if (!func_020869a0(a)) {
            return;
        }
        func_0208898c(p[1]);
        WaitByLoop(1);
    }
}
