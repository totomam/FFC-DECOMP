#include "ffc/types.h"

extern void *(*data_ov000_0216bc74)(uint32_t size);
extern uint32_t func_ov000_021497b8(void);
extern void func_ov000_0214b038(uint8_t *dst, uint32_t n);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_ov000_02149640(uint8_t *p, uint32_t a, uint16_t b);
extern void func_ov000_02147c54(uint8_t *p, int32_t len, uint32_t z0, uint32_t z1, uint8_t *ctx);
extern void func_ov000_0214ac74(uint8_t *p, uint8_t *buf, int32_t len);
extern void (*data_ov000_0216bca4)(uint8_t *p);
extern volatile uint16_t data_ov000_0216980c[];

void func_ov000_0214b218(uint8_t *r7)
{
    uint8_t *r6 = *(uint8_t **)(r7 + 0xc);
    uint8_t *r4 = data_ov000_0216bc74(0x98);
    uint8_t *r5;
    uint32_t t;
    uint32_t i;
    int32_t n;
    int32_t m;

    if (r4 == 0) {
        r6[0x455] = 9;
        return;
    }

    r5 = r4 + 9;
    r4[9] = 3;
    r5[1] = 0;

    t = func_ov000_021497b8();
    r6[0x34] = (uint8_t)(t >> 24);
    r6[0x35] = (uint8_t)(t >> 16);
    r6[0x36] = (uint8_t)(t >> 8);
    r6[0x37] = (uint8_t)t;

    func_ov000_0214b038(r6 + 0x38, 0x1c);
    func_02084ca4(r6 + 0x34, r5 + 2, 0x20);
    func_ov000_02149640(r6, *(uint32_t *)(r7 + 0x1c), *(uint16_t *)(r7 + 0x18));

    if (r6[0x30] != 0) {
        r5[0x22] = 0x20;
        func_02084ca4(r6 + 0x74, r5 + 0x23, 0x20);
        r5 += 0x43;
    } else {
        uint8_t *q = r5 + 0x22;
        r5 += 0x23;
        *q = 0;
    }

    i = 0; *r5++ = (uint8_t)i;
    *r5++ = 4;
    for (; i < 2; i++) {
        *r5++ = (uint8_t)(data_ov000_0216980c[i] >> 8);
        *r5++ = (uint8_t)data_ov000_0216980c[i];
    }
    r5[0] = 1;
    r5[1] = 0;
    m = (int32_t)(r5 + 2 - r4) - 5;

    r4[0] = 0x16;
    r4[1] = 3;
    r4[2] = 0;
    r4[3] = (uint8_t)(m >> 8);
    r4[4] = (uint8_t)m;
    r4[5] = 1;
    r4[6] = (uint8_t)((m - 4) >> 16);
    r4[7] = (uint8_t)((m - 4) >> 8);
    r4[8] = (uint8_t)(m - 4);

    func_ov000_02147c54(r4, m + 5, 0, 0, r7);
    func_ov000_0214ac74(r6, r4 + 5, m);
    data_ov000_0216bca4(r4);
}
