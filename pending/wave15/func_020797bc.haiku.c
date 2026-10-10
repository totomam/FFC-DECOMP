#include "ffc/types.h"

extern void func_02089cf8(void *p, uint32_t v);
extern uint32_t data_0213e240[];

void func_020797bc(void *p)
{
    if (p) {
        func_02089cf8(p, 0);
        data_0213e240[2] &= ~(uint32_t)p;
    }
}
