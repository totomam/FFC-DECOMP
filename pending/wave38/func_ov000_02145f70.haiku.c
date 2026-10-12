#include "ffc/types.h"

extern uint32_t func_ov000_02145614();
extern uint32_t func_ov000_021456d4();
extern void func_ov000_02145e18();
extern uint32_t data_02141510[];
extern uint16_t data_ov000_0216bc60[];

void func_ov000_02145f70(int a, int b, uint8_t *c)
{
    uint8_t *p;
    uint16_t *q;
    uint16_t id;
    uint32_t t;
    int32_t r;

    *(uint16_t *)(*(uint8_t **)(c + 0x58) + 0x22) = 8;
    p = *(uint8_t **)(c + 0x58);
    p += 0x22;
    q = (uint16_t *)p;
    q[2] = (uint16_t)data_02141510[1];
    q[1] = 0;
    id = data_ov000_0216bc60[4];
    *(uint16_t *)(c + 0xa) = id;
    data_ov000_0216bc60[4] = id + 1;
    q[3] = id;
    t = func_ov000_02145614(q, 8, 0);
    t = func_ov000_02145614(a, b, t);
    r = func_ov000_021456d4((uint16_t)t);
    q[1] = (uint16_t)((r >> 8) | (r << 8));
    func_ov000_02145e18(q, 8, a, b, *(uint32_t *)(c + 0x1c), 1);
}
