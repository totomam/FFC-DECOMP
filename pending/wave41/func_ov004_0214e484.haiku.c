#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_01ffd020(void *obj);
extern void func_02056c4c(void *obj);
extern void *func_02056dd4(void *obj);
extern void func_02060548(uint32_t a, int b);
extern void func_02060e88(uint32_t a, int b);
extern void func_0206047c(uint32_t a);
extern void func_02060e80(void *object);
extern Pair data_ov004_0215968c;

void func_ov004_0214e484(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *obj;
    void *s;
    void **vt;
    void *v;

    func_01ffd020(*(void **)(p + 0x90));
    obj = *(uint8_t **)(p + 0xa8);
    if (obj != 0) {
        func_02056c4c(*(void **)(obj + 0x94));
        func_02056c4c(obj + 0x14);
        v = *(void **)(obj + 0x88);
        vt = *(void ***)v;
        ((void (*)(void *))vt[11])(v);
        *(uint8_t *)(obj + 0x90) = 1;
        s = func_02056dd4(obj);
        func_02060548(*(uint32_t *)((uint8_t *)s + 0x20), 0);
        s = func_02056dd4(obj);
        func_02060e88(*(uint32_t *)((uint8_t *)s + 0x24), 0);
        s = func_02056dd4(obj);
        func_0206047c(*(uint32_t *)((uint8_t *)s + 0x20));
        s = func_02056dd4(obj);
        func_02060e80(*(void **)((uint8_t *)s + 0x24));
        {
            Pair pr = data_ov004_0215968c;
            *(Pair *)(obj + 0x80) = pr;
        }
    }
}
