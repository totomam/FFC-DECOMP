#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

struct Obj {
    uint8_t pad0[0xf4];
    void *f4;
    uint32_t f8;
    uint32_t fc;
    uint8_t pad1[0x114 - 0x100];
    uint32_t f114;
};

extern uint64_t func_0209a978(uint32_t x, uint32_t y);
extern void func_ov010_021bf10c(struct Obj *p);
extern void func_ov005_02196144(uint32_t v, uint8_t n);
extern void func_ov010_021bf160(struct Obj *p);
extern void func_02069828(struct Obj *p, Pair v);

int func_ov010_021bf04c(struct Obj *p)
{
    Pair out;
    Pair *q;

    p->f8 = (uint32_t)(func_0209a978(p->f8 + 1, p->fc + 1) >> 32);
    func_ov010_021bf10c(p);
    func_ov005_02196144(p->f114, (uint8_t)(p->f8 + 1));
    func_ov010_021bf160(p);
    q = &out;
    ((void (*)(Pair *, void *))((void **)*(void **)p->f4)[4])(q, p->f4);
    func_02069828(p, *q);
    return 1;
}
