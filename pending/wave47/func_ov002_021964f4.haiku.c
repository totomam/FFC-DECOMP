#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } Pair;

extern void *data_020b93b8;
extern void *data_0213df18;
extern uint32_t data_ov002_021d4760[];
extern uint32_t data_ov002_021d47f0[];

extern void func_0201b180(void *obj, uint32_t a, uint32_t b);
extern void func_0201bcf4(void *obj, uint32_t a, uint32_t b);
extern void func_0201cf34(void *obj, void *buf);
extern void func_0201ce70(void *obj, void *buf);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_0203b828(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0203b95c(uint32_t a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern void *func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b9b4(uint32_t x);
extern void func_02057958(void);

void func_ov002_021964f4(uint8_t *a)
{
    uint32_t buf[38];
    void **p;
    void *r4;
    void *r6;

    func_0201b180(data_020b93b8, 0, 0);
    func_0201bcf4(data_020b93b8, 5, 1);

    p = *(void ***)(a + 0x88);
    if (!(int8_t)((uint32_t *)p)[3]) {
        ((void (*)(void *))(*(void ***)p)[2])(p);
    }

    func_0201cf34(data_020b93b8, buf);
    buf[7] &= 0xff0000ffu;
    func_0201ce70(data_020b93b8, buf);

    r6 = func_0203b828(func_0204f7ec(data_0213df18), 1, 1, 0);
    r4 = func_0203b95c(data_ov002_021d4760[1], r6, 0, 1);
    func_02064390(r4, 0x80, 0x60);
    func_0205f2f0(func_02064aa8(r4), 1);
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)r4)[14])(r4, 1, 0);
    ((void (*)(void *))(*(void ***)r4)[10])(r4);

    func_02056bc0(a + 0x48, r4);
    func_02056bc0(a + 0x48, r6);

    r4 = func_0203b9b4(1);
    func_02057958();
    *(uint32_t *)(a + 0x8c) = ((uint32_t (*)(void *, uint32_t))(*(void ***)r4)[9])(r4, 0);

    func_02056bc0(a + 0x48, r4);

    *(Pair *)(a + 0x80) = *(Pair *)data_ov002_021d47f0;
}
