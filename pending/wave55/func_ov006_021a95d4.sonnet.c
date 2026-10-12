#include "ffc/types.h"

typedef struct P {
    uint8_t pad0[0x38];
    uint32_t f38;
    uint8_t pad1[0x40 - 0x3c];
    uint16_t f40;
    uint8_t pad2[0x51 - 0x42];
    uint8_t f51;
    uint8_t pad3[0x53 - 0x52];
    uint8_t f53;
    uint8_t pad4[0x55 - 0x54];
    uint8_t f55;
    uint8_t f56;
    uint8_t f57;
    uint8_t f58;
} P;

typedef struct G {
    uint16_t pad;
    uint16_t f2;
    P *f4;
} G;

extern G data_ov006_021bc778;
extern void func_ov006_021a37a8(void);
extern void func_ov006_021a3798(void);
extern void func_ov006_021a3df0(void);
extern uint32_t func_ov006_021af65c(void);
extern uint32_t func_ov006_021af650(void);
extern uint32_t func_0208130c(uint32_t a, uint32_t b);
extern void func_ov006_021a99cc(void);
extern void func_ov006_021b0600(uint32_t a);
extern uint32_t func_02081334(uint32_t a, uint32_t b);
extern void func_ov006_021a9d04(void);
extern uint32_t func_ov006_021b570c(uint32_t a, void (*fn)(void), uint32_t b, uint32_t c);
extern void func_ov006_021a9be0(void);
extern void func_ov006_021a9c60(void);

void func_ov006_021a95d4(void)
{
    int32_t r;

    if (data_ov006_021bc778.f4->f38 != 0) {
        return;
    }
    {
        if (data_ov006_021bc778.f4->f55 != 0) {
            data_ov006_021bc778.f4->f55--;
        }

        switch (func_ov006_021af65c()) {
        case 1:
            data_ov006_021bc778.f4->f57 = 1;
            func_ov006_021a37a8();
            return;
        case 2:
            if (data_ov006_021bc778.f4->f55 == 0) {
                func_ov006_021a3df0();
                r = func_ov006_021af650();
                data_ov006_021bc778.f2 = func_0208130c(data_ov006_021bc778.f4->f40 * r, data_ov006_021bc778.f4->f53);
                func_ov006_021a99cc();
                data_ov006_021bc778.f4->f55 = 4;
                return;
            }
            break;
        case 3: {
            uint32_t zero = 0;
            data_ov006_021bc778.f4->f57 = zero;
            func_ov006_021a3798();
            r = func_ov006_021af650();
            data_ov006_021bc778.f2 = func_0208130c(data_ov006_021bc778.f4->f40 * r, data_ov006_021bc778.f4->f53);
            func_ov006_021b0600(0x13);
            func_ov006_021a99cc();
            r = func_02081334(data_ov006_021bc778.f2, 0x1c);
            if (r == 0) {
                func_ov006_021a9d04();
                return;
            }
            if (r < 14) {
                data_ov006_021bc778.f4->f38 = func_ov006_021b570c(zero, func_ov006_021a9be0, zero, 0x78);
            } else {
                data_ov006_021bc778.f4->f38 = func_ov006_021b570c(zero, func_ov006_021a9c60, zero, 0x78);
            }
            return;
        }
        case 4:
            if (data_ov006_021bc778.f2 == 0) {
                if (data_ov006_021bc778.f4->f58 == 0) {
                    func_ov006_021b0600(9);
                    data_ov006_021bc778.f4->f58 = 1;
                }
            } else {
                func_ov006_021b0600(0x13);
                data_ov006_021bc778.f4->f38 = func_ov006_021b570c(0, func_ov006_021a9be0, 0, 0x78);
            }
            return;
        case 6:
            if (data_ov006_021bc778.f4->f51 <= 4 || data_ov006_021bc778.f2 == data_ov006_021bc778.f4->f40) {
                if (data_ov006_021bc778.f4->f58 == 0) {
                    func_ov006_021b0600(9);
                    data_ov006_021bc778.f4->f58 = 1;
                }
            } else {
                func_ov006_021b0600(0x13);
                data_ov006_021bc778.f4->f38 = func_ov006_021b570c(0, func_ov006_021a9c60, 0, 0x78);
            }
            return;
        case 5:
        case 7:
            data_ov006_021bc778.f4->f58 = 0;
            return;
        default:
            break;
        }
    }
}
