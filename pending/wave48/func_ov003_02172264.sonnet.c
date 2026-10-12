#include "ffc/types.h"

extern void func_02018644(void *out, void *arg);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_020424e0(void *a);
extern void *func_ov003_0214d9c0(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02171bdc(void *mem, void *a, uint16_t b, void *c);
extern uint32_t data_ov003_0217b6ac[2];
extern uint32_t data_ov003_0217b6b4[2];
extern void *data_020b8e44;

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t pad; void *p; uint32_t n; uint8_t f; } H;

typedef struct {
    uint8_t pad0[0x14];
    uint8_t list[0x6c];
    Pair pos;
    void *obj;
    uint8_t pad1[4];
    uint8_t arg[4];
    uint8_t flag;
    uint8_t pad2[3];
    uint32_t *state;
} S;

void func_ov003_02172264(S *self)
{
    uint16_t v;
    void *x;
    void *al;
    uint32_t *st = self->state;

    if (*st == 2) {
        self->pos = *(Pair *)data_ov003_0217b6ac;
        return;
    }
    if (*st == 3) {
        self->flag = 0;
        *st = 0;
    }

    if (self->flag != 0) {
        H h;
        H *q = &h;
        func_02018644(q, data_020b8e44);
        func_02052d90(h.p, h.n);
        x = func_02052d90(h.p, h.n);
        v = *(uint16_t *)((uint8_t *)x + *(uint32_t *)((uint8_t *)x + 8));
        if (h.p != 0) {
            if (q->f != 0) func_02052d3c(q->p, (void*)q->n);
            func_02052c04(q->p);
        }
        func_02053290(q);
        self->flag = 0;
    } else {
        H h;
        H *q = &h;
        func_02018644(q, data_020b8e44);
        func_02052d90(h.p, h.n);
        x = func_02052d90(h.p, h.n);
        v = *(uint16_t *)((uint8_t *)x + *(uint32_t *)((uint8_t *)x + 8) + 2);
        if (h.p != 0) {
            if (q->f != 0) func_02052d3c(q->p, (void*)q->n);
            func_02052c04(q->p);
        }
        func_02053290(q);
    }

    func_020424e0(self->obj);
    func_02056bc0(self->list, func_ov003_0214d9c0());
    al = func_0205681c(0x98);
    if (al != 0) {
        al = func_ov003_02171bdc(al, self->obj, v, self->arg);
    }
    func_02056bc0(self->list, al);
    self->pos = *(Pair *)data_ov003_0217b6b4;
}
