#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);

void func_020847b0(uint32_t idx) {
    volatile uint32_t *reg;
    volatile uint32_t *q;
    uint32_t v;
    uint32_t s = func_02088978();
    reg = (volatile uint32_t *)(0x40000b8 + idx * 12);
    v = reg[0];
    reg[0] = v & 0xc5ffffff;
    v = reg[0];
    reg[0] = v & 0x7fffffff;
    v = reg[0];
    v = reg[0];
    if (idx == 0) {
        q = (volatile uint32_t *)(0x40000b0 + idx * 12);
        q[0] = 0;
        q[1] = 0;
        q[2] = 0x81400001;
    }
    func_0208898c(s);
}
