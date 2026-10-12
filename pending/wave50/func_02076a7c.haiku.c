#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b289c[];

typedef struct Obj {
    void **vt;
    uint8_t pad[0x84 - 4];
    struct Obj *sub;
} Obj;

typedef struct Pair { uint32_t a; uint32_t b; } Pair;

void func_02076a7c(void *self)
{
    void *n1 = ((void *(*)(void *, int))((Obj *)self)->vt[5])(self, 5);
    Obj *o1 = ((Obj *)self)->sub;
    void *n2 = ((void *(*)(void *, void *))o1->vt[1])(o1, n1);
    func_02056bc0((uint8_t *)self + 0x14, n2);
    void *n3 = ((void *(*)(void *, int))((Obj *)self)->vt[5])(self, 6);
    Obj *o2 = ((Obj *)self)->sub;
    void *n4 = ((void *(*)(void *, void *, void *))o2->vt[2])(o2, n3, (uint8_t *)self + 0x94);
    func_02056bc0((uint8_t *)self + 0x14, n4);
    *(Pair *)((uint8_t *)self + 0x88) = *(Pair *)data_020b289c;
}
