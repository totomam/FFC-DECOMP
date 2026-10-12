#include "ffc/types.h"

extern void func_020849f4(void *a, void *b, uint32_t c);
extern uint8_t data_ov000_0216b100[];
extern uint8_t *func_ov000_02163350(void);

void func_ov000_0215ec64(uint8_t *p, uint32_t val, void *src, uint32_t n)
{
    uint8_t *tbl;
    uint8_t *base;

    if (src && n) {
        func_020849f4(src, p + 0x14, n * 4);
    } else {
        n = 0;
    }

    tbl = data_ov000_0216b100;
    p[0] = tbl[0];
    p[1] = tbl[1];
    p[2] = tbl[2];
    p[3] = tbl[3];
    p[4] = tbl[4];
    *(uint32_t *)(p + 4) = 0x5a;
    p[8] = val;
    p[9] = n << 2;

    base = func_ov000_02163350();
    *(uint16_t *)(p + 0xa) = *(uint16_t *)(base + 0x5d4);
    base = func_ov000_02163350();
    *(uint32_t *)(p + 0xc) = *(uint32_t *)(base + 0x5d8);
    base = func_ov000_02163350();
    *(uint32_t *)(p + 0x10) = *(uint32_t *)(base + 0x678);
}
