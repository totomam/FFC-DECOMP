#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02056c9c(void *p, uint32_t x);
extern void func_02035f58(void *p);
extern void *func_02035e10(void *object);
extern uint32_t data_020af9e4[];
extern Pair data_020afaf0;

void *func_020444ec(void *obj, uint32_t a, uint32_t b, uint32_t c,
                    uint32_t d, uint32_t e, uint32_t f, uint32_t g)
{
    uint8_t *p = (uint8_t *)obj;
    uint8_t *q;
    Pair t;

    func_02056c9c(obj, 0);
    *(uint32_t **)p = data_020af9e4;
    *(uint32_t *)(p + 0x88) = a;
    *(uint32_t *)(p + 0x8c) = b;
    *(uint32_t *)(p + 0x90) = c;
    *(uint32_t *)(p + 0x94) = d;
    *(uint32_t *)(p + 0x98) = e;
    q = p + 0xa0;
    *(uint32_t *)(p + 0x9c) = f;
    func_02035f58(q + 0x14);
    func_02035f58(q + 0x74);
    func_02035e10(q + 0xd4);
    ((uint32_t *)p)[0x67] = g;
    t = data_020afaf0;
    *(Pair *)(p + 0x80) = t;
    return obj;
}
