#include "ffc/types.h"

extern uint8_t data_ov006_021ba0c8[];
extern uint8_t data_ov006_021ba0a8[];
extern uint8_t data_ov006_021ba0e0[];
extern uint8_t data_ov006_021ba148[];
extern uint8_t data_ov006_021ba0f0[];
extern uint8_t data_ov006_021ba0e8[];

extern void func_ov006_0219b2a4(void);
extern void func_020849ac(int, void *, uint32_t);
extern void func_020849c4(void *, void *, uint32_t);
extern uint32_t func_ov006_0219ae1c(void *, uint32_t);
extern void func_0208e9bc(int, void *, uint32_t, uint32_t, uint32_t, uint32_t);

#define PP (*(uint8_t **)(data_ov006_021ba0a8 + 0x1c))

void func_ov006_0219b2c8(uint32_t a0, uint32_t a1, uint32_t a2)
{
    uint32_t i, cnt, r6;
    uint16_t m;

    if (data_ov006_021ba0c8[6] != PP[0x4b4]) {
        func_ov006_0219b2a4();
    }

    data_ov006_021ba0e0[4] = (uint8_t)((data_ov006_021ba0e0[4] & ~3) | 2);
    data_ov006_021ba0e0[5] = PP[0x4b3];
    data_ov006_021ba0e0[6] = data_ov006_021ba0c8[6];
    *(uint32_t *)data_ov006_021ba0e0 = *(uint32_t *)(PP + 0x4b8);
    data_ov006_021ba0e0[4] = (uint8_t)((data_ov006_021ba0e0[4] & ~0xfc) | ((PP[0x4b5] & 0x3f) << 2));
    r6 = data_ov006_021ba0c8[9];
    data_ov006_021ba0c8[9] = (uint8_t)(r6 + 1);
    data_ov006_021ba0e0[7] = (uint8_t)r6;
    data_ov006_021ba0e0[0xa] = PP[0x358];
    *(uint16_t *)(data_ov006_021ba0e0 + 0xc) = *(uint16_t *)(PP + 0x35a);
    *(uint16_t *)(data_ov006_021ba0e0 + 0xe) = *(uint16_t *)(PP + 0x35c);

    if (*(uint32_t *)(data_ov006_021ba0a8 + 0x10) == 0) {
        if (*(void **)(data_ov006_021ba0a8 + 0x14) != 0) {
            (*(void (**)(uint32_t))(data_ov006_021ba0a8 + 0x14))(*(uint32_t *)(PP + 0x4b8));
        }
    }

    for (i = 0; i < 8; i++) {
        data_ov006_021ba148[i] = PP[0x4a8 + i];
    }

    func_020849ac(0, data_ov006_021ba0f0, 0x58);

    m = (uint16_t)(*(uint16_t *)(PP + 0x4b0) ^ *(uint16_t *)(PP + 0x35a));
    cnt = 0;
    for (i = 0; i < 15; i++) {
        if (m & (2 << i)) {
            func_020849c4(PP + 0x35e + 22 * i, data_ov006_021ba0f0 + 22 * cnt, 0x16);
            *(uint16_t *)(PP + 0x4b0) = (uint16_t)(*(uint16_t *)(PP + 0x4b0) | (2 << i));
            cnt++;
            if (cnt == 4) {
                break;
            }
        }
    }

    if (cnt < 4) {
        data_ov006_021ba0f0[22 * cnt] &= (uint8_t)~0xf0;
    }

    *(uint16_t *)(data_ov006_021ba0e0 + 8) = 0;
    *(uint16_t *)(data_ov006_021ba0e0 + 8) = (uint16_t)func_ov006_0219ae1c(data_ov006_021ba0e8, 0x68);

    if (*(uint16_t *)(PP + 0x4b0) == *(uint16_t *)(PP + 0x35a)) {
        data_ov006_021ba0c8[4] = 1;
    }

    func_0208e9bc(0, data_ov006_021ba0e0, 0x70, a0, a1, (uint8_t)(a2 | 3));

    if (*(uint32_t *)(data_ov006_021ba0a8 + 0x10) == 1) {
        if (*(void **)(data_ov006_021ba0a8 + 0x14) != 0) {
            (*(void (**)(uint32_t))(data_ov006_021ba0a8 + 0x14))(*(uint32_t *)(PP + 0x4b8));
        }
    }
}
