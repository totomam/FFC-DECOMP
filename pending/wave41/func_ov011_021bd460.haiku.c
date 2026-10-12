#include "ffc/types.h"

typedef void (*VFn)(void *, int, int);

extern uint32_t func_020655dc(void *obj, int a, int b);
extern uint32_t func_020655b8(void *obj);
extern void func_02056bc0(void *object, void *node);
extern void func_ov011_021be360(void *p);
extern void func_02021338(int v);

void func_ov011_021bd460(uint8_t *self)
{
    void *p1 = *(void **)(self + 0x98);
    void *p2;
    uint32_t r6, r7, r0;
    void *node;

    (*(VFn *)((uint8_t *)(*(void **)p1) + 0x38))(p1, 4, 1);
    p2 = *(void **)(self + 0x9c);
    (*(VFn *)((uint8_t *)(*(void **)p2) + 0x38))(p2, 4, 1);

    p2 = *(void **)(self + 0x9c);
    r6 = func_020655dc(p2, 3, 0);
    p1 = *(void **)(self + 0x98);
    r7 = func_020655dc(p1, 3, 0);
    r0 = func_020655b8(*(void **)(self + 0x98));

    node = self + 0x14;
    func_02056bc0(node, (void *)r0);
    func_02056bc0(node, (void *)r7);
    func_02056bc0(node, (void *)r6);

    func_ov011_021be360(*(void **)(self + 0x94));
    func_02021338(0xb3);
}
