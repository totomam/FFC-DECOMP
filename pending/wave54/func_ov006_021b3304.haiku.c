#include "ffc/types.h"

extern uint32_t func_ov006_021b26a8(void);
extern void func_ov006_021b2a04(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b34d4(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b35cc(void);
extern uint32_t func_ov006_021b3688(void);
extern uint8_t *data_ov006_021bc808;

void func_ov006_021b3304(void)
{
    uint32_t sel = func_ov006_021b26a8();
    uint32_t o;
    uint32_t r;
    uint8_t *base;

    switch (sel) {
    case 0:
    case 2:
    case 3:
        return;
    case 1:
        base = data_ov006_021bc808;
        o = 0x648;
        {
            uint16_t a = *(uint16_t *)(base + o);
            o += 2;
            {
                uint16_t b = *(uint16_t *)(base + o);
                func_ov006_021b2a04(4, (uint16_t)(a + 1), b);
            }
        }
        return;
    case 4:
    case 5:
    case 6: {
        uint32_t o7 = 0x200;
        uint32_t o4 = 0xaa4;
        uint32_t v = *(uint16_t *)(data_ov006_021bc808 + o7);
        uint32_t w = *(uint32_t *)(data_ov006_021bc808 + o4);
        uint32_t x = (v << 28) - (v >> 31);
        x = (x >> 28) | (x << 4);
        x = (v >> 31) + x;
        func_ov006_021b34d4(0, v, w + (x << 6));
        func_ov006_021b35cc();
        if (data_ov006_021bc808[o4 - 0x14] == 0x1b) {
            return;
        }
        if (*(uint32_t *)(data_ov006_021bc808 + o7 + 4) > o7 - 0x20) {
            data_ov006_021bc808[o4 - 0x14] = 0x1b;
            return;
        }
        break;
    }
    default:
        return;
    }

    r = func_ov006_021b3688();
    if (r != 0x10) {
        r = func_ov006_021b3688();
        if (r != 0x20) {
            goto other;
        }
    }
    func_ov006_021b3688();
    data_ov006_021bc808[0xa90] = 10;
    return;

other:
    r = func_ov006_021b3688();
    if (r == 0x40) {
        data_ov006_021bc808[0xa90] = 0xb;
        return;
    }
    r = func_ov006_021b3688();
    if (r == 0xff) {
        data_ov006_021bc808[0xa90] = 0x1b;
        return;
    }
    r = func_ov006_021b3688();
    if (r == 0x50) {
        data_ov006_021bc808[0xa90] = 0x15;
        return;
    }
    r = func_ov006_021b3688();
    if (r == 0x60) {
        data_ov006_021bc808[0xa90] = 0x18;
        return;
    }
    r = func_ov006_021b3688();
    if (r == 0x70) {
        data_ov006_021bc808[0xa90] = 0x1b;
        return;
    }
    r = func_ov006_021b3688();
    if (r == 0) {
        data_ov006_021bc808[0xa90] = 8;
        return;
    }
    r = func_ov006_021b3688();
    if (r == 0xbd) {
        data_ov006_021bc808[0xa90] = 9;
        return;
    }
    data_ov006_021bc808[0xa90] = 0x1f;
}
