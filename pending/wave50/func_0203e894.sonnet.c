#include "ffc/types.h"
typedef struct { uint8_t a; uint32_t b, c, d; uint8_t e; } S;
typedef struct { uint32_t b, c; } P;
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int zero);
extern uint8_t data_020aeea0[];
void *func_0203e894(uint32_t a, P q, uint32_t d, S s)
{
    S *ps = &s;
    P *pq = &q;
    uint8_t *p = (uint8_t *)func_0205681c(0xa8);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(void **)p = data_020aeea0;
        *(uint32_t *)(p + 0x84) = a;
        *(uint32_t *)(p + 0x88) = pq->b;
        *(uint32_t *)(p + 0x8c) = pq->c;
        *(uint32_t *)(p + 0x90) = d;
        *(uint8_t *)(p + 0x94) = ps->a;
        *(uint32_t *)(p + 0x98) = ps->b;
        *(uint32_t *)(p + 0x9c) = ps->c;
        *(uint32_t *)(p + 0xa0) = ps->d;
        *(uint8_t *)(p + 0xa4) = ps->e;
    }
    return p;
}
