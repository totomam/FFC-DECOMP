#include "ffc/types.h"

extern uint32_t func_ov000_0215b188(uint32_t a, uint32_t b, void *c, void *d, void *e, void *f, uint32_t g, uint32_t h, uint32_t i);
extern void func_02072c74(void);
extern void func_02072c00(void);

void func_02072ae0(uint8_t *p)
{
    uint32_t r;
    r = func_ov000_0215b188(2, (uint8_t)*(uint32_t *)(p + 0x84), (void *)func_02072c00, p,
                            (void *)func_02072c74, p, 0, 0, 0);
    *(uint32_t *)(p + 0x9c) = r;
    *(uint8_t *)(*(uint8_t **)(p + 0x80) + 0x23) = 0;
}
