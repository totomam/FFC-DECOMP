#include "ffc/types.h"

extern uint32_t data_ov000_0216e294[];
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern uint32_t func_ov000_021557d0(uint32_t x);
extern void func_ov000_02155600(void);

typedef struct { uint32_t w[18]; } Big;
typedef struct { uint32_t w0; uint32_t w1; } Pair;

uint32_t func_ov000_02155558(uint8_t *a, uint32_t b)
{
    uint32_t *g = data_ov000_0216e294;
    uint32_t i;
    uint32_t (*alloc)(uint32_t, uint32_t);

    alloc = *(uint32_t (**)(uint32_t, uint32_t))(a + 0x40);
    if (g[1] != 0) {
        return 2;
    }
    g[1] = alloc(0, 0x13f4);
    if (g[1] == 0) {
        return 2;
    }
    func_02084b2c((void *)g[1], 0, 0x13f4);
    *(uint32_t *)((uint8_t *)g[1] + 0x1314) = b;
    g[2] = 0;
    func_02084b2c((uint8_t *)g[1] + 0x1008, 0, 0x71 << 2);
    *(uint32_t *)((uint8_t *)g[1] + 0x1008) = 0x4e84;

    {
        uint8_t *p = (uint8_t *)g[1];
        *(Big *)(p + 0x11cc) = *(Big *)a;
        *(uint16_t *)(p + 0x11fe) = 0;
    }
    g = data_ov000_0216e294;
    *(uint8_t *)((uint8_t *)g[1] + 0x120b) = 0;
    i = func_ov000_021557d0(1);
    *(uint32_t *)((uint8_t *)g[1] + 0x1004) = i;
    i = *(volatile uint32_t *)((uint8_t *)((volatile uint32_t *)g)[1] + 0x1004);
    if (i == 0) {
        g[0] = 0;
        func_ov000_02155600();
        return 0;
    }
    return i;
}
