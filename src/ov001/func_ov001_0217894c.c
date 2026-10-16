#include "ffc/types.h"
extern uint32_t *func_ov000_021653d4(int n);
extern void func_ov001_0217ef6c(void *p, void *s);
extern uint8_t data_ov001_021906a4[];
typedef struct { uint32_t a, b; } P;
int func_ov001_0217894c(uint8_t *self, P pr, uint32_t c, uint8_t *d, uint32_t e)
{
    uint8_t *g = *(uint8_t **)self;
    uint32_t *n = func_ov000_021653d4(0x18);
    if (n == 0) {
        func_ov001_0217ef6c(self, data_ov001_021906a4);
        return 1;
    }
    *(P*)n = pr;
    n[2] = c;
    n[4] = d ? *(uint32_t *)(d + 0x18) : 0;
    n[3] = e;
    n[5] = 0;
    if (*(uint32_t *)(g + 0x5dc) == 0) *(uint32_t *)(g + 0x5dc) = (uint32_t)n;
    if (*(uint32_t *)(g + 0x5e0) != 0) *(uint32_t *)(*(uint32_t *)(g + 0x5e0) + 0x14) = (uint32_t)n;
    *(uint32_t *)(g + 0x5e0) = (uint32_t)n;
    return 0;
}
