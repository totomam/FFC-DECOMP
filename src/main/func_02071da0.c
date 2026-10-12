#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0xc];
    uint32_t f0c;
    uint32_t f10;
    uint32_t *f14;
    uint32_t f18;
    uint32_t f1c;
} S;

extern void func_02054174(S *p);
extern uint32_t func_02056830(uint32_t size);
extern uint32_t func_ov006_021a60cc(uint32_t a, uint32_t b, uint32_t c);
extern void func_02056858(uint32_t h);
extern uint32_t func_02054184(void);

void func_02071da0(S *p)
{
    uint32_t h;
    uint32_t r;
    uint32_t *q;

    func_02054174(p);
    h = func_02056830(0x40020);
    r = func_ov006_021a60cc((h + 0x1f) & ~0x1f, p->f18, p->f1c);
    q = p->f14;
    if (q != 0) {
        *q = r;
    }
    func_02056858(h);
    func_02054184();
    p->f0c = (p->f0c & ~0xff) | 2;
}
