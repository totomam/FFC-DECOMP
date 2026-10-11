#include "ffc/types.h"

extern void func_ov000_02167c24(void *a, void *b, void *c, uint32_t d);
extern void func_ov000_02167d20(void *a, void *b, void *c, uint32_t d);
extern uint8_t data_ov007_021c9238[];
extern uint8_t data_ov007_021c92f8[];
extern uint8_t data_ov007_021c9300[];

int func_ov007_021c0c48(uint8_t *self)
{
    uint32_t *r4 = *(uint32_t **)(self + 8);
    func_ov000_02167c24(*(void **)(self + 0x18), data_ov007_021c9238, data_ov007_021c92f8, r4[0]);
    func_ov000_02167d20(*(void **)(self + 0x18), data_ov007_021c9238, data_ov007_021c9300, r4[1]);
    return 0;
}
