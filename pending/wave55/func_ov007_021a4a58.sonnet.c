#include "ffc/types.h"

extern void *data_0213df20;
extern void *data_ov007_021c9708;
extern void *data_ov007_021c3bdc[];
extern void *data_020b93b8;
extern uint32_t data_ov007_021c4210[];

extern void func_0206047c(void *o);
extern void func_02060548(void *o, uint32_t v);
extern void func_02060574(void *o, uint32_t v);
extern void *func_0203b81c(uint32_t v);
extern void *func_0203b95c(void *o, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02064390(void *o, uint32_t a, uint32_t b);
extern void func_02056bc0(void *o, void *node);
extern void func_02055ae8(void *o, void *node);
extern void func_0201cf34(void *o, void *node);
extern void func_020849c4(void *o, void *n, uint32_t c);
extern uint32_t func_0205f8e0(void *o);
extern void *func_02060634(void *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void *func_0206d120(void *o, void *n, uint32_t a, uint32_t b, void *c);
extern void *func_0203b688(void);
extern void *func_0203b6fc(void);
extern uint32_t func_0203b6f0(void);

#define FP(p, off) (*(void **)((uint8_t *)(p) + (off)))
#define VCALL(o, off) (((void **)(*(void **)(o)))[(off) / 4])

void func_ov007_021a4a58(void *a)
{
    uint8_t *p = (uint8_t *)a;
    void *obj;
    void *r7;
    void *r4;
    void *r6;
    uint32_t s10;
    uint32_t k = 3;
    uint32_t s14;
    uint32_t s18[4];
    uint32_t s2c[39];
    void *t;

    func_0206047c(FP(data_0213df20, 0x20));
    obj = FP(data_0213df20, 0x20);
    func_02060548(obj, k);
    obj = FP(data_0213df20, 0x20);
    t = ((void *(*)(void *))VCALL(data_ov007_021c9708, 0x34))(data_ov007_021c9708);
    func_02060574(obj, (uint32_t)t);

    *(uint32_t *)(p + 0x110) = 0;
    *(void **)(p + 0x100) = func_0203b81c(10);
    *((uint8_t *)FP(p, 0x100) + 0x3c) = 1;
    *(void **)(p + 0x104) = func_0203b95c(data_ov007_021c3bdc[9], FP(p, 0x100), 0, 1);
    func_02064390(FP(p, 0x104), 0x80, 0x60);
    ((void (*)(void *, uint32_t))VCALL(FP(p, 0x104), 0x20))(FP(p, 0x104), k);
    ((void (*)(void *, uint32_t, uint32_t))VCALL(FP(p, 0x104), 0x38))(FP(p, 0x104), 1, 0);
    ((void (*)(void *))VCALL(FP(p, 0x104), 0x28))(FP(p, 0x104));

    *(void **)(p + 0x108) = func_0203b95c(data_ov007_021c3bdc[11], FP(p, 0x100), 0, 1);
    func_02064390(FP(p, 0x108), 0x88, 0x60);
    ((void (*)(void *, uint32_t, uint32_t))VCALL(FP(p, 0x108), 0x38))(FP(p, 0x108), 1, 0);
    ((void (*)(void *, uint32_t))VCALL(FP(p, 0x108), 0x20))(FP(p, 0x108), k);
    ((void (*)(void *))VCALL(FP(p, 0x108), 0x28))(FP(p, 0x108));

    *(void **)(p + 0x10c) = func_0203b95c(data_ov007_021c3bdc[11], FP(p, 0x100), 0, 1);
    func_02064390(FP(p, 0x10c), 0x78, 0x60);
    ((void (*)(void *, uint32_t, uint32_t))VCALL(FP(p, 0x10c), 0x38))(FP(p, 0x10c), 1, 0);
    ((void (*)(void *, uint32_t))VCALL(FP(p, 0x10c), 0x20))(FP(p, 0x10c), k);
    ((void (*)(void *))VCALL(FP(p, 0x10c), 0x28))(FP(p, 0x10c));

    r7 = FP(p, 0x100);
    {
    void *c10c = FP(p, 0x10c);
    void *c108 = FP(p, 0x108);
    r6 = p + 0x48;
    func_02056bc0(r6, FP(p, 0x104));
    func_02056bc0(r6, c108);
    func_02056bc0(r6, c10c);
    func_02056bc0(r6, r7);
    }
    func_02055ae8((uint8_t *)FP(p, 0xc8) + 0x14, p ? p + 0x80 : p);

    func_0201cf34(data_020b93b8, s2c);
    s14 = 2;
    func_020849c4(s2c, s18, 0x12);
    s10 = func_0205f8e0(FP(p, 0x100));
    r6 = func_02060634(FP(data_0213df20, 0x20), 0, 8, 10, 0, 0);
    r4 = func_0206d120(FP(p, 0xc8), &s14, 0x18, 0, p + 0xd4);
    r7 = func_0203b688();
    func_02056bc0(r7, r4);
    r4 = func_0203b6fc();
    func_02056bc0(r4, r7);
    func_02056bc0(r4, r6);
    r6 = p + 0x14;
    func_02056bc0(r6, r4);
    func_02056bc0(r6, (void *)s10);
    *(uint32_t *)(p + 0xdc) = func_0203b6f0();
    func_02056bc0(p + 0x48, (void *)*(uint32_t *)(p + 0xdc));
    *(uint32_t *)(p + 0xb8) = data_ov007_021c4210[0];
    *(uint32_t *)(p + 0xbc) = data_ov007_021c4210[1];
}
