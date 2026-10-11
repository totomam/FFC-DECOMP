#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

typedef struct {
    uint8_t pad0[0xc];
    uint32_t f0c;
    uint8_t pad1[0x4];
    uint32_t f14;
    S s18;
    uint16_t f20;
    uint16_t f22;
    uint16_t f24;
    uint16_t f26;
    uint8_t f28;
} Obj;

extern uint32_t func_020424e0(uint32_t);
extern void func_ov003_02164190(uint32_t, uint16_t, uint16_t, S, uint16_t, uint16_t, uint8_t);

uint32_t func_ov003_0216414c(Obj *a)
{
    S s;
    uint32_t v = func_020424e0(a->f14);
    s = a->s18;
    func_ov003_02164190(v, a->f20, a->f22, s, a->f24, a->f26, a->f28);
    a->f0c = (a->f0c & ~0xffu) | 2;
    return a->f0c;
}
