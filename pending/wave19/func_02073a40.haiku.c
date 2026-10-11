#include "ffc/types.h"

extern uint8_t data_020b2468;
extern void func_02084ca4(uint32_t a, uint32_t b, uint32_t c);
extern void func_02056858(uint32_t a);
extern void func_02056844(uint32_t *p);

uint32_t *func_02073a40(uint32_t *p)
{
    p[0] = (uint32_t)&data_020b2468;
    func_02084ca4(p[13], p[11], p[12]);
    func_02056858(p[13]);
    func_02056844(p);
    return p;
}
