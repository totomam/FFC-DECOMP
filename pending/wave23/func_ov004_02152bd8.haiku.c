#include "ffc/types.h"

extern void func_02057620(void *p);
extern void func_02054910(void *p, uint32_t a, uint32_t b);
extern char data_ov004_02159bac[];
extern char data_ov004_02159bc4[];
extern char data_ov004_02159bd8[];

void *func_ov004_02152bd8(void *a, uint32_t b)
{
    uint8_t *base = (uint8_t *)a;
    uint32_t *p;
    uint32_t r1;

    func_02057620(a);
    func_02054910(base + 0x2c, 0, 1);
    p = (uint32_t *)(base + 0x38);
    r1 = p[3];
    r1 &= ~0xffu;
    p[3] = r1;
    *(void **)(base + 0x00) = data_ov004_02159bac;
    *(uint32_t *)(base + 0x4c) = b;
    *(void **)(base + 0x2c) = data_ov004_02159bc4;
    *(void **)(base + 0x38) = data_ov004_02159bd8;
    return a;
}
