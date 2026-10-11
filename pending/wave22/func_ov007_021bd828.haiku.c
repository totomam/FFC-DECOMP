#include "ffc/types.h"

extern void *func_ov007_021bc310(void *p, uint32_t r1, uint32_t r2, uint32_t r3, uint32_t r4);
extern char data_ov007_021c800c[];

void *func_ov007_021bd828(void *p, uint32_t r1, uint32_t a, uint8_t b, uint32_t c)
{
    uint8_t *base = (uint8_t *)p;
    uint8_t one;
    func_ov007_021bc310(p, r1, c, 0, 0);
    one = 1;
    *(uint32_t *)p = (uint32_t)data_ov007_021c800c;
    *(uint32_t *)(base + 0x1d4) = a;
    *(uint8_t *)(base + 0x1d8) = b;
    *(uint8_t *)(base + 0x1b5) = one;
    return p;
}
