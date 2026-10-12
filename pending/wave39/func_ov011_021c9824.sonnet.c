#include "ffc/types.h"

extern void func_0208763c(void *object);
extern void func_02087678(void *object);
extern void func_02056c4c(void *object);
extern uint32_t func_0204f7d4(const void *object);
extern void *func_0203b77c(void *object, void *a, uint32_t b, uint8_t c);
typedef struct { uint32_t a, b; } S;
extern uint32_t func_0203b9cc(S s, uint32_t c, uint32_t d);
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
    struct { uint8_t pad[8]; S s; uint8_t o2[12]; uint8_t b2[16]; } L;
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
    L.s.a = 0x20; L.s.b = 0x10;
    tmp = ((uint32_t (**)(void *))(*(uint32_t **)ob))[8](ob);
    tmp = func_0203b9cc(L.s, tmp, 1);
    x = func_0203b878(tmp, ob);
    *(void **)(self + 0x3d0) = x;
    ((void (**)(void *, S))(*(uint32_t **)x))[3](x, *(S *)data_ov011_021cbac8);
    x = *(void **)(self + 0x3d0);
    ((void (**)(void *, void *))(*(uint32_t **)x))[8](x, (void *)0);
    x = *(void **)(self + 0x3d0);
    ((void (**)(void *))(*(uint32_t **)x))[10](x);
    func_02056bc0(*(void **)(self + 0x3cc), *(void **)(self + 0x3d0));

    func_02086ad4(L.b2, (uint32_t)data_ov011_021cbdbc, p1);
    ((int8_t *)L.b2)[0] += 0x20;
    ((int8_t *)L.b2)[1] += 0x20;
    ((int8_t *)L.b2)[2] += 0x20;
    ((int8_t *)L.b2)[3] += 0x20;
    func_02005988(L.o2, L.b2);
    func_02068ddc(*(void **)(self + 0x3d0), L.o2);
    func_020059cc(L.o2);
    if (p1 <= 0xf) {
        func_02021338(0xe7);
    }
    data_0213df20 = func_0204f7ec((void *)data_0213df18);
}
