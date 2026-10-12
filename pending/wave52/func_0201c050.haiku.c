#include "ffc/types.h"

extern void func_02018404(void *out, uint32_t data, uint32_t a, uint32_t b);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_0201bc64(void *obj, uint32_t v, uint32_t i, uint32_t j);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t f0;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Loc;

typedef struct {
    uint32_t pad;
    uint32_t count;
    uint32_t off;
} Mar;

typedef struct {
    uint16_t key;
    uint16_t x[3];
} Ent;

void *func_0201c050(void *obj, uint32_t key, uint32_t a, uint32_t b)
{
    Loc loc;
    Loc *p;
    uint32_t i;

    func_02018404(&loc, data_020b8e44, a, b);
    for (i = 0; i < ((Mar *)func_02052d90(loc.mar, loc.idx))->count; i++) {
        Mar *m = (Mar *)func_02052d90(loc.mar, loc.idx);
        Ent *e = (Ent *)((uint8_t *)m + m->off);
        if (key == e[i].key) {
            func_0201bc64(obj, 10, i, a);
        }
    }
    p = &loc;
    if (p->mar != 0) {
        if (p->flag != 0) {
            func_02052d3c(p->mar, p->idx);
        }
        func_02052c04(p->mar);
    }
    return func_02053290(p);
}
