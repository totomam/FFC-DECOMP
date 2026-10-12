#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t x);
extern void *func_0203b95c(void *mgr, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov007_021c5000[];
extern uint8_t data_ov007_021c4ed0[];

typedef struct {
    uint32_t b;
    uint32_t c;
} S2;

#define VSLOT(o, off) (((void **)(*(void **)(o)))[(off) / 4])

void *func_ov007_021ab5e0(void *this, uint32_t a1, S2 s)
{
    uint8_t *self = (uint8_t *)this;
    void *o;

    func_02056c9c(this, 0);
    *(void **)self = data_ov007_021c5000;

    o = func_0203b95c(*(void **)(data_ov007_021c4ed0 + 0x20), a1, 2, 1);
    *(void **)(self + 0x80) = o;
    ((void (*)(void *, uint32_t, uint32_t))VSLOT(o, 0x38))(o, 1, 0);
    func_02064390(*(void **)(self + 0x80), s.b - 8, s.c);
    o = *(void **)(self + 0x80);
    ((void (*)(void *, uint32_t))VSLOT(o, 0x20))(o, 2);
    o = *(void **)(self + 0x80);
    ((void (*)(void *))VSLOT(o, 0x28))(o);
    func_02056bc0(self + 0x48, *(void **)(self + 0x80));

    o = func_0203b95c(*(void **)(data_ov007_021c4ed0 + 0x20), a1, 2, 1);
    *(void **)(self + 0x88) = o;
    ((void (*)(void *, uint32_t, uint32_t))VSLOT(o, 0x38))(o, 2, 0);
    func_02064390(*(void **)(self + 0x88), s.b - 13, s.c);
    o = *(void **)(self + 0x88);
    ((void (*)(void *, uint32_t))VSLOT(o, 0x20))(o, 2);
    o = *(void **)(self + 0x88);
    ((void (*)(void *))VSLOT(o, 0x2c))(o);
    func_02056bc0(self + 0x48, *(void **)(self + 0x88));

    o = func_0203b95c(*(void **)(data_ov007_021c4ed0 + 0x20), a1, 2, 1);
    *(void **)(self + 0x84) = o;
    ((void (*)(void *, uint32_t, uint32_t))VSLOT(o, 0x38))(o, 1, 0);
    func_02064390(*(void **)(self + 0x84), s.b + 8, s.c);
    o = *(void **)(self + 0x84);
    ((void (*)(void *, uint32_t))VSLOT(o, 0x20))(o, 2);
    o = *(void **)(self + 0x84);
    ((void (*)(void *))VSLOT(o, 0x28))(o);
    func_02056bc0(self + 0x48, *(void **)(self + 0x84));

    o = func_0203b95c(*(void **)(data_ov007_021c4ed0 + 0x20), a1, 2, 1);
    *(void **)(self + 0x8c) = o;
    ((void (*)(void *, uint32_t, uint32_t))VSLOT(o, 0x38))(o, 2, 0);
    func_02064390(*(void **)(self + 0x8c), s.b + 3, s.c);
    o = *(void **)(self + 0x8c);
    ((void (*)(void *, uint32_t))VSLOT(o, 0x20))(o, 2);
    o = *(void **)(self + 0x8c);
    ((void (*)(void *))VSLOT(o, 0x2c))(o);
    func_02056bc0(self + 0x48, *(void **)(self + 0x8c));

    return this;
}
