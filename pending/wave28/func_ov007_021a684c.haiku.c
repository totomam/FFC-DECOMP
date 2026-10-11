#include "ffc/types.h"

extern void func_02056bf4(void *a, uint32_t b);
extern void func_02019d4c(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_020b8e44;

void func_ov007_021a684c(uint8_t *p)
{
    uint32_t v4 = *(uint32_t *)(p + 0x8c);
    uint8_t *q = p + 0x48;
    func_02056bf4(q, *(uint32_t *)(p + 0x88));
    func_02056bf4(q, v4);
    func_02019d4c(data_020b8e44, *(uint32_t *)(p + 0x88), *(uint32_t *)(p + 0x8c));
    **(uint32_t **)(p + 0x90) = 1;
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
