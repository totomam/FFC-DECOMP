#include "ffc/types.h"

extern void *func_02056830(uint32_t size);
extern uint32_t func_020424e0(uint32_t x);
extern void func_ov003_0214b3b8(uint32_t a, uint32_t b, uint8_t c, uint8_t d, uint8_t e, uint8_t f, void *g, uint32_t h, uint32_t i);
extern void func_02056858(void *p);

typedef struct {
    uint8_t pad0[0x14];
    uint32_t f14;
    uint32_t f18;
    uint8_t f1c;
    uint8_t f1d;
    uint8_t f1e;
    uint8_t f1f;
} S;

void func_ov003_02167150(S *p)
{
    void *buf = func_02056830(0x800);
    uint32_t r = func_020424e0(p->f14);
    func_ov003_0214b3b8(r, p->f18, p->f1c, p->f1d, p->f1e, p->f1f, buf, 0, 0);
    func_02056858(buf);
}
