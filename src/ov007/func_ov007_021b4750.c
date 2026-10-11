#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c6788[];

void *func_ov007_021b4750(void *self, uint8_t *src, uint32_t flag)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *r4 = src;

    func_020694ac(self, 0, 0);
    *(uint8_t **)p = data_ov007_021c6788;
    *(uint8_t **)(p + 0xe4) = src;
    *(uint32_t *)(p + 0xe8) = flag;
    *(uint32_t *)(p + 0xf0) = 8;
    if (flag == 0) {
        r4 += 0x90;
    } else {
        r4 += 0x94;
    }
    *(uint8_t *)(p + 0xec) = (uint8_t)*(uint32_t *)r4;
    return self;
}
