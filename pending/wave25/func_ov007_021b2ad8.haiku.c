#include "ffc/types.h"

extern uint32_t func_02073bb0(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint8_t *func_ov001_0218dde0(uint8_t *obj, uint32_t zero);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c60b8[2];

void func_ov007_021b2ad8(uint8_t *p)
{
    uint32_t r;
    uint8_t *q;
    uint32_t off;
    uint32_t w0;
    uint32_t w1;

    r = func_02073bb0(*(uint32_t *)(p + 0xb8), (uint32_t)(p + 0x10c), 0, *(uint32_t *)(p + 0xfc));
    q = func_ov001_0218dde0(p, 0);
    func_02056bc0(q, (void *)r);
    w0 = data_ov007_021c60b8[0];
    w1 = data_ov007_021c60b8[1];
    off = 0x3114;
    *(uint32_t *)(p + off) = w0;
    off = off + 4;
    *(uint32_t *)(p + off) = w1;
}
