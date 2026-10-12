#include "ffc/types.h"

typedef struct Inner {
    uint8_t p0[0x34];
    uint32_t f34;
} Inner;

typedef struct Sub {
    uint8_t p0[0x14];
    Inner *in;
    uint8_t p18[4];
    void *x1c;
} Sub;

typedef struct Obj {
    void *vt;
    uint8_t p4[0x18];
    Sub *sub;
    volatile uint32_t f20;
    uint32_t f24;
    uint8_t p28[4];
    uint32_t f2c;
    uint8_t p30[4];
} Obj;

extern char data_020ad538[];
extern void func_02059538(Inner *in);
extern void func_02059a78(Inner *in, uint32_t a);
extern void func_0205847c(uint32_t a, uint32_t b);
extern void func_02060bf4(void *a);
extern void func_0205d620(void *a);
extern void func_02062868(Obj *o);

void *func_02020324(void *p)
{
    Obj *o = (Obj *)p;
    Inner *in;

    uint32_t t = *(volatile uint32_t *)&o->f20;
    (void)t;
    o->vt = data_020ad538;
    in = o->sub->in;
    func_02059538(in);
    func_02059a78(in, o->f24);
    func_0205847c(in->f34, o->f2c);
    func_02060bf4(o->sub->x1c);
    func_0205d620(&o->p30);
    func_02062868(o);
    return o;
}
