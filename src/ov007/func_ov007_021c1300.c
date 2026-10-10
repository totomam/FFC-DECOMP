#include "ffc/types.h"

extern int func_ov000_02167c24(void *a, void *b, void *c, uint32_t d);
extern int func_ov007_021c0cb4(void *a, uint32_t b, uint32_t c);
extern uint8_t data_ov007_021c95a4[];
extern uint8_t data_ov007_021c96a8[];

int func_ov007_021c1300(uint8_t *p)
{
    uint32_t *r4 = *(uint32_t **)(p + 8);
    func_ov000_02167c24(*(void **)(p + 0x18), data_ov007_021c95a4, data_ov007_021c96a8, r4[0]);
    func_ov007_021c0cb4(p, r4[1], r4[2]);
    return 0;
}
