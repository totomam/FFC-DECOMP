#include "ffc/types.h"

extern void func_02054910(void *p, uint32_t a, uint32_t b);
extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern void func_020695e4(void *p);
extern void func_02054990(void *p);
extern char data_ov007_021c36f8[];
extern char data_ov007_021c3718[];

void *func_ov007_0219f85c(void *p, uint32_t r1)
{
    uint8_t *b = (uint8_t *)p;
    int z = 0;

    func_02054910(p, 0, 0);
    func_020694ac(b + 0xc, 0, 0);
    *(void **)(b + 0) = data_ov007_021c36f8;
    *(void **)(b + 0xc) = data_ov007_021c3718;
    b[0x168] = z;
    b[0x169] = z;
    b[0x16a] = z;
    b[0x16b] = z;
    b[0x174] = 1;
    *(uint32_t *)(b + 0x178) = r1;
    b[0x17c] = z;
    func_020695e4(b + 0xc);
    *(uint32_t *)(b + 0x170) = 0xb4;
    func_02054990(p);
    return p;
}
