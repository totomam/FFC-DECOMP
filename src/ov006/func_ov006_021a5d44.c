#include "ffc/types.h"

extern uint32_t func_ov006_021b3bf8(uint32_t a, uint32_t b);
extern void func_ov006_021b3e20(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3d84(uint32_t a, int32_t b, uint32_t c);
extern void func_ov006_021b3cec(uint32_t a, int32_t b, uint16_t c, uint16_t d);
extern uint8_t *data_ov006_021bc700;
extern uint16_t data_ov006_021b8428[];
extern uint16_t data_ov006_021b842a[];

void func_ov006_021a5d44(void)
{
    uint32_t r4;
    uint32_t h;
    int32_t r5;
    uint8_t *p = data_ov006_021bc700;
    int8_t idx;

    r4 = 0x44;
    idx = (int8_t)p[0x63];
    if (idx > 11) {
        r4 = 0x45;
    }
    h = func_ov006_021b3bf8(*(uint32_t *)(p + 0x58), 0);
    func_ov006_021b3e20(0, r4, h);
    r5 = -1;
    func_ov006_021b3d84(*(uint32_t *)(data_ov006_021bc700 + 0x58), r5, 2);
    p = data_ov006_021bc700;
    idx = (int8_t)p[0x63];
    func_ov006_021b3cec(*(uint32_t *)(p + 0x58), r5,
                        data_ov006_021b8428[idx * 2],
                        data_ov006_021b842a[idx * 2]);
}
