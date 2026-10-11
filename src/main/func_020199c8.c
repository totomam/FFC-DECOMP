#include "ffc/types.h"

extern uint8_t *func_02019760(void *p);
extern void *func_020159c8(void *p, uint16_t v);
extern void func_02005988(void *a, void *b);

void func_020199c8(void *a, void *b, uint32_t idx)
{
    uint8_t *base = func_02019760(b);
    uint32_t *tbl = (uint32_t *)(base + *(uint32_t *)(base + 8));
    uint32_t e = tbl[idx];
    uint16_t v = *(uint16_t *)(base + e + 0x14);
    void *p = func_020159c8(b, v);
    func_02005988(a, p);
}
