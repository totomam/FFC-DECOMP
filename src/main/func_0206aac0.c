#include "ffc/types.h"

extern void func_02088f30(void);
extern void func_02056844(void *p);
extern uint32_t data_020b1ba8;

void *func_0206aac0(void *p)
{
    uint8_t *q = (uint8_t *)p;
    *(uint32_t **)p = &data_020b1ba8;
    if (q[0x34] != 0 && q[0x35] == 0) {
        func_02088f30();
    }
    func_02056844(p);
    return p;
}
