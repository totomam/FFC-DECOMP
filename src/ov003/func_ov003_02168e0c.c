#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern char data_ov003_0217ae9c[];

void *func_ov003_02168e0c(void *p, uint32_t a, uint32_t b, uint32_t *c, uint32_t n, uint32_t f)
{
    uint32_t i;
    uint8_t *base = (uint8_t *)p;

    func_02056c9c(p, 0);
    *(void **)base = data_ov003_0217ae9c;
    *(uint32_t *)(base + 0x80) = a;
    *(uint32_t *)(base + 0x84) = b;
    *(uint32_t *)(base + 0x98) = f;
    for (i = 0; i < n; i++) {
        *(uint32_t *)(base + 0x88 + i * 4) = c[i];
    }
    return p;
}
