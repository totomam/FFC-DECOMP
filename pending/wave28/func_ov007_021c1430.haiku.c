#include "ffc/types.h"

extern void func_ov000_02167c24(void *a, void *b, void *c, uint32_t d);
extern void func_ov000_02167d20(void *a, void *b, void *c, uint32_t d);
extern void func_ov007_021c0cb4(void *a, uint32_t b, uint32_t c);
extern uint8_t data_ov007_021c95a4[];
extern uint8_t data_ov007_021c96a8[];
extern uint8_t data_ov007_021c96b0[];
extern uint8_t data_ov007_021c96c8[];

uint32_t func_ov007_021c1430(uint32_t *r5)
{
    uint32_t *r4 = (uint32_t *)r5[2];

    func_ov000_02167c24((void *)r5[6], data_ov007_021c95a4, data_ov007_021c96a8, r4[0]);
    if (r4[3] != 0) {
        func_ov000_02167c24((void *)r5[6], data_ov007_021c95a4, data_ov007_021c96b0, r4[3]);
    }
    func_ov000_02167d20((void *)r5[6], data_ov007_021c95a4, data_ov007_021c96c8, 1);
    func_ov007_021c0cb4(r5, r4[1], r4[2]);
    return 0;
}
