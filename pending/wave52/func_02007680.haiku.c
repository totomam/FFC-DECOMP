#include "ffc/types.h"

extern void func_02006060(void *p);
extern void func_02005fd8(void *p);
extern void func_0200608c(void *dst, void *src, uint32_t n);
extern void func_02006154(void *p, int32_t v);
extern void func_0200604c(void *p);

uint8_t *func_02007680(uint8_t *p)
{
    uint8_t *q;
    int32_t i;

    func_02006060(p + 4);
    func_02006060(p + 0x18);

    q = p + 0x28;
    do {
        func_02005fd8(q);
        q += 0x18;
    } while (q < p + 0x1a8);

    i = 0;
    *(uint8_t *)p = 0;
    *(uint16_t *)(p + 2) = 0;
    func_0200608c(p + 4, p + 2, 0x10);
    *(uint16_t *)(p + 0x14) = 0;
    func_0200608c(p + 0x18, p + 0x14, 0x10);
    func_02006154(p + 0x18, 0);

    for (i = 0; i < 0x10; i++) {
        func_0200604c(p + 0x28 + i * 0x18);
    }

    return p;
}
