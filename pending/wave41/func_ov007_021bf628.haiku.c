#include "ffc/types.h"

typedef struct {
    uint32_t res;
    uint32_t f1;
    uint32_t f2;
    uint32_t f3;
    uint32_t f4;
    uint8_t pad[0x38 - 0x14];
} Ent;

typedef struct {
    uint32_t pad0;
    uint32_t handle;
    uint32_t pad8;
    uint32_t padc;
    uint32_t idx;
} Glob;

extern int func_ov007_021bf958(uint32_t *out);
extern void func_ov007_021bff24(void);
extern int func_ov007_021c020c(uint32_t handle, uint32_t *entry, void (*cb)(void));
extern uint32_t func_ov007_021c0148(uint32_t handle);
extern void func_ov007_021bf91c(uint32_t id, void *str, uint32_t val);
extern void func_ov007_021bfddc(uint32_t a, uint32_t b);
extern void func_ov007_021bff10(uint32_t a);
extern void func_ov007_021bfa14(void);
extern Glob data_ov007_021c9bac;
extern Ent data_ov007_021c9bc4[];
extern uint8_t data_ov007_021c878c[];

int func_ov007_021bf628(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3)
{
    uint32_t h;
    Ent *e;
    int r;

    if (func_ov007_021bf958(&h) != 0) {
        return h;
    }
    func_ov007_021bff24();
    e = &data_ov007_021c9bc4[data_ov007_021c9bac.idx];
    e->f1 = p0;
    e->f2 = p1;
    e->f3 = p2;
    e->f4 = p3;
    r = func_ov007_021c020c(data_ov007_021c9bac.handle, &e->f1, func_ov007_021bfa14);
    if (r != 0) {
        e->res = r;
        func_ov007_021bff10(7);
        return 0;
    }
    {
        uint32_t hd = func_ov007_021c0148(data_ov007_021c9bac.handle);
        func_ov007_021bf91c(0x35b, data_ov007_021c878c, hd);
        func_ov007_021bfddc(7, hd);
    }
    return 0;
}
