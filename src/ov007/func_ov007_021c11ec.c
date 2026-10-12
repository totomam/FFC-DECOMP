#include "ffc/types.h"

extern uint8_t data_ov007_021c95a4[];
extern uint8_t data_ov007_021c96a8[];
extern uint8_t data_ov007_021c96b0[];
extern uint8_t data_ov007_021c96b8[];
extern uint8_t data_ov007_021c96c0[];
extern uint8_t data_ov007_021c96c8[];
extern uint8_t data_ov007_021c96cc[];
extern uint8_t data_ov007_021c96dc[];
extern uint8_t data_ov007_021c96e8[];

extern void func_ov000_02167c24(void *ctx, void *a, void *b, uint32_t v);
extern void func_ov000_02167d20(void *ctx, void *a, void *b, uint32_t v);
extern void func_ov007_021c0d3c(void *self, uint32_t a, uint32_t b);
extern void func_ov007_021c0cb4(void *self, uint32_t a, uint32_t b);

int func_ov007_021c11ec(uint32_t *a)
{
    uint32_t *r4 = (uint32_t *)a[2];

    func_ov000_02167c24((void *)a[6], data_ov007_021c95a4, data_ov007_021c96a8, r4[0]);
    if (r4[3] != 0) {
        func_ov000_02167c24((void *)a[6], data_ov007_021c95a4, data_ov007_021c96b0, r4[3]);
    }
    if (r4[4] != 0) {
        func_ov000_02167c24((void *)a[6], data_ov007_021c95a4, data_ov007_021c96b8, r4[4]);
    }
    func_ov000_02167d20((void *)a[6], data_ov007_021c95a4, data_ov007_021c96c0, r4[5]);
    func_ov000_02167d20((void *)a[6], data_ov007_021c95a4, data_ov007_021c96c8, r4[6]);
    if (r4[7] != 0) {
        func_ov000_02167c24((void *)a[6], data_ov007_021c95a4, data_ov007_021c96cc, r4[7]);
    }
    func_ov000_02167d20((void *)a[6], data_ov007_021c95a4, data_ov007_021c96dc, r4[8]);
    func_ov007_021c0d3c(a, r4[9], r4[10]);
    func_ov000_02167d20((void *)a[6], data_ov007_021c95a4, data_ov007_021c96e8, r4[11]);
    func_ov007_021c0cb4(a, r4[1], r4[2]);
    return 0;
}
