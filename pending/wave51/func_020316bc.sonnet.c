#include "ffc/types.h"

typedef struct { uint8_t v; } Flag;

extern void func_02069528(void *self, uint32_t a, uint32_t b, uint32_t c);
extern void func_0200acb8(void *a, void *b, void *c, Flag d);
extern void func_02069700(void *self, uint32_t a, uint32_t b);
extern uint8_t data_020adfb4[];

typedef struct {
    uint8_t *start;
    uint32_t count;
} Range;

typedef struct {
    void *vt;
    uint8_t pad0[0xc0];
    uint32_t c4;
    uint32_t c8;
    uint32_t cc;
    uint8_t pad1[0xc];
    uint32_t dc;
    uint32_t e0;
    uint32_t e4;
    uint32_t e8;
    uint32_t ec;
    uint32_t f0;
    uint32_t f4;
    uint8_t pad2[0x14];
    uint32_t f10c;
    uint32_t f110;
} Obj;

void *func_020316bc(uint8_t *self, uint32_t r1, uint32_t a, uint32_t r3, ...)
{
    uint32_t *ap = &r3;
    uint32_t p5 = ap[1];
    Range *p6 = (Range *)ap[2];
    uint32_t p8 = ap[4];
    Obj *o = (Obj *)self;
    func_02069528(self, r1, 0, 0);
    o->vt = data_020adfb4;
    {
        uint32_t *q = &o->c4;
        q[0] = 0;
        o->dc = a;
        q[1] = 0;
        q[2] = 0;
    }
    o->e0 = r3;
    o->e4 = p5;
    {
        uint32_t *e = &o->e8;
        e[0] = 0;
        o->f4 = ap[3];
        e[1] = 0;
        e[2] = 0;
    }
    o->f10c = 0;
    o->f110 = p8;
    if (p6 != 0 && (Range *)&o->e8 != p6) {
        Flag z; z.v = 0;
        uint8_t *start = p6->start;
        uint8_t *end = start + (p6->count << 4);
        func_0200acb8(&o->e8, start, end, z);
    }
    func_02069700(self, 0, 1);
    return self;
}
