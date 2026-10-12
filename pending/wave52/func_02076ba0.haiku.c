#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern void func_02076424(void *p);
extern void *func_02056aec(void *p);
extern void *func_020762f0(void *a, void *b, void *c, void *d);
extern uint32_t data_020b28c4[];

void func_02076ba0(void *self) {
    void *ret1;
    void *obj;
    void *r4;
    void *r6;
    void *t;
    void *v;

    ret1 = ((void *(*)(void *, int))(*(void ***)self)[5])(self, 8);
    obj = *(void **)((uint8_t *)self + 0x84);
    r4 = ((void *(*)(void *, void *))(*(void ***)obj)[0])(obj, ret1);
    func_02056bc0((uint8_t *)self + 0x48, r4);
    func_02076424(*(void **)((uint8_t *)self + 0x80));
    r6 = func_02056aec(r4);
    t = func_020762f0(*(void **)((uint8_t *)self + 0x80), *(void **)((uint8_t *)self + 0xa8),
                      *(void **)((uint8_t *)self + 0xac), *(void **)((uint8_t *)self + 0xb4));
    func_02056bc0(*(void **)((uint8_t *)self + 0x9c), t);
    func_02056bc0(*(void **)((uint8_t *)self + 0x9c), r6);
    v = ((void *(*)(void *))(*(void ***)self)[4])(self);
    func_02056bc0(*(void **)((uint8_t *)self + 0xa0), v);
    *(uint32_t *)((uint8_t *)self + 0x88) = data_020b28c4[0];
    *(uint32_t *)((uint8_t *)self + 0x8c) = data_020b28c4[1];
}
