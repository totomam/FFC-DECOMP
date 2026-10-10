#include "ffc/types.h"

extern uint8_t data_020b04b8[];
extern int func_020782c8(void *p);
extern void func_02088f30(void);

void *func_02052304(void *p)
{
    *(uint8_t **)p = data_020b04b8;
    if (func_020782c8((uint8_t *)p + 8) == 0) {
        func_02088f30();
    }
    return p;
}
