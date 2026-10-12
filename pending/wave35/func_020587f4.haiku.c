#include "ffc/types.h"

extern uint8_t data_020b0d38[];
extern void func_02056858(void *p);
extern void func_02058eb0(void *p);
extern void func_02056844(void *p);

typedef struct Elem {
    void *ptr;
    int16_t flag;
    int16_t pad;
} Elem;

typedef struct Obj {
    void *vtbl;
    uint8_t pad0[0x34 - 4];
    Elem *arr;
    uint32_t count;
    uint8_t pad1[0x54 - 0x3c];
    void *x;
} Obj;

void *func_020587f4(void *p) {
    Obj *o = (Obj *)p;
    Elem *e;

    o->vtbl = data_020b0d38;
    func_02056858(o->x);
    e = o->arr;
    if (e != (Elem *)((uint32_t)o->arr + o->count * sizeof(Elem))) {
        do {
            if (e->flag != 0) {
                func_02056858(e->ptr);
            }
            e++;
        } while (e != (Elem *)((uint32_t)o->arr + o->count * sizeof(Elem)));
    }
    func_02058eb0(&o->arr);
    func_02056844(o);
    return o;
}
