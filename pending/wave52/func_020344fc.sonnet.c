#include "ffc/types.h"

extern uint8_t data_020aadd0[];
extern uint8_t data_020ae304[];
extern uint8_t data_020ae324[];
extern uint8_t data_020ae338[];
extern void func_02054910(void *p, uint32_t a, uint32_t b);
extern void func_02054498(void *p);
extern void func_020342cc(void *p);
extern void func_02084b2c(uint32_t a, uint32_t b, uint32_t c);
extern void func_020890f8(void);
extern void func_0208b260(void);
extern void func_0208b65c(uint32_t a);
extern void func_0208b68c(uint32_t a);
extern void func_0208ae8c(void);
extern void func_0208afa0(void *p);
extern void func_02054500(void *p);
extern void func_02054990(void *p);

typedef struct Obj {
    void *vt0;
    uint32_t f4;
    uint32_t f8;
    uint32_t flags;
    uint8_t p10[4];
    void *vt14;
    uint8_t p18[8];
    void *vt20;
    uint8_t p24[8];
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
} Obj;

Obj *func_020344fc(Obj *s, uint32_t a1)
{
    uint32_t blk[7];

    s->vt0 = (void *)data_020aadd0;
    s->flags &= ~0xffu;
    func_02054910(&s->vt14, 0, 0);
    func_02054498(&s->vt20);
    func_020342cc(s);
    s->vt0 = (void *)data_020ae304;
    s->vt14 = (void *)data_020ae324;
    s->vt20 = (void *)data_020ae338;
    func_02084b2c(a1, 0x80, 0x420);
    a1 = (a1 + 0x1f) & ~0x1fu;
    s->f2c = a1;
    blk[0] = 0;
    blk[1] = a1;
    blk[2] = 0x400;
    blk[3] = 0x105d;
    blk[4] = 1;
    blk[5] = 0;
    blk[6] = 0;
    func_020890f8();
    func_0208b260();
    func_0208b65c(1);
    func_0208b68c(2);
    func_0208ae8c();
    func_0208afa0(blk);
    s->f30 = 0;
    s->f34 = 0;
    func_02054500(&s->vt20);
    func_02054990(&s->vt14);
    return s;
}
