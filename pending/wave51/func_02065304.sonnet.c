#include "ffc/types.h"

extern uint32_t func_020639b8(void *a, uint32_t b, void *c);
extern uint32_t func_0205f234(void *a, uint32_t b);
extern uint32_t func_02058228(uint32_t a, uint32_t b, uint32_t c, int d);

uint32_t func_02065304(uint8_t *s, uint32_t idx, uint32_t p2)
{
    uint32_t off;
    uint8_t *base;
    uint8_t *b24;
    uint8_t *p2ptr;
    uint32_t ret;

    off = *(uint32_t *)(*(uint8_t **)(s + 0x60) + idx * 0x1c + 0xc) * 0x28;
    base = *(uint8_t **)(s + 0x7c);
    b24 = *(uint8_t **)(s + 0x24);
    if (base != 0) {
        p2ptr = *(uint8_t **)(base + 4) + idx * 0xc;
    } else {
        p2ptr = 0;
    }
    ret = func_020639b8(s + 0x18, p2, p2ptr);
    if (*(uint32_t *)(s + 0x38) & 1) {
        func_0205f234(b24 + off, (*(uint32_t **)(s + 0x6c))[idx]);
        return func_02058228((*(uint32_t **)(s + 0x6c))[idx], ret + 4, 0, -1);
    }
    return func_0205f234(b24 + off, (*(uint32_t **)(s + 0x6c))[p2]);
}
