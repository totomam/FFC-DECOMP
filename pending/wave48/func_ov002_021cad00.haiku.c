#include "ffc/types.h"

typedef struct Ent {
    uint32_t w[12];
} Ent;

typedef struct Ctx {
    Ent *list;
    uint32_t count;
    uint32_t cap;
} Ctx;

typedef struct Loc {
    uint32_t a;
    uint32_t n;
    uint32_t c;
} Loc;

extern void func_ov002_021d2cd0(Loc *l, Ent *base, Ent *cur, uint8_t b);
extern void func_ov002_021d2b30(Ctx *c, uint32_t n, uint8_t b, uint32_t x);
extern Ent *func_ov002_021d2aa0(Loc *l, uint32_t idx);
extern uint32_t func_ov002_021a1868(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021ab064(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021acfd0(uint32_t a, uint32_t b);
extern void *func_02015c98(void *unused, uint32_t index);
extern void func_ov002_021d2b38(Ctx *c, Ent *e, uint32_t x, uint8_t b);
extern void func_ov002_021d2b50(Loc *l);

extern uint32_t data_020b8e44;

void func_ov002_021cad00(void *unused, uint32_t p1, int p2, Ctx *c)
{
    Loc L;
    uint32_t j;
    uint8_t b;
    Ent e;
    Ent *src;
    uint32_t res, mask, k, ip;
    void *tbl;

    L.a = 0;
    L.n = 0;
    L.c = 0;
    j = 0;
    func_ov002_021d2cd0(&L, c->list, &c->list[c->count], b);
    b = (uint8_t)j;
    func_ov002_021d2b30(c, c->count, b, 0);
    while (L.n > 0 && j < L.n) {
        src = func_ov002_021d2aa0(&L, j);
        res = func_ov002_021a1868(p1, src->w[0]);
        mask = func_ov002_021ab064(res, 1);
        for (k = 0; k < 5; k++) {
            if (mask & (1u << k)) {
                uint32_t v = func_ov002_021acfd0(res, k);
                if (v) {
                    tbl = func_02015c98((void *)data_020b8e44, v);
                    ip = p2 - *(uint16_t *)((uint8_t *)tbl + *(uint32_t *)((uint8_t *)tbl + 0x10));
                    if ((int)ip >= 0) {
                        e.w[0] = src->w[0];
                        e.w[1] = src->w[1];
                        e.w[2] = 0;
                        e.w[3] = v;
                        e.w[4] = src->w[4];
                        e.w[5] = src->w[5];
                        e.w[6] = src->w[6];
                        e.w[7] = src->w[7];
                        e.w[8] = src->w[8];
                        e.w[9] = src->w[9];
                        e.w[10] = src->w[10];
                        e.w[11] = ip;
                        if (c->count < c->cap) {
                            c->list[c->count] = e;
                            c->count++;
                        } else {
                            b = 0;
                            func_ov002_021d2b38(c, &e, 0, b);
                        }
                    }
                }
            }
        }
        j++;
    }
    func_ov002_021d2b50(&L);
}
