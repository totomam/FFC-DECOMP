#include "ffc/types.h"

typedef struct Guard {
    void *p0;
    void *p1;
    void *p2;
    uint8_t flag;
} Guard;

typedef struct Ent {
    uint16_t key;
    uint16_t pad;
    uint16_t a;
    uint16_t b;
    uint32_t rest[2];
} Ent;

extern uint32_t data_020b8e44;
extern void func_02019ac8(void *out, uint32_t v, uint32_t *p2, uint32_t p3);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

void func_ov005_02197a78(int a, uint32_t *out1, uint32_t *out2, uint32_t d)
{
    Guard g;
    Guard *gp;
    Ent *best;
    uint32_t i;
    uint32_t val;

    func_02019ac8(&g, data_020b8e44, out2, d);
    best = 0;
    for (i = 0; i < ((uint32_t *)func_02052d90(g.p1, g.p2))[1]; i++) {
        uint8_t *mar = (uint8_t *)func_02052d90(g.p1, g.p2);
        Ent *ent = (Ent *)(mar + ((uint32_t *)mar)[2]) + i;
        if (a >= ent->key) {
            if (best == 0) {
                best = ent;
            } else if (best->key < ent->key) {
                best = ent;
            }
        }
    }
    if (best != 0) {
        *out1 = best->b;
        val = best->a;
    } else {
        *out1 = 0;
        val = 0;
    }
    *out2 = val;
    gp = &g;
    if (gp->p1 != 0) {
        if (gp->flag) {
            func_02052d3c(gp->p1, gp->p2);
        }
        func_02052c04(gp->p1);
    }
    func_02053290(gp);
}
