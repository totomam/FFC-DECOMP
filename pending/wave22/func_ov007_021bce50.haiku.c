#include "ffc/types.h"

extern void func_020742e0(void *a, void *b, uint32_t *c, int d, void *e, int f, void *g, uint32_t h);
extern uint32_t data_ov007_021c1654[];
extern void func_ov007_021bc678(void);
extern uint32_t data_ov007_021c81cc[];

void func_ov007_021bce50(uint8_t *p)
{
    uint32_t a = *(uint32_t *)(p + 0x1d4);
    uint32_t b = *(uint32_t *)(p + 0x1d8);
    func_020742e0(*(void **)(p + 0xb0), data_ov007_021c81cc, &a, 1, data_ov007_021c1654, 0x5a, func_ov007_021bc678, b);
}
