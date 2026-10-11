#include "ffc/types.h"

extern void *func_ov007_0219b904(void *obj, uint32_t x, uint32_t y);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c2c0c[];

void func_ov007_0219b8d4(uint8_t *a)
{
    uint8_t *p = a + 0x14;
    uint8_t v = p[0x12];
    v = (uint8_t)((v & ~0xff) | 1);
    p[0x12] = v;
    {
        void *r = func_ov007_0219b904(a, data_ov007_021c2c0c[0], data_ov007_021c2c0c[1]);
        func_02056bc0(a + 0x14, r);
    }
}
