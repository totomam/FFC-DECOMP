#include "ffc/types.h"

extern uint8_t data_020ad80c[];
extern uint32_t func_02022fb4(uint32_t k);
extern void func_020849f4(uint32_t k, void *dst, uint32_t n);
extern void *func_020903cc(void *p, int c, uint32_t n);

void *func_020236e4(void *a)
{
    uint8_t *r5 = (uint8_t *)a;
    uint32_t n = 12;
    uint32_t r6;
    uint32_t *p;

    *(uint8_t **)r5 = data_020ad80c;
    *(uint32_t *)(r5 + 0x10) = 5;
    *(uint32_t *)(r5 + 0x14) = 0xf;
    *(uint32_t *)(r5 + 0x1c) = 0x1f;
    *(uint32_t *)(r5 + 0x20) = 3 << 12;
    *(uint16_t *)(r5 + 0x24) = 0x5ef7;
    *(uint16_t *)(r5 + 0x26) = 0x2108;
    *(uint8_t *)(r5 + 0x2c) = 0;
    *(uint8_t *)(r5 + 0x2d) = 0;
    *(uint8_t *)(r5 + 0x34) = 0;
    *(uint32_t *)(r5 + 0xe0) = 0;
    *(uint32_t *)(r5 + 0xe4) = 0;
    *(uint32_t *)(r5 + 0xe8) = 0;
    *(uint32_t *)(r5 + 0xec) = 0;
    *(uint32_t *)(r5 + 0xf0) = 0;
    r6 = 0x190;

    *(uint32_t *)(r5 + 0xc) = 1;
    *(uint32_t *)(r5 + 0x18) = 0;
    *(uint16_t *)(r5 + 0x28) = 0x7fff;
    *(uint16_t *)(r5 + 0x2a) = 0;
    *(uint32_t *)(r5 + 0x30) = 0;
    *(uint32_t *)(r5 + r6) = 0;
    p = (uint32_t *)(r5 + (r6 + 4));
    *(uint32_t *)(r5 + (r6 + 4)) = 0;
    p[1] = 0;
    p[2] = (uint32_t)(p + 1);
    *(uint32_t *)(r5 + 0x2d4) = 0;
    *(uint32_t *)(r5 + 0x2d8) = 0;
    *(uint32_t *)(r5 + 0x2dc) = 0;
    *(uint32_t *)(r5 + 0x2e0) = 0;
    *(uint32_t *)(r5 + 0x5c) = 1 << 12;
    *(uint32_t *)(r5 + 0x58) = 1 << 12;
    *(uint32_t *)(r5 + 0x54) = 1 << 12;
    *(uint32_t *)(r5 + 0x38) = 1 << 12;
    *(uint32_t *)(r5 + 0x44) = 0;
    *(uint32_t *)(r5 + 0x40) = 0;
    *(uint32_t *)(r5 + 0x3c) = 0;
    *(uint32_t *)(r5 + 0x50) = 0;
    *(uint32_t *)(r5 + 0x4c) = 0;
    *(uint32_t *)(r5 + 0x48) = 0;
    *(uint32_t *)(r5 + r6 - 0x10) = 0;
    *(uint32_t *)(r5 + r6 - 0xc) = 1;
    *(uint16_t *)(r5 + r6 - 8) = 0x7fff;
    *(uint32_t *)(r5 + r6 - 4) = 0;
    *(uint8_t *)(r5 + 0xdc) = 0;
    *(uint32_t *)(r5 + 0xd0) = 0;
    *(uint8_t *)(r5 + r6 + 0x42) = 0;
    *(uint32_t *)(r5 + r6 + 0x10) = 0;
    *(uint32_t *)(r5 + r6 + 0x14) = 0;
    *(uint32_t *)(r5 + r6 + 0x1c) = 0;
    *(uint32_t *)(r5 + 8) = 0;
    uint32_t k = r6 - 0x18;
    *(uint32_t *)(r5 + k) = 0;
    uint32_t q = func_02022fb4(k);
    func_020849f4(q, r5 + (r6 + 0x30), n);
    *(uint8_t *)(r5 + r6 + 0x40) = 0;
    func_020903cc(r5 + (r6 + 0x43), 0, n + 0xf4);
    return a;
}
