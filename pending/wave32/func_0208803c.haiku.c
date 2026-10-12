#include "ffc/types.h"

extern uint32_t func_02087460(void);
extern void func_020880a0(void);
extern uint32_t data_021417b4[];

void func_0208803c(void) {
    uint32_t r1 = 0;
    uint32_t r2 = *(uint32_t *)0x2fffd9c;
    data_021417b4[2] = r2;
    if (r2 >= 0x2600000 && r2 < 0x2800000) {
        r1 = 1;
    }
    if (r1 == 0) {
        r2 = 0;
    }
    data_021417b4[0] = r2;
    if (r2 == 0) {
        uint32_t fn = (uint32_t)func_020880a0;
        uint32_t *p = (uint32_t *)0x2fffd9c;
        *p = fn;
        if (func_02087460() == 0) {
            *(uint32_t *)((uint32_t)p & 0xff7fffff) = fn;
        }
    }
    data_021417b4[3] = 0;
}
