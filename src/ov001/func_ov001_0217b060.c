#include "ffc/types.h"

extern void func_ov001_0217b0ec(void *p);
extern void *func_ov000_021653d4(uint32_t size);
extern uint32_t func_ov000_021658c0(uint32_t v);

typedef struct { uint32_t w[60]; } Blk;
typedef struct { uint32_t pad[4]; Blk *blk; } Obj;

int func_ov001_0217b060(uint32_t **self, Obj *o, Blk *s)
{
    if ((*self)[0x40] == 0) {
        return 1;
    }
    func_ov001_0217b0ec(o);
    o->blk = (Blk *)func_ov000_021653d4(0xf0);
    if (o->blk != 0) {
        *o->blk = *s;
        o->blk->w[0] = func_ov000_021658c0(s->w[0]);
        o->blk->w[1] = func_ov000_021658c0(s->w[1]);
        o->blk->w[2] = func_ov000_021658c0(s->w[2]);
        o->blk->w[3] = func_ov000_021658c0(s->w[3]);
        o->blk->w[4] = func_ov000_021658c0(s->w[4]);
        o->blk->w[5] = func_ov000_021658c0(s->w[5]);
        o->blk->w[0x32] = func_ov000_021658c0(s->w[0x32]);
    }
    return o->blk != 0 ? 1 : 0;
}
