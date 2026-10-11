#include "ffc/types.h"

extern uint8_t data_ov013_021c4798[];
extern uint32_t data_0213df20[];
extern void func_0206047c(uint32_t);
extern void func_ov013_021c07e4(void *);
extern void func_0200d5ec(void *);
extern void func_020695d0(void *);
extern void func_02056844(void *);

void *func_ov013_021bfa1c(void *p)
{
    uint8_t *self = (uint8_t *)p;
    *(uint8_t **)self = data_ov013_021c4798;
    func_0206047c(*(uint32_t *)(*(uint32_t *)data_0213df20 + 0x20));
    func_ov013_021c07e4(self + 0xe8);
    func_0200d5ec(self + 0xc0);
    func_020695d0(self);
    func_02056844(self);
    return self;
}
