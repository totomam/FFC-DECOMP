#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S;

extern void *func_02069210(void *object);
extern void *func_0203b918(void *a, void *b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern char data_ov011_021cbcf4[];

void *func_ov011_021c7948(void *this_, void *p1, void *p2, S s)
{
    uint8_t *self = (uint8_t *)this_;
    void *obj;
    void **pp;

    func_02069210(this_);
    *(char **)self = data_ov011_021cbcf4;
    *(void **)(self + 0x94) = p1;
    obj = func_0203b918(p2, *(void **)((uint8_t *)p1 + 0xb8), 2, 1);
    *(void **)(self + 0x98) = obj;
    ((void (*)(void *, int, int))(*(void ***)obj)[14])(obj, 1, 0);
    ((void (*)(void *, S))(*(void ***)*(void **)(self + 0x98))[3])(*(void **)(self + 0x98), s);
    ((void (*)(void *, int))(*(void ***)*(void **)(self + 0x98))[8])(*(void **)(self + 0x98), 2);
    ((void (*)(void *))(*(void ***)*(void **)(self + 0x98))[10])(*(void **)(self + 0x98));
    pp = (void **)(self + 0x98);
    func_02056bc0(self + 0x48, *pp);
    return this_;
}
