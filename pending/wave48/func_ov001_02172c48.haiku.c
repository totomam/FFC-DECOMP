#include "ffc/types.h"

extern void func_ov000_021652a8(int a, int b, int c, const void *d, ...);
extern uint8_t data_ov001_0218f544[];
extern uint8_t data_ov001_0218f41a[];
extern uint8_t data_ov001_0218f68c[];
extern uint8_t data_ov001_0218f6b4[];
extern uint8_t data_ov001_0218f6d0[];
extern uint8_t data_ov001_0218f704[];
extern uint8_t data_ov001_0218f740[];
extern uint8_t data_ov001_0218f778[];
extern uint8_t data_ov001_0218f7a8[];
extern uint8_t data_ov001_0218f7d8[];

uint32_t func_ov001_02172c48(uint32_t v, uint8_t *base, uint32_t arg2)
{
    func_ov000_021652a8(8, 4, 8, data_ov001_0218f68c,
                        data_ov001_0218f544, data_ov001_0218f41a, (uint32_t)0x3aa);
    func_ov000_021652a8(8, 4, 8, data_ov001_0218f6b4,
                        arg2, base + 0x6b0, base + 0x7b0, base + 0x5b0);

    if (v & 0x8000) {
        func_ov000_021652a8(8, 4, 2, data_ov001_0218f6d0,
                            data_ov001_0218f544, data_ov001_0218f41a, (uint32_t)0x3b2);
        v &= ~0x8000;
    }
    if (v & 0x4000) {
        func_ov000_021652a8(8, 4, 2, data_ov001_0218f704,
                            data_ov001_0218f544, data_ov001_0218f41a, (uint32_t)0x3ba);
        v &= ~0x4000;
    }

    switch ((uint8_t)v) {
    case 1:
        func_ov000_021652a8(8, 4, 2, data_ov001_0218f740,
                            data_ov001_0218f544, data_ov001_0218f41a, (uint32_t)0x3c3);
        break;
    case 2:
        func_ov000_021652a8(8, 4, 2, data_ov001_0218f778,
                            data_ov001_0218f544, data_ov001_0218f41a, (uint32_t)0x3c9);
        break;
    case 3:
        func_ov000_021652a8(8, 4, 2, data_ov001_0218f7a8,
                            data_ov001_0218f544, data_ov001_0218f41a, (uint32_t)0x3cf);
        break;
    case 4:
        func_ov000_021652a8(8, 4, 2, data_ov001_0218f7d8,
                            data_ov001_0218f544, data_ov001_0218f41a, (uint32_t)0x3d5);
        break;
    }
    return v;
}
