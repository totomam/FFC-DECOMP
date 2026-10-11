#include "ffc/types.h"

extern void func_ov011_021c00d8(void *a, void *b, uint32_t c, uint32_t d);
extern void func_ov011_021c012c(void *a, uint32_t b, uint32_t c);
extern void func_0201f3bc(void *a, uint32_t b, uint32_t c);
extern void *data_020b93b8;

void func_ov011_021c2bec(void *p, uint32_t x, uint32_t y)
{
    func_ov011_021c00d8(p, (uint8_t *)p + 0x2CC, x, y);
    func_ov011_021c012c(p, x, y);
    func_0201f3bc(data_020b93b8, y, x);
}
