#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(uint32_t a, uint32_t b);
extern uint64_t func_020882cc(void);
extern void func_ov000_0214f600(uint8_t *a, uint8_t *b, uint32_t c);
extern uint32_t func_ov000_0214fa18(void);
extern uint8_t data_ov000_02169604[];
extern uint8_t data_ov000_0216960c[];
extern uint32_t data_ov000_02169658[];

void func_ov000_02153e18(uint32_t mode, uint32_t b)
{
    uint32_t k = 0x10;
    uint8_t *base = func_ov000_02152ae4(k, b);

    switch (mode) {
    case 3: {
        uint64_t t = func_020882cc();
        *(uint32_t *)(base + 0x1460) = (uint32_t)t;
        *(uint32_t *)(base + 0x1464) = (uint32_t)(t >> 32);
        int8_t idx = *(int8_t *)(base + 0x14c1);
        uint32_t v = data_ov000_02169658[idx] | (k << 17);
        func_ov000_0214f600(data_ov000_02169604, data_ov000_0216960c, v);
        return;
    }
    case 4: {
        uint32_t flag = 1;
        uint16_t v = *(uint16_t *)(base + base[0x14bf] * 0xc0 + 0xc56);
        uint16_t mask = (uint16_t)(1u << (v - 1));
        if ((func_ov000_0214fa18() & mask) == 0) {
            flag = 0;
        }
        if (flag == 1) {
            uint64_t t = func_020882cc();
            *(uint32_t *)(base + 0x1460) = (uint32_t)t;
            *(uint32_t *)(base + 0x1464) = (uint32_t)(t >> 32);
            uint32_t idx = base[0x14bf];
            uint16_t vv = *(uint16_t *)(base + idx * 0xc0 + 0xc56);
            func_ov000_0214f600(base + 0xc24 + idx * 0xc0, base + 0xc2c + idx * 0xc0,
                                (uint16_t)((0xc0u << 14) | (vv - 1)));
            return;
        }
        {
            uint8_t *p = base + 0xbf7;
            uint32_t off = base[0x14bf] << 2;
            p[off] = p[off] | 0x80;
        }
        return;
    }
    case 5: {
        uint64_t t = func_020882cc();
        *(uint32_t *)(base + 0x1460) = (uint32_t)t;
        *(uint32_t *)(base + 0x1464) = (uint32_t)(t >> 32);
        uint8_t idx5 = base[0x14bf];
        int8_t sidx = *(int8_t *)(base + 0x14c1);
        uint32_t v = data_ov000_02169658[sidx] | (3u << 20);
        func_ov000_0214f600(data_ov000_02169604, base + 0x904 + idx5 * 0x24, v);
        return;
    }
    }
}
