#include "ffc/types.h"

extern void func_0200b630(void *p);
extern void func_0200d5ec(void *p);
extern void func_020695d0(void *p);
extern void func_02056844(void *p);

void *func_0203245c(uint8_t *p)
{
    func_0200b630(p + 0xe8);
    func_0200d5ec(p + 0xc4);
    func_020695d0(p);
    func_02056844(p);
    return p;
}
