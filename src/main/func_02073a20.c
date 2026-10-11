#include "ffc/types.h"

extern uint8_t data_020b2468[];
extern void func_02084ca4(uint32_t a, uint32_t b, uint32_t c);
extern void func_02056858(uint32_t a);

typedef struct {
    uint32_t vt;
    uint8_t pad[0x2c - 4];
    uint32_t a;
    uint32_t b;
    uint32_t c;
} S;

S *func_02073a20(S *p)
{
    p->vt = (uint32_t)data_020b2468;
    func_02084ca4(p->c, p->a, p->b);
    func_02056858(p->c);
    return p;
}
