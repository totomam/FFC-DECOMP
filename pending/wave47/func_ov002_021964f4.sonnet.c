/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } Pair;
struct O { virtual void d0();
virtual void d1();
virtual void d2();
virtual void d3();
virtual void d4();
virtual void d5();
virtual void d6();
virtual void d7();
virtual void d8();
virtual uint32_t m9(uint32_t);
virtual void m10();
virtual void d11();
virtual void d12();
virtual void d13();
virtual void m14(uint32_t,uint32_t);
virtual void d15();
virtual void d16();
virtual void d17();
virtual void d18();
virtual void d19();
};

extern "C" void *data_020b93b8;
extern "C" void *data_0213df18;
extern "C" uint32_t data_ov002_021d4760[];
extern "C" Pair data_ov002_021d47f0;

extern "C" void func_0201b180(void *obj, uint32_t a, uint32_t b);
extern "C" void func_0201bcf4(void *obj, uint32_t a, uint32_t b);
extern "C" void func_0201cf34(void *obj, void *buf);
extern "C" void func_0201ce70(void *obj, void *buf);
extern "C" uint32_t func_0204f7ec(const void *object);
extern "C" void *func_0203b828(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern "C" void *func_0203b95c(uint32_t a, void *b, uint32_t c, uint32_t d);
extern "C" uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern "C" void *func_02064aa8(const void *object);
extern "C" void func_0205f2f0(void *object, uint32_t value);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" void *func_0203b9b4(uint32_t x);
extern "C" void func_02057958(void);

extern "C" void func_ov002_021964f4(uint8_t *a)
{
    uint32_t buf[38];
    void **p;
    O *r4;
    uint8_t *q;
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
    r4 = (O *)func_0203b95c(data_ov002_021d4760[1], r6, 0, 1);
    func_02064390(r4, 0x80, 0x60);
    func_0205f2f0(func_02064aa8(r4), 1);
    r4->m14(1,0);
    r4->m10();

    q = a + 0x48;
    func_02056bc0(q, r4);
    func_02056bc0(q, r6);

    r4 = (O *)func_0203b9b4(1);
    func_02057958();
    *(uint32_t *)(a + 0x8c) = r4->m9(0);

    func_02056bc0(a + 0x48, r4);

    Pair *src = &data_ov002_021d47f0;
    uint32_t x = src->x, y = src->y;
    *(uint32_t *)(a + 0x80) = x;
    *(uint32_t *)(a + 0x84) = y;
}
