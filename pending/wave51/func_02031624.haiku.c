#include "ffc/types.h"

extern uint8_t data_020adfb4[];
extern void func_02069434(void *p, uint32_t x);
extern void func_0200acb8(void *c, void *begin, void *end, uint8_t v);
extern void func_02069700(void *p, uint32_t a, uint32_t b);

void *func_02031624(uint8_t *p, uint32_t a, ...)
{
    uint32_t *ap = &a;
    uint32_t b = ap[1];
    uint32_t c = ap[2];
    uint32_t *src = (uint32_t *)ap[3];
    uint32_t d = ap[4];
    uint32_t e = ap[5];
    uint8_t fill;

    func_02069434(p, 0);
    *(uint8_t **)p = data_020adfb4;
    *(uint32_t *)(p + 0xc4) = 0;
    *(uint32_t *)(p + 0xc8) = 0;
    *(uint32_t *)(p + 0xcc) = 0;
    *(uint32_t *)(p + 0xdc) = a;
    *(uint32_t *)(p + 0xe0) = b;
    *(uint32_t *)(p + 0xe4) = c;
    *(uint32_t *)(p + 0xe8) = 0;
    *(uint32_t *)(p + 0xec) = 0;
    *(uint32_t *)(p + 0xf0) = 0;
    *(uint32_t *)(p + 0xf4) = d;
    *(uint32_t *)(p + 0x10c) = 0;
    *(uint32_t *)(p + 0x110) = e;

    if (src != 0 && src != (uint32_t *)(p + 0xe8)) {
        fill = 0;
        func_0200acb8(p + 0xe8, (void *)src[0], (uint8_t *)src[0] + (src[1] << 4), fill);
    }
    func_02069700(p, 0, 1);
    return p;
}
