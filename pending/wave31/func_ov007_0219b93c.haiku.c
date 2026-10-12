#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_0219ad00(void *n, void *a, void *b);
extern void *func_02056aec(void *obj);
extern void func_02056bc0(void *object, void *node);

void func_ov007_0219b93c(uint8_t *p)
{
    uint8_t *node;
    uint8_t *q;
    void *r6;

    node = (uint8_t *)func_0205681c(0xe0);
    if (node != 0) {
        node = (uint8_t *)func_ov007_0219ad00(node, *(void **)(p + 0x80), *(void **)(p + 0x84));
    }
    if ((int8_t)*(uint32_t *)(node + 0xc) == 0) {
        void **vt = *(void ***)node;
        ((void (*)(void *))vt[2])(node);
    }
    r6 = func_02056aec(p);
    q = p + 0x14;
    func_02056bc0(q, node);
    func_02056bc0(q, r6);
}
