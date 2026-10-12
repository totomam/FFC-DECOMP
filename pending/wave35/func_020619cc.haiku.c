#include "ffc/types.h"

typedef struct Obj Obj;
struct Obj {
    void **vt;
};

typedef struct List {
    uint8_t pad[0x18];
    Obj **begin;
    uint32_t count;
} List;

void func_020619cc(uint32_t *out, List *p, uint32_t arg)
{
    Obj **it;
    Obj **end = (Obj **)((char *)p->begin + p->count * 4);
    for (it = p->begin; it != end; it++) {
        if (((int (*)(Obj *, uint32_t))(*it)->vt[4])(*it, arg)) {
            ((void (*)(uint32_t *, Obj *, uint32_t))(*it)->vt[3])(out, *it, arg);
            return;
        }
        end = (Obj **)((char *)p->begin + p->count * 4);
    }
    out[0] = 0;
    out[1] = 0;
}
