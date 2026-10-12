#include "ffc/types.h"

extern void func_020849ac(uint32_t a, uint8_t *b, uint32_t c);
extern void func_020849c4(uint32_t a, uint8_t *b, uint32_t c);
extern uint16_t func_ov006_0219ae1c(uint8_t *p, uint32_t n);
extern void func_0208e9bc(uint32_t a, uint8_t *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint8_t data_ov006_021ba0a8[];
extern uint8_t data_ov006_021ba0e0[];
extern uint8_t data_ov006_021ba0ee[];
extern uint8_t data_ov006_021ba0c8[];
extern uint8_t data_ov006_021ba0e8[];

void func_ov006_0219b1ac(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t bb = b;
    if (*(uint32_t *)(data_ov006_021ba0a8 + 0x20) + 0x62 <= (uint32_t)(*(uint8_t **)(data_ov006_021ba0a8 + 0x1c) + 0x358)) {
        data_ov006_021ba0e0[0xc] = 0x62;
    } else {
        data_ov006_021ba0e0[0xc] = (uint8_t)((uint32_t)(*(uint8_t **)(data_ov006_021ba0a8 + 0x1c) + 0x358) - *(uint32_t *)(data_ov006_021ba0a8 + 0x20));
        func_020849ac(0, data_ov006_021ba0ee + data_ov006_021ba0e0[0xc], 0x62 - data_ov006_021ba0e0[0xc]);
    }

    func_020849c4(*(uint32_t *)(data_ov006_021ba0a8 + 0x20), data_ov006_021ba0ee, data_ov006_021ba0e0[0xc]);

    data_ov006_021ba0e0[0xa] = data_ov006_021ba0c8[7];
    data_ov006_021ba0e0[0xb] = data_ov006_021ba0c8[8];
    data_ov006_021ba0e0[4] = (uint8_t)((3 & *(*(uint8_t **)(data_ov006_021ba0a8 + 0x1c) + 0x4b2)) | (data_ov006_021ba0e0[4] & ~3));
    data_ov006_021ba0e0[5] = *(*(uint8_t **)(data_ov006_021ba0a8 + 0x1c) + 0x4b3);
    data_ov006_021ba0e0[6] = data_ov006_021ba0c8[6];
    *(uint32_t *)data_ov006_021ba0e0 = *(uint32_t *)(*(uint8_t **)(data_ov006_021ba0a8 + 0x1c) + 0x4b8);
    data_ov006_021ba0e0[4] = (uint8_t)((data_ov006_021ba0e0[4] & 3) | ((*(*(uint8_t **)(data_ov006_021ba0a8 + 0x1c) + 0x4b5) & 0x3f) << 2));

    data_ov006_021ba0e0[7] = data_ov006_021ba0c8[9];
    data_ov006_021ba0c8[9] = data_ov006_021ba0c8[9] + 1;
    *(uint16_t *)(data_ov006_021ba0e0 + 8) = 0;
    *(uint16_t *)(data_ov006_021ba0e0 + 8) = func_ov006_0219ae1c(data_ov006_021ba0e8, 0x68);

    data_ov006_021ba0c8[7] = data_ov006_021ba0c8[7] + 1;
    if (data_ov006_021ba0c8[7] < data_ov006_021ba0c8[8]) {
        *(uint32_t *)(data_ov006_021ba0a8 + 0x20) += 0x62;
    } else {
        data_ov006_021ba0c8[4] = 4;
    }

    func_0208e9bc(0, data_ov006_021ba0e0, 0x70, a, bb, (uint8_t)(c | 3));
}
