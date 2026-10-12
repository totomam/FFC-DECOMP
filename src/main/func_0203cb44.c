#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair8;
typedef struct {
    uint8_t pad0[0x14];
    uint8_t node[0x6c];
    Pair8 v;
    uint32_t f88;
    uint32_t f8c;
    uint8_t pad2[0xd0 - 0x90];
    uint32_t fd0;
} Obj;

extern void func_0203cac0(void *obj);
extern uint32_t func_0203c848(void *obj, int32_t flag);
extern void func_02056bc0(void *object, void *node);
extern Pair8 data_020aece0;

void func_0203cb44(Obj *p)
{
    p->fd0 = 1;
    if (p->f8c != 0) {
        func_0203cac0(p);
    }
    func_02056bc0(p->node, (void *)func_0203c848(p, 1));
    p->v = data_020aece0;
}
