#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern char data_ov007_021c37e0[];

void *func_ov007_021a17fc(void *p, uint32_t a, uint8_t b)
{
    uint8_t *q = (uint8_t *)p;
    func_02056c9c(p, 0);
    *(char **)p = data_ov007_021c37e0;
    *(uint32_t *)(q + 0x80) = a;
    *(uint8_t *)(q + 0x84) = b;
    return p;
}
