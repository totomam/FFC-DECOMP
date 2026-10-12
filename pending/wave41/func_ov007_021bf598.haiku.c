#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t ctx;
    uint32_t f2;
    uint32_t f3;
    uint32_t f4;
    uint32_t idx;
} Bac;

typedef struct {
    uint32_t f0;
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint8_t rest[0x38 - 0x14];
} Ent;

extern int func_ov007_021bf958(uint32_t *out);
extern void func_ov007_021bff24(void);
extern int func_ov007_021c01c4(uint32_t ctx, uint32_t *entry, void (*cb)(void), uint32_t flags);
extern uint32_t func_ov007_021c0148(uint32_t ctx);
extern void func_ov007_021bf91c(uint32_t size, void *data, uint32_t arg);
extern int func_ov007_021bfddc(uint32_t a, uint32_t b);
extern void func_ov007_021bff10(uint32_t a);
extern void func_ov007_021bfa14(void);
extern Bac data_ov007_021c9bac;
extern Ent data_ov007_021c9bc4[];
extern uint8_t data_ov007_021c876c[];

uint32_t func_ov007_021bf598(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t out;
    uint32_t r;
    Ent *e;

    if (func_ov007_021bf958(&out) != 0) {
        return out;
    }
    func_ov007_021bff24();
    e = &data_ov007_021c9bc4[data_ov007_021c9bac.idx];
    e->a = a;
    e->b = b;
    e->c = c;
    e->d = d;
    r = func_ov007_021c01c4(data_ov007_021c9bac.ctx, (uint32_t *)&e->a, func_ov007_021bfa14, 0);
    if (r == 0) {
        r = func_ov007_021c0148(data_ov007_021c9bac.ctx);
        func_ov007_021bf91c(0x29c, data_ov007_021c876c, r);
        return func_ov007_021bfddc(4, r);
    } else {
        e = &data_ov007_021c9bc4[data_ov007_021c9bac.idx];
        e->f0 = r;
        func_ov007_021bff10(4);
        return 0;
    }
}
