#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02056830(uint32_t size);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_02092878(void *dst, const uint8_t *src);
extern uint32_t data_020b23a8;

struct Obj {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t flags;
    uint32_t f10;
    void *a;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint8_t *name;
    uint32_t f2c;
    uint32_t f30;
    void **arr;
    int32_t count;
    uint32_t f3c;
    uint32_t f40;
    uint32_t p5;
    uint32_t p6;
};

void *func_02074240(void *a, const uint8_t *name, const uint8_t *const *list, int32_t count, uint32_t p5, uint32_t p6)
{
    struct Obj *o;
    int32_t i;
    uint32_t one = 1;

    o = (struct Obj *)func_0205681c(0x4c);
    if (o != 0) {
        o->flags &= ~0xffu;
        o->a = a;
        o->f18 = 0;
        o->f1c = 0;
        o->vt = (void *)&data_020b23a8;
        o->f24 = one;
        o->name = 0;
        o->f2c = 0;
        o->f30 = 0;
        o->arr = 0;
        o->count = count;
        o->f3c = 0;
        o->f40 = 0;
        o->p5 = p5;
        o->p6 = p6;
        o->name = (uint8_t *)func_02056830((func_02092864(name) + 1) * one);
        func_02092878(o->name, name);
        o->arr = (void **)func_02056830(o->count * 4);
        if (o->count > 0) {
            i = 0;
            do {
                uint32_t sz = 1;
                o->arr[i] = func_02056830((func_02092864(list[i]) + 1) * sz);
                func_02092878(o->arr[i], list[i]);
                i++;
            } while (i < o->count);
        }
    }
    return o;
}
