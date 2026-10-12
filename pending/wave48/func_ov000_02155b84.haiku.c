#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint8_t *base;
    uint32_t val;
} Ctx;

extern Ctx data_ov000_0216e294;
extern uint32_t data_02144c00;
extern uint8_t data_ov000_02169ba0[];
extern uint8_t data_ov000_02169ba8[];
extern uint8_t data_ov000_02169bb4[];
extern uint8_t data_ov000_02169bc0[];
extern uint8_t data_ov000_02169bc8[];
extern uint8_t data_ov000_02169bd0[];
extern uint8_t data_ov000_02169bdc[];
extern uint8_t data_ov000_02169be8[];

extern uint32_t func_ov000_021570d4(uint32_t h, const void *p);
extern void func_ov000_02164af4(void);
extern uint32_t func_02093b18(void);
extern int32_t func_ov000_0215710c(uint32_t h, const void *fmt, uint8_t *dst, uint32_t n);
extern uint32_t func_020937a4(uint8_t *p, uint32_t *out, uint32_t n);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_ov000_02157140(uint32_t h, const void *fmt, uint8_t *dst, uint32_t n);

#define HND (*(uint32_t *)(data_ov000_0216e294.base + 0x1314))
#define W32(off, v) (*(uint32_t *)(data_ov000_0216e294.base + (off)) = (v))

uint32_t func_ov000_02155b84(void)
{
    uint32_t sp0;
    uint32_t st;
    int32_t r;
    int32_t r6;
    uint32_t o;
    uint32_t q;

    sp0 = 0;
    sp0 = func_ov000_021570d4(HND, data_ov000_02169ba0);
    if (sp0 != 0) {
        func_ov000_02164af4();
    }

    sp0 = 0;
    data_02144c00 = 0;
    func_ov000_021570d4(HND, data_ov000_02169ba8);
    st = func_02093b18();

    if (data_02144c00 == 0x22) {
        W32(0x1008, 0x4e85);
        return 12;
    }
    if (st != 0xc8) {
        W32(0x1008, st + 0x59d8);
        return 0x12;
    }

    o = 0x100c;
    r = func_ov000_0215710c(HND, data_ov000_02169bb4, data_ov000_0216e294.base + o, 4);
    if (r <= 0) {
        W32(o - 4, 0x4e85);
        return 14;
    }

    r6 = func_020937a4(data_ov000_0216e294.base + o, &sp0, 10);
    if (sp0 != (uint32_t)(data_ov000_0216e294.base + o) + func_02092864(data_ov000_0216e294.base + o)) {
        W32(o - 4, 0x4e85);
        return 12;
    }

    W32(o - 4, 0x4e20 + r6);
    if (r6 >= 100) {
        return 0;
    }

    data_ov000_0216e294.base[o + 0x46] = 0;
    data_ov000_0216e294.base[o + 0x13] = 0;
    q = 0x117f;
    data_ov000_0216e294.base[q] = 0;
    data_ov000_0216e294.base[o + 4] = 0;
    data_ov000_0216e294.base[q + 9] = 0;

    func_ov000_0215710c(HND, data_ov000_02169bc0, data_ov000_0216e294.base + o + 0x46, 0x12d);
    func_ov000_0215710c(HND, data_ov000_02169bc8, data_ov000_0216e294.base + o + 0x13, 0x33);
    func_ov000_0215710c(HND, data_ov000_02169bd0, data_ov000_0216e294.base + q, 9);
    func_ov000_0215710c(HND, data_ov000_02169bdc, data_ov000_0216e294.base + o + 4, 0xf);
    func_ov000_02157140(HND, data_ov000_02169be8, data_ov000_0216e294.base + q + 9, 0x41);

    data_ov000_0216e294.base[q + 0x34] = 0;

    if (r6 == 0x28) {
        data_ov000_0216e294.val = 2;
    } else {
        data_ov000_0216e294.val = 1;
    }
    return 0;
}
