#include "ffc/types.h"

typedef struct Pair {
    void *a;
    void *b;
} Pair;

extern void func_02069210(void *object);
extern void *func_ov002_021b866c(void *p);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov002_021d6210[];
extern uint8_t data_ov002_021d6094[];

void *func_ov002_021b8024(uint8_t *obj, void *p1, void *p2, uint8_t *p3)
{
    Pair s;

    func_02069210(obj);
    *(uint8_t **)obj = data_ov002_021d6210;
    *(void **)(obj + 0x98) = p1;
    *(void **)(obj + 0x9c) = p2;
    *(uint32_t *)(obj + 0xa0) = 0;
    *(uint32_t *)(obj + 0xa4) = 0;
    *(void **)(obj + 0xa8) = p3;

    *(void **)(obj + 0x94) = func_0203b95c(*(void **)(data_ov002_021d6094 + 8), func_ov002_021b866c(p1), 0, 1);
    if (*(void **)(obj + 0x94) != 0) {
        func_0205f2f0((void *)func_02064aa8(*(void **)(obj + 0x94)), 1);
        s.a = (uint8_t *)*(void **)(p3 + 0x14) + 0x80;
        s.b = (uint8_t *)*(void **)(p3 + 0x18) + 0xb4;
        ((void (*)(void *, Pair))((void **)*(void **)*(void **)(obj + 0x94))[3])(*(void **)(obj + 0x94), s);
        ((void (*)(void *, uint32_t))((void **)*(void **)*(void **)(obj + 0x94))[8])(*(void **)(obj + 0x94), 1);
        ((void (*)(void *, uint32_t))((void **)*(void **)*(void **)(obj + 0x94))[15])(*(void **)(obj + 0x94), 1);
        ((void (*)(void *))((void **)*(void **)*(void **)(obj + 0x94))[10])(*(void **)(obj + 0x94));
        func_02056bc0(obj + 0x48, *(void **)(obj + 0x94));
    }
    return obj;
}
