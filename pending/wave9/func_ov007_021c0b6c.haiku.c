#include "ffc/types.h"

extern int func_ov000_02167c24(void *a, void *b, void *c, uint32_t d);
extern int func_ov007_021c0918(void *a, uint32_t b, uint32_t c);
extern uint8_t data_ov007_021c9238[];
extern uint8_t data_ov007_021c92f8[];

int func_ov007_021c0b6c(uint8_t *p)
{
    uint32_t *r4 = *(uint32_t **)(p + 8);
    func_ov000_02167c24(*(void **)(p + 0x18), data_ov007_021c9238, data_ov007_021c92f8, r4[0]);
    func_ov007_021c0918(p, r4[1], r4[2]);
    return 0;
}
