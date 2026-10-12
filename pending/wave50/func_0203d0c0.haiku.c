#include "ffc/types.h"

typedef struct {
    uint8_t v;
} Byte;

extern void func_02056c9c(void *p, int v);
extern void func_0203b0a8(void *self, void *begin, void *end, Byte v);
extern uint32_t data_020aec7c[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Sub;

typedef struct {
    uint32_t base;
    uint32_t count;
} Arr;

typedef struct {
    uint32_t vt;
    uint8_t pad[0x7c];
    uint32_t f80;
    uint32_t f84;
    uint32_t f88;
    Sub sub;
} Obj;

void *func_0203d0c0(void *self, uint32_t a1, uint32_t a2, Arr *arr)
{
    Obj *o = (Obj *)self;
    Byte tmp;
    Sub *s;

    func_02056c9c(self, 0);
    o->vt = (uint32_t)data_020aec7c;
    o->f80 = 0;
    o->f84 = a1;
    o->f88 = a2;
    s = &o->sub;
    s->a = 0;
    s->b = 0;
    s->c = 0;
    func_0203b0a8(s, (void *)arr->base, (void *)(arr->base + arr->count * 12), tmp);
    return self;
}
