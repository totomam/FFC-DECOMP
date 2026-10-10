#include "ffc/types.h"

extern void func_0202ad8c(void *p);
extern uint8_t data_020ad97c[];

void *func_0202b8b4(void *p)
{
    func_0202ad8c(p);
    *(uint8_t **)p = data_020ad97c;
    *(uint32_t *)((uint8_t *)p + 0x19c) = 0;
    return p;
}
