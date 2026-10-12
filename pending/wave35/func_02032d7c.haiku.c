#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t next;
    uint32_t val;
} Q;

extern void func_02056c9c(void *p);
extern void func_02032dd0(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint8_t data_020ae0b0[];

void *func_02032d7c(void *p, uint32_t x, S s, Q *q, uint32_t d, uint32_t e)
{
    uint32_t c;
    uint32_t i;
    uint32_t *base;

    func_02056c9c(p);
    *(uint8_t **)p = data_020ae0b0;
    base = (uint32_t *)((uint8_t *)p + 0x90);
    for (i = 0; i < 3; i++) {
        base[i] = i;
    }
    if (q->flag == 0) {
        c = (uint32_t)q + 1;
    } else {
        c = q->val;
    }
    func_02032dd0(p, s.a, s.b, c, d, e);
    return p;
}
