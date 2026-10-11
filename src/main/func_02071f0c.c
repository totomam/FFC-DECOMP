#include "ffc/types.h"

extern void func_02056844(void *p);
extern uint8_t data_020b2518[];

typedef struct Obj {
    void *vtbl;
    uint32_t f4;
    void *ptr;
    uint8_t flag;
} Obj;

Obj *func_02071f0c(Obj *p)
{
    p->vtbl = data_020b2518;
    if (p->flag != 0) {
        func_02056844(p->ptr);
        p->ptr = 0;
    }
    return p;
}
