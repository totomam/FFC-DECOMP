#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern void func_ov003_0214f604(void *p, uint32_t x);
extern uint32_t func_ov003_0214f7ec(void);
extern void func_ov003_0214f69c(void *p, uint32_t x);
extern uint8_t data_ov003_02179ab8[];

void *func_ov003_0214f4e8(void *p)
{
    uint32_t i;
    uint32_t *w = (uint32_t *)p;

    func_02056c9c(p, 0);
    w[0] = (uint32_t)data_ov003_02179ab8;
    w[0x94 / 4] = 0;
    for (i = 0; i < 5; i++) {
        w[0x80 / 4 + i] = 0;
    }
    func_ov003_0214f604(p, 3);
    {
        uint32_t v = func_ov003_0214f7ec();
        w[0x94 / 4] = v;
    }
    func_ov003_0214f69c(p, 4);
    func_ov003_0214f604(p, 0);
    func_ov003_0214f604(p, 1);
    func_ov003_0214f604(p, 2);
    return p;
}
