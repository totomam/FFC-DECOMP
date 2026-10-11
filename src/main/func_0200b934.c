#include "ffc/types.h"

extern uint8_t data_020ab024[];
extern void func_02061344(void *p);
extern void func_02061338(void *p);

typedef struct {
    void *vt;
    uint8_t pad[0x18];
    void *arr[2];
} Obj;

void *func_0200b934(void *p)
{
    Obj *o = (Obj *)p;
    uint32_t i;

    o->vt = data_020ab024;
    for (i = 0; i < 2; i++) {
        if (o->arr[i] != 0) {
            func_02061344(o->arr[i]);
        }
    }
    func_02061338(o);
    return o;
}
