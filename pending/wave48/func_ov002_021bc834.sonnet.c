#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint8_t flag;
} FuncOvTmp;

extern void func_02056c9c(void *obj, uint32_t x);
extern void func_0209cf5c(void *p, uint32_t n, uint32_t sz, uint32_t a, uint32_t b);
extern void func_02015e8c(void *s, uint32_t v);
extern void *func_02052d90(uint32_t mar, uint32_t index);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02053290(void *object);
extern uint32_t func_0203b694(uint32_t x);
extern void *func_0205681c(uint32_t size);
extern void *func_ov002_021bc564(void *obj, void *p);
extern void func_02056bc0(void *object, void *node);
extern char data_ov002_021d69b8[];
extern uint32_t data_020b8e44;

typedef struct { uint32_t pad[3]; void *node; int32_t x; int32_t y; uint32_t pad2; } Item;
typedef struct {
    void *vt; uint8_t p0[0x44]; uint8_t list[0x38];
    uint32_t f80, f84; void *f88; Item it[2]; uint32_t padc[2];
    uint32_t fcc, fd0, fd4;
} Obj;

void *func_ov002_021bc834(Obj *self, uint32_t p1, uint32_t p2, uint32_t p3)
{
    FuncOvTmp s;
    uint8_t *ret;
    uint32_t r6, r7, neg, i;
    uint32_t sz = 0x1c;

    func_02056c9c(self, 0);
    self->vt = data_ov002_021d69b8;
    self->f80 = p3;
    self->f84 = p1;
    func_0209cf5c(self->it, 2, sz, 0x21bc829, 0x21bc991);
    self->fcc = p2;
    self->fd0 = 0;
    func_02015e8c(&s, data_020b8e44);
    ret = func_02052d90(s.b, s.c);
    r6 = *(uint32_t *)(ret + sz + 0xe4);
    r7 = *(uint32_t *)(ret + 0xfc);
    if (s.b != 0) {
        if (s.flag) {
            func_02052d3c(s.b, s.c);
        }
        func_02052c04(s.b);
    }
    func_02053290(&s);
    self->f88 = (void *)func_0203b694(0);
    neg = -r7;
    for (i = 0; i < 2; i++) {
        void *t = func_0205681c(0x98);
        if (t != 0) {
            t = func_ov002_021bc564(t, (void *)self->f84);
        }
        self->it[i].node = t;
        self->it[i].x = (i == self->fcc) ? -10 : 10;
        self->it[i].y = 0;
        if (self->fcc == 1) {
            self->it[i].x = self->it[i].x + neg;
        } else {
            self->it[i].x = self->it[i].x + r7;
        }
        self->it[i].y = self->it[i].y + r6;
        func_02056bc0(self->f88, self->it[i].node);
    }
    func_02056bc0(self->list, self->f88);
    self->fd4 = func_0203b694(0);
    func_02056bc0(self->list, (void *)self->fd4);
    return self;
}
