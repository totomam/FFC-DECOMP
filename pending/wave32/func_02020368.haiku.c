#include "ffc/types.h"

extern uint32_t data_020ad538[];
extern void func_02059538(void *p, uint32_t v);
extern void func_02059a78(void *p, uint32_t v);
extern void func_0205847c(void *p, uint32_t v);
extern void func_02060bf4(void *p);
extern void func_0205d620(void *p);
extern void func_02062868(void *p);
extern void func_02056844(void *p);

typedef struct Mid {
    uint8_t pad0[0x14];
    void *r5;
    uint8_t pad1[0x1c - 0x18];
    void *inner;
} Mid;

typedef struct Dev {
    uint8_t pad0[0x34];
    void *f34;
} Dev;

typedef struct Ctx {
    uint32_t *vt;
    uint8_t pad0[0x1c - 4];
    Mid *mid;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    void *f30;
} Ctx;

Ctx *func_02020368(Ctx *a)
{
    Dev *d;
    uint32_t v20 = a->f20;
    a->vt = data_020ad538;
    d = (Dev *)a->mid->r5;
    func_02059538(d, v20);
    func_02059a78(d, a->f24);
    func_0205847c(d->f34, a->f2c);
    func_02060bf4(a->mid->inner);
    func_0205d620(&a->f30);
    func_02062868(a);
    func_02056844(a);
    return a;
}
