#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef void (*Method)(void *self, Pair s);

extern Pair data_ov007_021c4f70[];
extern uint32_t data_ov007_021c4f50[];
extern uint32_t data_ov007_021c4ed0[];

void func_ov007_021ad180(uint8_t *p, uint32_t flag) {
    Pair t;
    Pair s;
    void *o;
    void *o2;
    Pair *e;

    if (flag) {
        o = *(void **)(p + 0x98);
        (*(void (***)(void *, uint32_t, uint32_t))o)[14](o, 2, 0);
        e = &data_ov007_021c4f70[*(uint32_t *)(p + 0xa0)];
        t.a = e->a + data_ov007_021c4f50[1];
        t.b = e->b + data_ov007_021c4f50[2];
        o2 = *(void **)(p + 0x9c);
        (*(Method **)o2)[3](o2, t);
    } else {
        o = *(void **)(p + 0x98);
        (*(void (***)(void *, uint32_t, uint32_t))o)[14](o, 1, 0);
        e = &data_ov007_021c4f70[*(uint32_t *)(p + 0xa0)];
        s.a = e->a + data_ov007_021c4ed0[31];
        s.b = e->b + data_ov007_021c4f50[0];
        o2 = *(void **)(p + 0x9c);
        (*(Method **)o2)[3](o2, s);
    }
}
