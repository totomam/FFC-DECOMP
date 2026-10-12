#include "ffc/types.h"

typedef struct {
    uint32_t h;
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d[9];
    uint32_t e;
} Entry;

typedef struct {
    uint32_t w0;
    uint32_t handle;
    uint32_t w2;
    uint32_t w3;
    uint32_t w4;
    uint32_t idx;
} Ctl;

extern Ctl data_ov007_021c9bac;
extern Entry data_ov007_021c9bc4[];
extern uint8_t data_ov007_021c87ec[];

extern uint32_t func_ov007_021bf958(uint32_t *out, uint32_t b, uint32_t c, uint32_t *d);
extern void func_ov007_021bff24(void);
extern uint32_t func_ov007_021c01f4(uint32_t handle, uint32_t *p, void (*cb)(void));
extern uint32_t func_ov007_021c0148(uint32_t handle);
extern void func_ov007_021bf91c(uint32_t id, uint8_t *s, uint32_t x);
extern uint32_t func_ov007_021bfddc(uint32_t n, uint32_t x);
extern void func_ov007_021bff10(uint32_t n);
extern void func_ov007_021bfa14(void);

uint32_t func_ov007_021bf7d8(uint32_t a, uint32_t b, uint32_t c, uint32_t *d, uint32_t e, uint32_t f)
{
    uint32_t tmp = 0;
    Entry *ent;
    uint32_t h;

    if (func_ov007_021bf958(&tmp, b, c, d) != 0) {
        return tmp;
    }
    func_ov007_021bff24();
    ent = &data_ov007_021c9bc4[data_ov007_021c9bac.idx];
    ent->a = a;
    ent->b = b;
    ent->c = c;
    ent->d[0] = d[0];
    ent->d[1] = d[1];
    ent->d[2] = d[2];
    ent->d[3] = d[3];
    ent->d[4] = d[4];
    ent->d[5] = d[5];
    ent->d[6] = d[6];
    ent->d[7] = d[7];
    ent->d[8] = d[8];
    ent->e = e;
    h = func_ov007_021c01f4(data_ov007_021c9bac.handle, &ent->a, func_ov007_021bfa14);
    if (h == 0) {
        uint32_t r4 = func_ov007_021c0148(data_ov007_021c9bac.handle);
        func_ov007_021bf91c(0x446, data_ov007_021c87ec, r4);
        return func_ov007_021bfddc(0xb, r4);
    }
    ent->h = h;
    func_ov007_021bff10(0xb);
    return 0;
}
