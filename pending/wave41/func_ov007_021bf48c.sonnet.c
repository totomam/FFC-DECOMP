#include "ffc/types.h"

typedef struct {
    uint32_t ret;
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t pad[9];
} Entry;

extern uint32_t func_ov007_021bf958(uint32_t *out);
extern void func_ov007_021bff24(void);
extern uint32_t func_ov007_021c01ac(uint32_t h, uint32_t *p, void (*cb)(void), uint32_t z);
extern uint32_t func_ov007_021c0148(uint32_t h);
extern void func_ov007_021bf91c(uint32_t id, uint32_t *s, uint32_t v);
extern uint32_t func_ov007_021bfddc(uint32_t x, uint32_t y);
extern void func_ov007_021bff10(uint32_t x);
extern void func_ov007_021bfa14(void);
typedef struct { uint32_t p0; uint32_t h; uint32_t p2; uint32_t p3; uint32_t p4; uint32_t idx; } G;
extern G data_ov007_021c9bac;
extern Entry data_ov007_021c9bc4[];
extern uint32_t data_ov007_021c872c[];

uint32_t func_ov007_021bf48c(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t out;
    uint32_t res;
    uint32_t r;
    Entry *e;

    if (func_ov007_021bf958(&out) != 0) {
        return out;
    }
    func_ov007_021bff24();
    e = &data_ov007_021c9bc4[data_ov007_021c9bac.idx];
    e->a = a;
    e->b = b;
    e->c = c;
    e->d = d;
    res = 0;
    r = func_ov007_021c01ac(data_ov007_021c9bac.h, &e->a, func_ov007_021bfa14, 0);
    if (r == 0) {
        res = func_ov007_021c0148(data_ov007_021c9bac.h);
        func_ov007_021bf91c(0x22f, data_ov007_021c872c, res);
        return func_ov007_021bfddc(2, res);
    }
    data_ov007_021c9bc4[data_ov007_021c9bac.idx].ret = r;
    func_ov007_021bff10(2);
    return res;
}
