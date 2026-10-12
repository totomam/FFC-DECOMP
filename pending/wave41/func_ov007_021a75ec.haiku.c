#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void *func_ov007_021a7418(void *x);
extern void *func_0203b918(void *a, void *b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern char data_ov007_021c4538[];

void *func_ov007_021a75ec(void *p, void *a, void *b, ...)
{
    uint8_t *self = (uint8_t *)p;
    void **vt;
    void **ap = (void **)&b + 1;

    func_02069210(p);
    *(void **)self = data_ov007_021c4538;
    *(void **)(self + 0x94) = a;
    *(void **)(self + 0x98) = func_0203b918(b, func_ov007_021a7418(a), 2, 1);

    vt = *(void ***)(*(void **)(self + 0x98));
    ((void (*)(void *, int, int))vt[14])(*(void **)(self + 0x98), 1, 0);

    vt = *(void ***)(*(void **)(self + 0x98));
    ((void (*)(void *, void *, void *))vt[3])(*(void **)(self + 0x98), ap[0], ap[1]);

    vt = *(void ***)(*(void **)(self + 0x98));
    ((void (*)(void *, int))vt[8])(*(void **)(self + 0x98), 1);

    vt = *(void ***)(*(void **)(self + 0x98));
    ((void (*)(void *))vt[10])(*(void **)(self + 0x98));

    func_02056bc0(self + 0x48, *(void **)(self + 0x98));
    return p;
}
