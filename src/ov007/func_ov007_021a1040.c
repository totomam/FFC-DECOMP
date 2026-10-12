#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void *func_020655dc(void *p, int a, int b);
extern void *func_020655b8(void *p);
extern void func_02056bc0(void *object, void *node);
extern void func_ov007_021a051c(void *p, uint8_t v);
extern void func_02021338(int v);

typedef void (*vfn_t)(void *, int, int);

void func_ov007_021a1040(uint8_t *p)
{
    void *obj;
    void *tmp;
    void *node;
    uint8_t *q;

    obj = *(void **)(p + 0x98);
    if (obj != 0) {
        vfn_t f = *(vfn_t *)((uint8_t *)(*(uint32_t *)obj) + 0x38);
        f(obj, 2, 1);
        func_02056c4c(p + 0x14);
        tmp = func_020655dc(*(void **)(p + 0x98), 1, 0);
        node = func_020655b8(*(void **)(p + 0x98));
        q = p + 0x14;
        func_02056bc0(q, node);
        func_02056bc0(q, tmp);
    }
    func_ov007_021a051c(*(void **)(p + 0x94), *(uint8_t *)(p + 0x9c));
    func_02021338(0xcd);
}
