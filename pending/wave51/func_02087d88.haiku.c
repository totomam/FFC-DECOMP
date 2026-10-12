#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern uint32_t data_02141790[];

typedef struct Ent {
    int32_t prev;
    int32_t id;
    int32_t id2;
} Ent;

typedef struct Obj {
    int32_t f0;
    int32_t count;
    uint32_t end;
    uint32_t mem;
    uint32_t arr;
} Obj;

uint32_t func_02087d88(uint32_t idx, Obj *p, uint32_t x, int32_t count)
{
    uint32_t sz;
    int32_t i;
    uint32_t t;

    t = func_02088978();
    data_02141790[idx] = (uint32_t)p;
    sz = count * 12;
    p->arr = (uint32_t)p + 0x14;
    p->count = count;
    for (i = 0; i < p->count; i++) {
        Ent *e = (Ent *)(p->arr + i * 12);
        e->prev = -1;
        e->id2 = 0;
        e->id = 0;
    }
    p->f0 = -1;
    p->end = (p->arr + sz + 31) & ~31u;
    x = x & ~31u;
    p->mem = x;
    func_0208898c(t);
    return p->end;
}
