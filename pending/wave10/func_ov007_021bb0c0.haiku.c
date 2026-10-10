#include "ffc/types.h"

extern void func_ov007_021ba8b8(void *p);
extern void *func_020655dc(void *obj, int a, int b);
extern void *func_020655b8(void *obj);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(uint32_t x);

void func_ov007_021bb0c0(uint8_t *p)
{
    void *obj;
    void *node;
    void *n2;
    uint8_t *q;
    void **vt;

    func_ov007_021ba8b8(*(void **)(p + 0x94));

    obj = *(void **)(p + 0x98);
    vt = *(void ***)obj;
    ((void (*)(void *, int, int))vt[0x38 / 4])(obj, 2, 1);

    node = func_020655dc(*(void **)(p + 0x98), 1, 0);
    n2 = func_020655b8(*(void **)(p + 0x98));
    q = p + 0x14;
    func_02056bc0(q, n2);
    func_02056bc0(q, node);
    func_02021338(0xb6);
}
