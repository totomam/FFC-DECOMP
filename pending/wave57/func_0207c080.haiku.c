#include "ffc/types.h"

extern uint32_t *func_0207a918(uint32_t v);
extern void func_0207c708(uint8_t *a, uint32_t v);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern uint32_t func_0209a6d4(uint64_t first, uint64_t second);

typedef struct {
    uint32_t cc;
    uint32_t p4;
    uint32_t p8;
    uint32_t p12;
    uint32_t p16;
} Locals;

void func_0207c080(uint8_t *a)
{
    Locals L;
    uint32_t *r7;
    uint8_t r6;
    uint64_t r;
    uint32_t res;

    L.p12 = *(uint32_t *)(a + 0x150);
    L.p16 = *(uint32_t *)(a + 0x14c);
    L.p4 = L.p16;
    L.p8 = 0;

    if (((int (*)(uint32_t, uint32_t *, uint32_t *, uint32_t))(*(uint32_t *)(a + 0x144)))(
            L.p16, &L.p12, &L.p4, *(uint32_t *)(a + 0x148)) == 0) {
        return;
    }
    r7 = func_0207a918(L.p4);
    if (r7 == 0) {
        return;
    }
    r6 = a[0xc8];
    L.cc = *(uint16_t *)(a + 0xcc);
    ((void (*)(uint8_t *))(*(uint32_t *)(a + 0x170)))(a);
    func_0207c708(a, *r7);
    if (((int (*)(uint8_t *, uint32_t))(*(uint32_t *)(a + 0x16c)))(a, *r7) == 0) {
        return;
    }
    if (L.cc != *(uint16_t *)(a + 0xcc)) {
        return;
    }
    if (r6 == 0) {
        if (a[0xc8] != 0) {
            return;
        }
    } else {
        if (a[0xc8] == 0) {
            return;
        }
    }
    *(uint32_t *)(a + 0x14c) = L.p4;
    r = func_0209a71c((uint64_t)L.cc, (uint64_t)L.p8);
    res = func_0209a6d4(r, 1000);
    *(uint32_t *)(a + 0x168) = res;
    if (res != 0 && a[0xc8] == 2) {
        *(uint32_t *)(a + 0x118) = *(uint32_t *)(a + 0x118) | 0x10;
    } else {
        *(uint32_t *)(a + 0x118) &= ~0x10u;
    }
    *(uint32_t *)(a + 0x118) &= ~0x20u;
}
