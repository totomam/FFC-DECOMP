#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t f:1; uint32_t r:31; uint32_t x; uint32_t y; } Hdr;
extern void func_02056c9c(void *self, int x);
extern void func_02032dd0(void *self, Pair s, void *p, uint32_t d, uint32_t e);
extern uint32_t data_020ae0b0[];
static inline void put(uint32_t *q, uint32_t idx, uint32_t v) { q[idx] = v; }
void *func_02032d24(void *self, Pair s, Hdr *p, uint32_t d, uint32_t e)
{
    func_02056c9c(self, 0);
    *(uint32_t **)self = data_020ae0b0;
    { uint32_t i,j; uint32_t *q=(uint32_t*)((uint8_t*)self+0x90); i=0; do { j=i; i++; q[j]=0; } while(i<3); }
    func_02032dd0(self, s, (p->f == 0) ? (void *)((uint8_t *)p + 1) : (void *)p->y, d, e);
    return self;
}
