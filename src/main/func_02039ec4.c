#include "ffc/types.h"

extern void func_02035c18(void *p);
extern void func_0203b07c(void *p);
extern void func_02039738(void *p);

uint8_t *func_02039ec4(uint8_t *a0)
{
    func_02035c18(a0 + 0xb8);
    func_0203b07c(a0 + 0x94);
    func_02039738(a0);
    return a0;
}
