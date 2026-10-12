#include "ffc/types.h"

typedef struct Inner {
    void *p;
    uint32_t q;
    uint8_t flag;
} Inner;

typedef struct Cur {
    uint32_t pad[3];
    Inner in;
} Cur;

typedef struct Ctx {
    uint32_t count;
    uint32_t f4;
    uint32_t f8;
    Cur *cached;
} Ctx;

extern void func_0202a9ac(void *cursor);
extern uint32_t func_0202a9ec(Cur *c, uint32_t x);
extern void func_02052d3c(void *p, uint32_t q);
extern void func_02052c04(void *p);
extern void func_02056844(Cur *c);

void func_0202a860(uint32_t *out, Ctx *b, Cur *c, uint32_t d)
{
    Cur *cur = c;
    Inner *s;
    if (cur == b->cached) {
        func_0202a9ac((void *)&c);
        b->cached = c;
    }
    *out = func_0202a9ec(cur, b->f4);
    s = &cur->in;
    if (cur->in.p != 0) {
        if (s->flag != 0) {
            func_02052d3c(cur->in.p, s->q);
        }
        func_02052c04(s->p);
    }
    func_02056844(cur);
    b->count--;
}
