#include "ffc/types.h"

extern uint32_t data_ov013_021c4798[];
extern uint32_t *data_0213df20[];
extern void func_0206047c(uint32_t);
extern void func_ov013_021c07e4(void *);
extern void func_0200d5ec(void *);
extern void func_020695d0(void *);

void *func_ov013_021bf9e8(uint32_t *p)
{
    *p = (uint32_t)data_ov013_021c4798;
    func_0206047c(*(uint32_t *)((uint8_t *)*data_0213df20 + 0x20));
    func_ov013_021c07e4((uint8_t *)p + 0xe8);
    func_0200d5ec((uint8_t *)p + 0xc0);
    func_020695d0(p);
    return p;
}
