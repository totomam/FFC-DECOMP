#include "ffc/types.h"

struct Sub {
    uint32_t x;
    void *p4;
    void *p8;
    uint8_t f12;
};

extern uint8_t data_ov003_02179804[];
extern uint8_t data_ov003_02179824[];
extern uint32_t data_0213df18[];

extern void func_02056c4c(void *p);
extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void func_0203bf28(int a, int b, int c, int d, int e, int f);
extern void func_0204f550(uint32_t v);
extern void func_02056858(void *p);
extern void func_ov003_0214e2cc(void *p);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);
extern void func_02050c28(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov003_02146040(void *self)
{
    uint8_t *p = (uint8_t *)self;
    struct Sub *s;

    *(void **)p = data_ov003_02179804;
    *(void **)(p + 0x80) = data_ov003_02179824;
    func_02056c4c(p + 0x48);

    if (*(uint8_t *)(p + 0x3d0) == 0) {
        func_0203be8c();
        if (**(uint32_t **)(p + 0x214) == 0) {
            func_0203bea0();
        }
        func_0203bed8(5, 3, 4, 1, 0, 0);
        if (**(uint32_t **)(p + 0x214) == 0) {
            func_0203bf28(5, 2, 4, 1, 0, 0);
        }
        func_0204f550(data_0213df18[0]);
    }

    if (*(uint32_t *)(p + 0x400) != 0) {
        func_02056858(*(void **)(p + 0x400));
        *(uint32_t *)(p + 0x400) = 0;
    }
    if (*(uint32_t *)(p + 0x404) != 0) {
        func_02056858(*(void **)(p + 0x404));
        *(uint32_t *)(p + 0x404) = 0;
    }

    func_ov003_0214e2cc(p + 0x3e0);
    func_ov003_0214e2cc(p + 0x3d4);

    s = (struct Sub *)(p + 0x384);
    if (s->p4 != 0) {
        if (s->f12 != 0) {
            func_02052d3c(s->p4, s->p8);
        }
        func_02052c04(s->p4);
    }
    func_02053290(s);

    s = (struct Sub *)(p + 0x374);
    if (s->p4 != 0) {
        if (s->f12 != 0) {
            func_02052d3c(s->p4, s->p8);
        }
        func_02052c04(s->p4);
    }
    func_02053290(s);

    s = (struct Sub *)(p + 0x364);
    if (s->p4 != 0) {
        if (s->f12 != 0) {
            func_02052d3c(s->p4, s->p8);
        }
        func_02052c04(s->p4);
    }
    func_02053290(s);

    s = (struct Sub *)(p + 0x354);
    if (s->p4 != 0) {
        if (s->f12 != 0) {
            func_02052d3c(s->p4, s->p8);
        }
        func_02052c04(s->p4);
    }
    func_02053290(s);

    s = (struct Sub *)(p + 0x344);
    if (s->p4 != 0) {
        if (s->f12 != 0) {
            func_02052d3c(s->p4, s->p8);
        }
        func_02052c04(s->p4);
    }
    func_02053290(s);

    func_02050c28(p + 0x8c);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
