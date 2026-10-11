#include "ffc/types.h"

extern void *data_0213df18;
extern uint32_t func_0204f7ec(const void *object);
extern void func_02056c9c(void *self, uint32_t x);
extern void func_02005988(void *p, uint32_t x);
extern uint8_t data_ov003_0217a5b0[];

void *func_ov003_02163bf4(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t r = func_0204f7ec(data_0213df18);
    func_02056c9c(p, r);
    *(void **)p = (void *)data_ov003_0217a5b0;
    func_02005988(p + 0x80, a);
    *(uint32_t *)(p + 0x8c) = b;
    *(uint32_t *)(p + 0x90) = c;
    *(uint32_t *)(p + 0x94) = d;
    *(uint32_t *)(p + 0x98) = e;
    return p;
}
