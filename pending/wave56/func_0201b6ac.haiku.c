#include "ffc/types.h"

extern void func_0201b180(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_020711ac(void *p, uint32_t n);
extern void func_0201ac38(uint32_t x);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern uint32_t func_02056830(uint32_t n);
extern uint8_t func_0201ac54(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0208763c(void *p, uint32_t q);
extern void func_02087678(void *p);
extern void func_02056858(uint32_t x);
extern void func_0201b0cc(void *a);
extern uint32_t func_0201bd84(void *a, uint32_t b);
extern void func_0201bcf4(void *a, uint32_t b, uint32_t c);
extern uint8_t data_020b93bc[];

struct Obj {
    uint32_t f00, f04, f08, f0c;
    void *f10;
    void *f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint8_t f28;
    uint8_t f29;
};

struct Guard {
    void *obj;
    uint8_t active;
};

typedef void (*VFn)(void *, uint32_t);

void func_0201b6ac(struct Obj *a, uint32_t b, uint32_t c, uint32_t d) {
    struct Guard g;
    uint32_t n;
    uint8_t ok;
    uint32_t r2;

    if (a->f10 == 0) {
        return;
    }
    func_0201b180(a, 0, 0, d);
    if (func_020711ac(a->f10, a->f1c + 1) == 0) {
        return;
    }
    func_0201ac38(0);
    n = func_0209a978(a->f24 + 0x1df, 0x1e0) * 0x1e0;
    n = func_02056830(n);
    ok = func_0201ac54(a, a->f1c + 1, a->f24, n);
    a->f28 = ok;
    if (a->f28) {
        void *o;
        VFn *vt;
        a->f29 = 1;
        uint8_t *fp = (uint8_t *)&g;
        g.obj = data_020b93bc;
        g.active = 1;
        if (fp[4]) {
            func_0208763c(g.obj, fp[4]);
        }
        o = a->f14;
        vt = *(VFn **)o;
        vt[4](o, n);
        if (g.active) {
            func_02087678(g.obj);
        }
    }
    func_02056858(n);
    func_0201b0cc(a);
    func_0201ac38(1);
    if (b == 0) {
        r2 = func_0201bd84(a, 0x23);
    } else {
        r2 = 0;
    }
    func_0201bcf4(a, 0x23, r2);
}
