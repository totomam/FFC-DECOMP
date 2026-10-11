#include "ffc/types.h"

extern uint32_t data_020b18b4[];
extern uint32_t data_0213df20[];
extern void func_02065f50(uint32_t *p, uint32_t a, uint32_t b);
extern void func_02066238(uint32_t *p, uint32_t c, uint32_t y);

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

uint32_t *func_020661c8(uint32_t *p, S s, uint32_t c, uint32_t x, uint32_t y)
{
    uint32_t *q = &s.a;
    uint32_t a = *q++;
    uint32_t b = *q;
    func_02065f50(p, a, b);
    p[0] = (uint32_t)data_020b18b4;
    p[7] = data_0213df20[0];
    p[15] = x;
    func_02066238(p, c, y);
    return p;
}
