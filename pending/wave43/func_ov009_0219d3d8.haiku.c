#include "ffc/types.h"

extern uint8_t data_020ae644[];
extern uint8_t data_020ae654[];
extern void func_02035fd0(void *object);

typedef struct { uint16_t v[17]; } Arr;

typedef struct {
    uint32_t f00, f04, f08, f0c, f10, f14, f18, f1c, f20;
    uint8_t *vt;
    uint32_t f28, f2c;
    Arr arr;
    uint32_t f54, f58, f5c;
} Frame;

typedef void (*MemFn)(void *self, void *frame, uint8_t b);

void func_ov009_0219d3d8(uint8_t *a)
{
    Frame f;
    uint32_t adj, ptr, fn;
    uint8_t *base;
    uint32_t k;

    f.f00 = *(uint32_t *)(a + 0x90);
    k = (uint32_t)data_020ae644;
    f.f04 = k;
    f.f08 = *(uint32_t *)(a + 0x98);
    f.f0c = k;
    f.f10 = *(uint32_t *)(a + 0xa0);
    f.f14 = k;
    f.f18 = *(uint32_t *)(a + 0xa8);
    f.f1c = k;
    f.f20 = *(uint32_t *)(a + 0xb0);
    f.vt = data_020ae654;
    f.f28 = *(uint32_t *)(a + 0xb8);
    f.f2c = *(uint32_t *)(a + 0xbc);
    f.arr = *(Arr *)(a + 0xc0);
    f.f54 = *(uint32_t *)(a + 0xe4);
    f.f58 = *(uint32_t *)(a + 0xe8);
    f.f5c = *(uint32_t *)(a + 0xec);

    base = *(uint8_t **)(a + 0x84);
    adj = *(uint32_t *)(a + 0x8c);
    ptr = *(uint32_t *)(a + 0x88);
    if (adj & 1) {
        uint8_t *vt = *(uint8_t **)(base + (adj >> 1));
        fn = *(uint32_t *)(vt + ptr);
    } else {
        fn = ptr;
    }
    ((MemFn)fn)(base + (adj >> 1), &f, *(a + 0xf0));

    func_02035fd0(&f);

    *(uint32_t *)(a + 0xc) = (*(uint32_t *)(a + 0xc) & ~0xffu) | 2u;
}
