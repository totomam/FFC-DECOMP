#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02021338(uint32_t x);
extern void func_02056c4c(void *x);
extern void *func_0203b95c(void *g, void *x, uint32_t y, uint32_t z);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_020aaddc[];

typedef struct { uint32_t a, b, c, d; } Q;
void func_02009cf4(uint8_t *self, Q q)
{
    uint32_t a=q.a,b=q.b,c=q.c,d=q.d;
    void *obj;
    Pair p1, p2, p3, p4;

    func_02021338(0xdd);
    func_02056c4c(*(void **)(self + 0x9c));

    obj = func_0203b95c(*(void **)(data_020aaddc + 0x14), *(void **)(self + 0xa0), 0, 1);
    p1.a = a;
    p1.b = b;
    ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, p1);
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)obj)[14])(obj, 1, 0);
    ((void (*)(void *))(*(void ***)obj)[10])(obj);
    func_02056bc0(*(void **)(self + 0x9c), obj);

    obj = func_0203b95c(*(void **)(data_020aaddc + 0x14), *(void **)(self + 0xa0), 0, 1);
    p2.a = c;
    p2.b = b;
    ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, p2);
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)obj)[14])(obj, 3, 0);
    ((void (*)(void *))(*(void ***)obj)[10])(obj);
    func_02056bc0(*(void **)(self + 0x9c), obj);

    obj = func_0203b95c(*(void **)(data_020aaddc + 0x14), *(void **)(self + 0xa0), 0, 1);
    p3.a = a;
    p3.b = d;
    ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, p3);
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)obj)[14])(obj, 2, 0);
    ((void (*)(void *))(*(void ***)obj)[10])(obj);
    func_02056bc0(*(void **)(self + 0x9c), obj);

    obj = func_0203b95c(*(void **)(data_020aaddc + 0x14), *(void **)(self + 0xa0), 0, 1);
    p4.a = c;
    p4.b = d;
    ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, p4);
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)obj)[14])(obj, 4, 0);
    ((void (*)(void *))(*(void ***)obj)[10])(obj);
    func_02056bc0(*(void **)(self + 0x9c), obj);
}
