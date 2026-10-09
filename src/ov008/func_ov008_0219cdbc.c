#include "ffc/types.h"

extern void func_ov008_0219a890(void *p);
extern void func_0200d5ec(void *p);
extern void func_020695d0(void *p);

uint8_t *func_ov008_0219cdbc(uint8_t *a0)
{
    func_ov008_0219a890(a0 + 0xec);
    func_0200d5ec(a0 + 0xc4);
    func_020695d0(a0);
    return a0;
}
