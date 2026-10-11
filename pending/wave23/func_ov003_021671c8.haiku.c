#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x14];
    uint32_t f14;
    uint32_t f18;
    uint8_t f1c;
    uint8_t f1d;
    uint8_t pad1e[2];
    uint32_t f20;
    uint8_t f24;
    uint8_t f25;
    uint8_t pad26[2];
    uint32_t f28;
} S;

extern uint32_t func_020424e0(uint32_t);
extern void func_ov003_0214b7a0(uint32_t a, uint32_t b, uint8_t c, uint8_t d,
                                uint32_t e, uint32_t f, uint32_t g, uint32_t h);

void func_ov003_021671c8(S *p)
{
    func_ov003_0214b7a0(func_020424e0(p->f14), p->f18, p->f1c, p->f1d,
                        p->f20, p->f24, p->f25, p->f28);
}
