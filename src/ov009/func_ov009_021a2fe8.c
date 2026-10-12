#include "ffc/types.h"

extern uint32_t data_ov009_021b0764[];
extern void func_02056c4c(void *p);
extern void func_02056db0(void *p);

struct Vt;
typedef struct Obj {
    struct Vt *vt;
} Obj;

typedef struct Vt {
    uint32_t slot0;
    void (*del)(void *self);
} Vt;

void *func_ov009_021a2fe8(void *p)
{
    uint8_t *s = (uint8_t *)p;
    Obj *o;

    *(void **)s = data_ov009_021b0764;
    func_02056c4c(s + 0x14);

    o = *(Obj **)(s + 0x88);
    if (o) {
        if (o) o->vt->del(o);
        *(void **)(s + 0x88) = 0;
    }

    o = *(Obj **)(s + 0x90);
    if (o) {
        if (o) o->vt->del(o);
        *(void **)(s + 0x90) = 0;
    }

    func_02056db0(s);
    return s;
}
