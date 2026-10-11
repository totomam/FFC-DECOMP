#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056ec8(void *p, uint32_t arg);
extern uint8_t data_020aeab8[];

void *func_0203b75c(uint32_t x)
{
    void *p = func_0205681c(0x18);
    if (p != 0) {
        func_02056ec8(p, x << 1);
        *(void **)p = data_020aeab8;
    }
    return p;
}
