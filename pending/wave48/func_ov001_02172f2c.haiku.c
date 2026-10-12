#include "ffc/types.h"

extern int32_t func_ov000_0214f2a8(uint32_t a, uint32_t b);
extern void func_ov000_021652a8(int a, int b, int c, const void *d, const void *e, const void *f, ...);
extern uint8_t data_ov001_0218f544[];
extern uint8_t data_ov001_0218f45b[];
extern uint8_t data_ov001_0218f87c[];
extern uint8_t data_ov001_0218f944[];
extern uint8_t data_ov001_0218f990[];
extern uint8_t data_ov001_0218f9ec[];
extern uint8_t data_ov001_0218fa30[];
extern uint8_t data_ov001_0218fa68[];
extern uint8_t data_ov001_0218fab4[];

uint32_t func_ov001_02172f2c(uint8_t *p, uint32_t *q)
{
    uint32_t *r7 = (uint32_t *)q[0];
    uint32_t r4 = 0x44c;
    int32_t r5;

    func_ov000_021652a8(8, 4, 0xf, data_ov001_0218f87c, data_ov001_0218f544, data_ov001_0218f45b, r4);

    if (r7[1] == 0) {
        r5 = func_ov000_0214f2a8(*(uint32_t *)(p + 0x50), r7[0]);
        if (r5 < 0) {
            switch (r5) {
            case -0x1c:
                r4 += 0xd;
                func_ov000_021652a8(8, 4, 0xf, data_ov001_0218f944, data_ov001_0218f544, data_ov001_0218f45b, r4);
                break;
            case -0x21:
                r4 += 0x12;
                func_ov000_021652a8(8, 4, 0xf, data_ov001_0218f990, data_ov001_0218f45b, r4);
                break;
            case -0x27:
                r4 += 0x18;
                func_ov000_021652a8(8, 4, 0xf, data_ov001_0218f9ec, data_ov001_0218f544, data_ov001_0218f45b, r4);
                break;
            case -0x2a:
                r4 += 0x1d;
                func_ov000_021652a8(8, 4, 0xf, data_ov001_0218fa30, data_ov001_0218f544, data_ov001_0218f45b, r4);
                break;
            default:
                func_ov000_021652a8(8, 4, 0xf, data_ov001_0218fa68, data_ov001_0218f544, data_ov001_0218f45b, 0x46f, r5);
                break;
            }
            *(uint32_t *)(p + 0x124) = 1;
            *(uint32_t *)(p + 0x40) = 6;
            *(int32_t *)(p + 0x54) = r5;
            return 3;
        }
        r7[1] = 1;
    }

    q[3] = 1;
    q[4] = 1;
    func_ov000_021652a8(8, 4, 0xf, data_ov001_0218fab4, data_ov001_0218f544, data_ov001_0218f45b, 0x482);
    return 1;
}
