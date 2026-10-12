#include "ffc/types.h"

extern void func_0208763c(void *object);
extern void func_02087678(void *object);
extern void func_02056c4c(void *object);
extern uint32_t func_0204f7d4(const void *object);
extern void *func_0203b77c(void *object, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_0203b9cc(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0203b878(uint32_t a, void *node);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_02005988(void *a, void *b);
extern void func_02068ddc(void *a, void *b);
extern void *func_020059cc(void *object);
extern void func_02021338(uint32_t code);
extern uint32_t func_0204f7ec(const void *object);
extern uint32_t data_0213df18;
extern uint32_t data_0213df20;
extern uint32_t data_ov011_021cbda4[];
extern uint32_t data_ov011_021cbac8[];
extern uint32_t data_ov011_021cbdbc[];

typedef struct {
    uint8_t pad0[0x12];
    uint8_t flag;
    uint8_t pad1;
    uint32_t f14;
} Obj;

void func_ov011_021c9824(uint8_t *self, uint32_t p1)
{
    Obj *o = *(Obj **)(self + 0x3cc);
    uint32_t ok;
    uint32_t tmp;
    void *ob;
    void *x;
    uint8_t m[0x20];
    uint8_t flag = o->flag;
    uint8_t *sub = (uint8_t *)o + 0x1c;

    if (flag) {
        func_0208763c(sub);
    }
    ok = (o->f14 == 0);
    if (flag) {
        func_02087678(sub);
    }
    if (!ok) {
        func_02056c4c(*(void **)(self + 0x3cc));
    }
    data_0213df20 = func_0204f7d4((void *)data_0213df18);

    ob = func_0203b77c(data_ov011_021cbda4, 0, 0, 0);
    tmp = (*(uint32_t (**)(void *))((*(uint32_t **)ob)[8]))(ob);
    tmp = func_0203b9cc(0x20, 0x10, tmp, 1);
    x = func_0203b878(tmp, ob);
    *(void **)(self + 0x3d0) = x;
    ((void (**)(void *, uint32_t, uint32_t))(*(uint32_t **)x))[3](x, data_ov011_021cbac8[0], data_ov011_021cbac8[1]);
    x = *(void **)(self + 0x3d0);
    ((void (**)(void *, uint32_t))(*(uint32_t **)x))[8](x, 0);
    x = *(void **)(self + 0x3d0);
    ((void (**)(void *))(*(uint32_t **)x))[10](x);
    func_02056bc0(*(void **)(self + 0x3cc), *(void **)(self + 0x3d0));

    func_02086ad4(m + 0x1c, (uint32_t)data_ov011_021cbdbc, p1);
    ((int8_t *)m)[0x1c] += 0x20;
    ((int8_t *)m)[0x1d] += 0x20;
    ((int8_t *)m)[0x1e] += 0x20;
    ((int8_t *)m)[0x1f] += 0x20;
    func_02005988(m, m + 0x1c);
    func_02068ddc(*(void **)(self + 0x3d0), m);
    func_020059cc(m);
    if (p1 <= 0xf) {
        func_02021338(0xe7);
    }
    data_0213df20 = func_0204f7ec((void *)data_0213df18);
}
