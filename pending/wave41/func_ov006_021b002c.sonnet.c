#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e4;
extern const uint8_t data_ov006_021b8960[];
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_ov000_021587bc(uint8_t value, uint8_t *dst);

void func_ov006_021b002c(uint8_t idx)
{
    uint8_t *base = data_ov006_021bc7e4;
    uint32_t off = idx << 8;
    uint16_t *src = (uint16_t *)(base + off);
    uint16_t *dst = (uint16_t *)(base + 0x400);
    uint32_t n = 0x78;

    do {
        *dst = *src;
        dst++; src++;
    } while (--n != 0);

    base[0x4f4] = idx;
    if (func_02090410(base + off + 0xc0, data_ov006_021b8960, 4) == 0) {
        base[0x4f5] = 1;
    } else {
        base[0x4f5] = 0;
    }

    if (func_02090410(base + off + 0xc8, data_ov006_021b8960, 4) != 0) {
        base[0x4f6] = 0;
    } else if (func_02090410(base + off + 0xcc, data_ov006_021b8960, 4) == 0) {
        base[0x4f6] = 1;
    } else {
        base[0x4f6] = 0;
    }

    func_ov000_021587bc(base[off + 0xd0], base + 0x4f0);
}
