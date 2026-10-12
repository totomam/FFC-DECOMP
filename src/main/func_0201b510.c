#include "ffc/types.h"

extern void func_0201ac38(uint32_t x);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern void *func_02056830(uint32_t n);
extern void func_02084b2c(void *p, uint32_t v, uint32_t n);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_0201ad64(void *self, uint32_t a, uint32_t b, void *c);
extern void func_02056858(void *p);
extern uint8_t data_020b93bc[];

typedef struct {
    uint32_t f0[5];
    void *f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
} Self;

typedef struct {
    void *vt;
    uint8_t flag;
} Guard;

void func_0201b510(Self *s)
{
    Guard g;
    Guard *gp;
    void *p;
    uint32_t n;
    void *obj;

    func_0201ac38(0);
    n = func_0209a978(s->f24 + 0x1df, 0x1e0) * 0x1e0;
    p = func_02056830(n);
    func_02084b2c(p, 0, func_0209a978(s->f24 + 0x1df, 0x1e0) * 0x1e0);

    gp = &g;
    gp->vt = data_020b93bc;
    gp->flag = 1;
    if (gp->flag != 0) {
        func_0208763c(gp->vt);
    }
    obj = s->f14;
    ((void (*)(void *, void *))((void **)*(void **)obj)[3])(obj, p);
    if (g.flag != 0) {
        func_02087678(g.vt);
    }
    func_0201ad64(s, s->f1c + 1, s->f24, p);
    func_0201ad64(s, s->f1c + 1, s->f24, p);
    func_02056858(p);
    func_0201ac38(1);
}
