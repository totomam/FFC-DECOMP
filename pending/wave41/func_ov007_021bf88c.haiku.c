#include "ffc/types.h"

extern uint32_t func_ov007_021bf958(uint32_t *out, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov007_021bff24(void);
extern uint32_t func_ov007_021c023c(uint32_t h, uint32_t *p, void *cb);
extern uint32_t func_ov007_021c0148(uint32_t h);
extern void func_ov007_021bf91c(uint32_t a, void *b, uint32_t c);
extern uint32_t func_ov007_021bfddc(uint32_t a, uint32_t b);
extern void func_ov007_021bff10(uint32_t a);
extern void func_ov007_021bfa14(void);
extern uint32_t data_ov007_021c9bac[];
extern uint32_t data_ov007_021c9bc4[];
extern uint32_t data_ov007_021c8810[];

uint32_t func_ov007_021bf88c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    uint32_t out;
    uint32_t idx;
    uint32_t *ent;
    uint32_t r;
    uint32_t h;

    if (func_ov007_021bf958(&out, b, c, d) != 0) {
        return out;
    }
    func_ov007_021bff24();
    idx = data_ov007_021c9bac[5];
    ent = &data_ov007_021c9bc4[idx * 14];
    ent[1] = a;
    ent[2] = b;
    ent[3] = c;
    ent[4] = d;
    ent[5] = e;
    r = func_ov007_021c023c(data_ov007_021c9bac[1], &ent[1], (void *)func_ov007_021bfa14);
    if (r == 0) {
        h = func_ov007_021c0148(data_ov007_021c9bac[1]);
        func_ov007_021bf91c(0x1200, data_ov007_021c8810, h);
        return func_ov007_021bfddc(12, h);
    }
    ent[0] = r;
    func_ov007_021bff10(12);
    return 0;
}
