#include "ffc/types.h"

extern void func_ov003_02151464(void *self, uint32_t a1);
extern void *func_02056dd4(void *self);
extern void func_02018330(void *out, uint32_t v);
extern void *func_02052d90(uint32_t a, uint32_t b);
extern void func_ov003_021519b0(void *self, uint32_t c);
extern void func_ov003_021516d4(void *self, uint32_t c);
extern void func_ov003_021515b8(void *self);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern uint8_t data_ov003_02179d38[];
extern void *data_0213df20;
extern uint32_t data_020b8e44;

typedef struct Self {
    void *vt;
    uint8_t pad[0xa0];
    uint32_t a4;
    uint32_t a8;
    uint32_t ac;
} Self;

typedef struct Mar {
    uint8_t pad[0x10];
    uint32_t count;
    uint32_t base;
} Mar;

typedef struct Ent {
    uint16_t id;
    uint16_t x2;
    uint16_t x4;
    uint16_t x6;
} Ent;

typedef struct Blob {
    uint32_t p0;
    uint32_t p1;
    uint32_t p2;
    uint8_t flag;
} Blob;

void *func_ov003_021518d0(void *self, uint32_t a1, uint32_t c)
{
    Self *s = (Self *)self;
    struct { uint32_t pad; Blob b; } o;
    void *old;
    void *tmp;
    uint32_t i;
    Mar *m;
    Blob *b;

    func_ov003_02151464(self, a1);
    s->vt = data_ov003_02179d38;
    s->a4 = 0xffffffff;
    s->a8 = 0xffffffff;
    s->ac = 0xffffffff;
    tmp = func_02056dd4(self);
    old = data_0213df20;
    data_0213df20 = tmp;

    if (c != 0) {
        func_02018330(&o.b, data_020b8e44);
        i = 0;
        m = (Mar *)func_02052d90(o.b.p1, o.b.p2);
        if (!(m->count <= 0)) {
            do {
                m = (Mar *)func_02052d90(o.b.p1, o.b.p2);
                Ent *e = (Ent *)((uint8_t *)m + m->base) + i;
                if (c == e->id) {
                    s->a4 = e->x4;
                    s->ac = e->x2;
                    break;
                }
                i++;
                m = (Mar *)func_02052d90(o.b.p1, o.b.p2);
            } while (i < m->count);
        }
        func_ov003_021519b0(self, c);
        func_ov003_021516d4(self, c);
        func_ov003_021515b8(self);
        b = &o.b;
        if (o.b.p1 != 0) {
            if (b->flag != 0) {
                func_02052d3c(b->p1, b->p2);
            }
            func_02052c04(b->p1);
        }
        func_02053290(b);
    }

    data_0213df20 = old;
    return self;
}
