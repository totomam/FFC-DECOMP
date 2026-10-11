#include "ffc/types.h"

extern uint8_t data_ov011_021cb00c[];
extern uint32_t *data_0213df20;
extern void func_0206047c(uint32_t);
extern void func_020367a8(void *);
extern void func_ov009_021a4360(void *);
extern void func_02056844(void *);

void *func_ov011_021bf224(void *p)
{
    uint8_t *self = (uint8_t *)p;
    *(uint8_t **)self = data_ov011_021cb00c;
    func_0206047c(data_0213df20[8]);
    func_020367a8(self + 0x2CC);
    func_ov009_021a4360(self);
    func_02056844(self);
    return self;
}
