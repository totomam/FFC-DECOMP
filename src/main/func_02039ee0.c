#include "ffc/types.h"

extern void func_02035c18(void *p);
extern void func_0203b07c(void *p);
extern void func_02039738(void *p);
extern void func_02056844(void *p);

void *func_02039ee0(uint8_t *p)
{
    func_02035c18(p + 0xb8);
    func_0203b07c(p + 0x94);
    func_02039738(p);
    func_02056844(p);
    return p;
}
