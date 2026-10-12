#include "ffc/types.h"

extern void func_ov006_021b2140(void);
extern void func_ov006_021b20f0(uint32_t);
extern uint32_t func_ov006_021b2744(uint16_t);

struct Obj {
    uint16_t pad0;
    uint16_t flag;
    uint32_t pad4;
    uint16_t x;
    uint16_t y;
};

struct Glob {
    void (*fn)(uint32_t, const void *, uint32_t, uint32_t);
    uint8_t *base;
};

extern struct Glob data_ov006_021bc800;
extern uint8_t data_ov006_021b9f2c[];

void func_ov006_021b27b4(struct Obj *p)
{
    uint16_t x;
    if (p->flag != 0) {
        func_ov006_021b2140();
        func_ov006_021b20f0(9);
        return;
    }
    if (data_ov006_021bc800.fn != 0) {
        data_ov006_021bc800.fn(2u << 26, data_ov006_021b9f2c, p->x, p->y);
    }
    x = p->x;
    {
        uint8_t *base = data_ov006_021bc800.base;
        if (*(uint16_t *)(base + 0x5e) > p->y) {
            *(uint16_t *)(base + 0x5e) = p->y;
            *(uint16_t *)(data_ov006_021bc800.base + 0x60) = (uint16_t)(1u << (x - 1));
        } else if (*(uint16_t *)(base + 0x5e) == p->y) {
            uint16_t bit = (uint16_t)(1u << (x - 1));
            *(uint16_t *)(base + 0x60) = *(uint16_t *)(base + 0x60) | bit;
        }
    }
    {
        uint32_t r = func_ov006_021b2744((uint16_t)(x + 1));
        if (r == 0x18) {
            func_ov006_021b20f0(7);
            return;
        }
        if (r != 2) {
            func_ov006_021b20f0(9);
        }
    }
}
