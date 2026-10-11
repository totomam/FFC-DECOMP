#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_0203a588(void *obj, uint32_t arg);

typedef struct Obj {
    void (**vt)(struct Obj *);
    uint8_t pad[0x08];
    uint32_t flag;
} Obj;

void *func_02041d88(uint8_t *p) {
    Obj *o = (Obj *)func_0205681c(0x90);
    if (o != 0) {
        o = (Obj *)func_0203a588(o, *(uint32_t *)(p + 0x90));
    }
    if ((int8_t)o->flag == 0) {
        Obj *t = o;
        t->vt[2](t);
    }
    return o;
}
