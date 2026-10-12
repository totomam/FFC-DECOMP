#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct {
    uint32_t pad0;
    uint32_t pad1;
    Pair args;
    uint8_t q[12];
    int8_t v[4];
} Frame;

typedef struct Obj {
    uint8_t pad[0x12];
    uint8_t flag;
    uint8_t pad2;
    uint32_t cnt;
    uint8_t pad3[0x1c - 0x18];
} Obj;

typedef struct Self {
    uint8_t pad[0xb4];
    Obj *obj;
    void *n;
} Self;

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02056c4c(void *p);
extern uint32_t func_0204f7d4(const void *object);
extern void *func_0203b77c(void *d, uint32_t a, uint32_t b, uint32_t c);
extern void *func_0203b9cc(Pair p, void *x, uint32_t y);
extern void *func_0203b878(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_02005988(void *a, void *b);
extern void func_02068ddc(void *a, void *b);
extern void *func_020059cc(void *object);
extern void func_02021338(uint32_t code);
extern uint32_t func_0204f7ec(const void *object);
extern void *data_0213df18;
extern uint32_t data_0213df20;
extern uint8_t data_ov007_021c54e4[];
extern uint32_t data_ov007_021c541c[2];
extern uint8_t data_ov007_021c54fc[];

void func_ov007_021ae08c(Self *self, uint32_t param)
{
    Obj *obj = self->obj;
    uint32_t p = param;
    uint8_t *s = (uint8_t *)obj + 0x1c;
    uint8_t flag = obj->flag;
    int r5;
    Frame f;
    void *o;
    void *x;
    void *n;

    if (flag) {
        func_0208763c(s);
    }
    r5 = (obj->cnt == 0);
    if (flag) {
        func_02087678(s);
    }
    if (!r5) {
        func_02056c4c(self->obj);
    }
    data_0213df20 = func_0204f7d4(data_0213df18);
    o = func_0203b77c(data_ov007_021c54e4, 0, 0, 0);
    f.args.a = 0x20;
    f.args.b = 0x10;
    x = ((void *(*)(void *))(*(void ***)o)[8])(o);
    n = func_0203b878(func_0203b9cc(f.args, x, 1), o);
    self->n = n;
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)n)[3])(n, data_ov007_021c541c[0], data_ov007_021c541c[1]);
    ((void (*)(void *, uint32_t))(*(void ***)n)[8])(n, 0);
    ((void (*)(void *))(*(void ***)n)[10])(n);
    func_02056bc0(self->obj, self->n);
    func_02086ad4(f.v, (uint32_t)data_ov007_021c54fc, p);
    f.v[0] = (int8_t)(f.v[0] + 0x20);
    f.v[1] = (int8_t)(f.v[1] + 0x20);
    f.v[2] = (int8_t)(f.v[2] + 0x20);
    f.v[3] = (int8_t)(f.v[3] + 0x20);
    func_02005988(f.q, f.v);
    func_02068ddc(self->n, f.q);
    func_020059cc(f.q);
    if (p <= 0xf) {
        func_02021338(0xe7);
    }
    data_0213df20 = func_0204f7ec(data_0213df18);
}
