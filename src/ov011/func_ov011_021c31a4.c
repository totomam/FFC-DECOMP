#include "ffc/types.h"

extern void func_ov011_021c10b4(void *x);
extern void func_02056c4c(void *x);
extern void *func_020655dc(void *obj, int a, int b);
extern void *func_020655b8(void *obj);
void func_02056bc0(void *object, void *node);
extern void func_02021338(int x);

typedef void (*VFn)(void *self, int a, int b);

void func_ov011_021c31a4(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    uint8_t *q;
    void *obj;
    void *r4;
    void *node;

    func_ov011_021c10b4(*(void **)(p + 0x9c));
    obj = *(void **)(p + 0x98);
    ((VFn *)(*(void **)obj))[14](obj, 2, 1);
    func_02056c4c(p + 0x14);
    r4 = func_020655dc(*(void **)(p + 0x98), 1, 0);
    node = func_020655b8(*(void **)(p + 0x98));
    q = p + 0x14;
    func_02056bc0(q, node);
    func_02056bc0(q, r4);
    func_02021338(0xb6);
}
