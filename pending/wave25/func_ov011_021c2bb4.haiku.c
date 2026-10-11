#include "ffc/types.h"

extern void func_ov011_021c00d8(void *a, void *b, uint32_t c, uint32_t d);
extern void func_ov011_021c012c(void *a, uint32_t b, uint32_t c);
extern uint32_t func_02036418(uint32_t a);
extern void func_0201f304(void *a, uint32_t b, uint32_t c);
extern void *data_020b93b8;

void func_ov011_021c2bb4(void *r0, uint32_t r1)
{
    uint32_t r;

    func_ov011_021c00d8(r0, (uint8_t *)r0 + 0x2cc, r1, 0);
    func_ov011_021c012c(r0, r1, 0);
    r = func_02036418(r1);
    func_0201f304(data_020b93b8, r, r1);
}
