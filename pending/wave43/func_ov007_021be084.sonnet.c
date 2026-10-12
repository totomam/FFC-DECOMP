#include "ffc/types.h"

extern void func_020694ac(void *self, uint32_t a, uint32_t b, void *c);
typedef struct { uint8_t v; } B;
extern void func_0203b0a8(void *dst, void *begin, void *end, B v);
extern uint32_t data_ov007_021c844c[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Blk;

typedef struct {
    uint32_t base;
    uint32_t count;
} Table;

typedef struct {
    uint32_t vt;
    uint8_t pad0[0xc4];
    Blk s1;
    uint8_t pad_s1[0xc];
    uint32_t e0;
    uint32_t e4;
    Blk s2;
    uint8_t pad1[0xc];
    Blk s3;
    uint8_t pad2[0x4];
    uint32_t f10;
    uint32_t f14;
    int32_t f18;
    uint8_t f1c;
    uint32_t f20;
    uint32_t arr[3];
} Obj;

Obj *func_ov007_021be084(Obj *self, uint32_t a, uint32_t b, Table *t)
{
    B tmp;
    uint32_t i;
    Blk *p1;
    Blk *p2;
    Blk *p3;

    func_020694ac(self, 0, 0, t);
    self->vt = (uint32_t)data_ov007_021c844c;
    p1 = &self->s1;
    p1->a = 0;
    self->e0 = a;
    self->e4 = b;
    p2 = &self->s2;
    p1->b = 0;
    p1->c = 0;
    p2->a = 0;
    p2->b = 0;
    p2->c = 0;
    func_0203b0a8(p2, (void *)t->base, (char *)t->base + t->count * 12, tmp);
    p3 = &self->s3;
    self->s3.a = 0;
    p3->b = 0;
    p3->c = 0;
    self->f10 = 0;
    self->f14 = 0;
    self->f18 = -1;
    self->f1c = 0;
    self->f20 = 0;
    {
        uint32_t *q = self->arr;
        uint32_t z = 0;
        for (i = 0; i < 3; i++) {
            q[i] = z;
        }
    }
    return self;
}
