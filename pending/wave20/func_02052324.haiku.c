#include "ffc/types.h"

extern int32_t func_020782c8(void *p);
extern void func_02088f30(void);
extern void func_02056844(void *p);
extern uint8_t data_020b04b8[];

void *func_02052324(void *a) {
    *(uint32_t *)a = (uint32_t)data_020b04b8;
    if (func_020782c8((uint8_t *)a + 8) == 0) {
        func_02088f30();
    }
    func_02056844(a);
    return a;
}
