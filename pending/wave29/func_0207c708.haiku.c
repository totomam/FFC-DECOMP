#include "ffc/types.h"

extern uint32_t func_0207ab40(uint32_t);
extern void func_0207c774(void);
extern void func_0207c818(void);
extern void func_0207c824(void);
extern void func_0207c84c(void);
extern void func_0207c858(void);
extern void func_0207c878(void);
extern void func_0207c87c(void);
extern void func_0207c890(void);

void func_0207c708(uint32_t *p, uint32_t r1)
{
    uint32_t *q = p;
    if (func_0207ab40(r1) == 0) {
        q[0x5b] = (uint32_t)func_0207c774;
        q[0x5c] = (uint32_t)func_0207c818;
        q[0x5d] = (uint32_t)func_0207c824;
        q[0x5e] = (uint32_t)func_0207c84c;
    } else {
        q[0x5b] = (uint32_t)func_0207c858;
        q[0x5c] = (uint32_t)func_0207c878;
        q[0x5d] = (uint32_t)func_0207c87c;
        q[0x5e] = (uint32_t)func_0207c890;
    }
}
