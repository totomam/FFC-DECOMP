#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t data_020b8e44;
extern uint32_t func_0200c6c4(void *self);
extern uint32_t func_02015938(uint32_t a);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern void func_0200bd44(uint32_t a, Pair p);

void func_0200c9e0(void *self)
{
    Pair d;
    Pair t1;
    Pair t2;
    void *o;
    void (*fn)(void *);
    uint32_t r4, r6;

    if (*(uint8_t *)((uint8_t *)self + 0xfa) && func_0200c6c4(self) && !*(uint8_t *)((uint8_t *)self + 0xf9)) {
        o = *(void **)((uint8_t *)self + 0xa4);
        fn = (void (*)(void *))((uint32_t *)*(uint32_t **)o)[10];
    } else {
        o = *(void **)((uint8_t *)self + 0xa4);
        fn = (void (*)(void *))((uint32_t *)*(uint32_t **)o)[11];
    }
    fn(o);

    if (*(uint32_t *)((uint8_t *)self + 0xcc) != 0) {
        *(uint32_t *)((uint8_t *)self + 0xcc) -= 1;
        r4 = *(uint32_t *)((uint8_t *)self + 0xcc);
        r6 = func_0206c184(func_02015938(data_020b8e44), r4 * 2 + 1) - r4;
        d.a = func_0206c184(func_02015938(data_020b8e44), r4 * 2 + 1) - *(uint32_t *)((uint8_t *)self + 0xcc);
        d.b = r6;

        if (*(uint32_t *)((uint8_t *)self + 0x8c)) {
            func_0200bd44(*(uint32_t *)((uint8_t *)self + 0x8c), d);
        }
        if (*(uint32_t *)((uint8_t *)self + 0x88)) {
            void *o88 = *(void **)((uint8_t *)self + 0x88);
            t1.a = *(uint32_t *)((uint8_t *)self + 0xc4) + d.a;
            t1.b = *(uint32_t *)((uint8_t *)self + 0xc8) + d.b;
            ((void (*)(void *, Pair))((uint32_t *)*(uint32_t **)o88)[3])(o88, t1);
        }
        {
            void *o94 = *(void **)((uint8_t *)self + 0x94);
            t2.a = *(uint32_t *)((uint8_t *)self + 0xbc) + d.a;
            t2.b = *(uint32_t *)((uint8_t *)self + 0xc0) + d.b;
            ((void (*)(void *, Pair))((uint32_t *)*(uint32_t **)o94)[3])(o94, t2);
        }
    }
}
