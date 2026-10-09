#include "ffc/types.h"

extern void func_ov008_0219a890(void *p);
extern void func_0200d5ec(void *p);
extern void func_020695d0(void *p);
extern void func_02056844(void *p);

void *func_ov008_0219cdd8(uint8_t *p)
{
    func_ov008_0219a890(p + 0xec);
    func_0200d5ec(p + 0xc4);
    func_020695d0(p);
    func_02056844(p);
    return p;
}
