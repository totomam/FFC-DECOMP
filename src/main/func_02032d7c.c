#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;
typedef struct { uint32_t x; S s; void *qq; uint32_t d, e; } T;

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t next;
    uint32_t val;
} Q;

extern void func_02056c9c(void *p);
extern void func_02032dd0(void *p, S s, uint32_t c, uint32_t d, uint32_t e);
extern uint8_t data_020ae0b0[];

static inline uint32_t get(Q **pq) { Q *q = *pq; if (q->flag == 0) return (uint32_t)q + 1; return q->val; }
void *func_02032d7c(void *p, T t)
{
    uint32_t c;
    Q *q;
    uint32_t *base;
    uint32_t i;

    func_02056c9c(p);
    *(uint8_t **)p = data_020ae0b0;
    base = (uint32_t *)((uint8_t *)p + 0x90);
    for (i = 0; i < 3; i++) {
        base[i] = 0;
    }
    c = get((Q **)&t.qq);
    func_02032dd0(p, t.s, c, t.d, t.e);
    return p;
}
