#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t func_020744d0(uint32_t x);
extern void func_02075ad0(uint32_t a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c81ac;
struct G { uint8_t pad[0x88]; uint32_t f88; };
struct H { struct G *g; };
extern struct H *data_020b8e44;
extern Pair data_ov007_021c81b4;
extern Pair data_ov007_021c81bc;

struct Obj;
struct VT { void *pad[9]; uint32_t (*f)(struct Obj *); };
struct Obj {
    struct VT *vt;
    uint8_t pad4[0x10];
    uint8_t f14[0xb0 - 0x14];
    uint32_t f_b0;
    uint8_t b_b4;
    uint8_t b_b5;
    uint8_t pad_b6[0xb8 - 0xb6];
    uint32_t f_b8;
    uint32_t f_bc;
    uint8_t pad_c0[0xc8 - 0xc0];
    Pair pr_c8;
    uint8_t pad_d4[0x1d0-0xd0];
    uint8_t cnt;
};

void func_ov007_021bc434(struct Obj *p)
{
    if (func_020744d0(p->f_b0) != 0) {
        p->f_b8 = func_020744d0(p->f_b0);
        p->pr_c8 = data_ov007_021c81ac;
        return;
    }
    func_02075ad0(data_020b8e44->g->f88, &p->f_b8, &p->f_bc);
    if (p->f_bc != 0) {
        p->pr_c8 = data_ov007_021c81b4;
        return;
    }
    if (p->cnt < p->b_b5) {
        uint32_t r = p->vt->f(p);
        func_02056bc0(p->f14, (void *)r);
        p->cnt = p->cnt + 1;
        return;
    }
    p->pr_c8 = data_ov007_021c81bc;
}
