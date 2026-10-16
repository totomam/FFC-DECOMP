#include "ffc/types.h"

extern void func_02052664(uint32_t p0, uint32_t p1);
extern char sym_f;

void func_020376e0(void)
{
    func_02052664(0, (uint32_t)&sym_f);
}
