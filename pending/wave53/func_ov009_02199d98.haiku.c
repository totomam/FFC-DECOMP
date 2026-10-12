#include "ffc/types.h"

extern void *func_0203b95c(uint32_t a, void *b, uint32_t c, uint32_t d);
extern void func_02056bf4(void *o);
extern void func_02056bc0(void *o, void *n);
extern uint32_t func_02064aa8(const void *o);
extern void func_0205f2f0(void *o, uint32_t v);
extern uint8_t data_ov009_021af7c0[];

typedef struct { uint32_t v[2]; } Pair;

void func_ov009_02199d98(void *self, uint32_t flag)
{
    void *obj;
    void **vt;
    uint32_t a;
    uint8_t *s;
    s = (uint8_t *)self;

    obj = *(void **)(s + 0x90);
    if (obj != 0) {
        if (*(uint8_t *)(s + 0xa2) == flag) {
            vt = *(void ***)obj;
            ((void (*)(void *, int, int))vt[14])(obj, 1, 0);
            obj = *(void **)(s + 0x90);
            vt = *(void ***)obj;
            ((void (*)(void *))vt[11])(obj);
        } else {
            func_02056bf4(*(void **)(s + 0x8c));
            obj = *(void **)(s + 0x90);
            if (obj != 0) {
                vt = *(void ***)obj;
                ((void (*)(void *))vt[1])(obj);
            }
            *(void **)(s + 0x90) = 0;
        }
    }

    if (*(void **)(s + 0x90) == 0) {
        if (flag) {
            a = *(uint32_t *)((uint8_t *)data_ov009_021af7c0 + 0x20);
        } else {
            a = *(uint32_t *)((uint8_t *)data_ov009_021af7c0 + 0xc);
        }
        obj = func_0203b95c(a, *(void **)(s + 0x84), 0, 1);
        *(void **)(s + 0x90) = obj;
        vt = *(void ***)obj;
        ((void (*)(void *, int, int))vt[14])(obj, 1, 0);

        {
            volatile Pair pr;
            Pair *pp = (Pair *)&pr;
            pp->v[0] = *(uint32_t *)(s + 0xa4) + 0x10;
            pp->v[1] = *(uint32_t *)(s + 0xa8);
            obj = *(void **)(s + 0x90);
            vt = *(void ***)obj;
            ((void (*)(void *, Pair))vt[3])(obj, *pp);
        }

        obj = *(void **)(s + 0x90);
        vt = *(void ***)obj;
        ((void (*)(void *, int))vt[8])(obj, 1);

        obj = *(void **)(s + 0x90);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[11])(obj);

        func_02056bc0(*(void **)(s + 0x8c), *(void **)(s + 0x90));
        func_0205f2f0((void *)func_02064aa8(*(void **)(s + 0x90)), 1);
    }
}
