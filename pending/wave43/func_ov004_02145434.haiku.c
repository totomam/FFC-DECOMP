#include "ffc/types.h"

extern void func_01ffe5f0(uint32_t a, uint32_t b);
extern void func_01ffe554(uint32_t a, uint32_t b);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern void func_01ffe510(uint32_t *out, uint32_t a, uint32_t b);
extern void func_0205cbd0(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i);
extern void func_0205cbfc(void *obj, int32_t a, int32_t b);
extern uint32_t data_ov004_02157860[];
extern int16_t data_020a1bd0[];

void func_ov004_02145434(uint8_t *p)
{
    uint32_t v;
    uint8_t *r4;
    uint32_t r6;
    int32_t val;

    if (*(p + 0xa4) == 0) {
        return;
    }
    func_01ffe5f0(*(uint32_t *)(p + 0x90), (uint16_t)*(uint32_t *)(p + 0xa8));
    func_01ffe554(*(uint32_t *)(p + 0x90), *(uint32_t *)(p + 0xac));
    r6 = func_020817c8(*(uint32_t *)(p + 0xac), data_ov004_02157860[0]);
    func_01ffe510(&v, (uint16_t)*(uint32_t *)(p + 0xa8), r6);
    r4 = *(uint8_t **)(*(uint8_t **)(p + 0x94) + 0x44);
    *(uint32_t *)(r4 + 0x1c) = 0;
    *(uint32_t *)(r4 + 0x20) = 0;
    func_0205cbd0(r4, v, r6, 0, 0, 0, 0, 0, 0, 0);
    val = func_020817c8(data_ov004_02157860[3],
                        *(int16_t *)((uint8_t *)data_020a1bd0 + (((uint16_t)*(uint32_t *)(p + 0xa8) >> 4) << 2)));
    val = (int32_t)val >> 12;
    if (*(uint32_t *)(p + 0xa0) == 1) {
        val = -val;
    }
    func_0205cbfc(r4, val + 0x80, 0x6c);
}
