#include "ffc/types.h"

extern uint8_t data_ov000_0217004c;
extern void func_ov000_02159014(void);
extern uint32_t func_ov000_0215981c(void);
extern void func_ov000_021591a8(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov000_02159b50(void);

#define GP (*(uint8_t **)((uint8_t *)&data_ov000_0217004c + 0xc))

void func_ov000_0215988c(void *p)
{
    typedef void (*cb_t)(void *, uint8_t, uint32_t);
    uint8_t *g;
    uint32_t v;

    g = GP;
    if (g == 0 || p == 0) {
        return;
    }
    func_ov000_02159014();
    if (func_ov000_0215981c() != 0) {
        v = *(uint32_t *)(GP + 0x5c);
        if (v != 0) {
            func_ov000_021591a8(4, v, 0);
            *(uint32_t *)(GP + 0x5c) = 0;
        }
        g = GP;
        ((cb_t)(*(uint32_t *)(g + 0x2c)))(p, g[0x1d], *(uint32_t *)(g + 0x30));
    }
    func_ov000_02159b50();
}
