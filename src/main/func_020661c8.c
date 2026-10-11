#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern uint32_t data_020b18b4[];
extern uint32_t data_0213df20[];
extern void func_02065f50(uint32_t *p, S s);
extern void func_02066238(uint32_t *p, uint32_t c, uint32_t y);

uint32_t *func_020661c8(uint32_t *p, S s, uint32_t c, uint32_t x, uint32_t y)
{
    func_02065f50(p, s);
    p[0] = (uint32_t)data_020b18b4;
    p[7] = data_0213df20[0];
    p[15] = x;
    func_02066238(p, c, y);
    return p;
}
