#include "ffc/types.h"

extern uint8_t data_020b0d38[];
extern void func_02056858(void *p);
extern void func_02058eb0(void *p);

typedef struct {
    void *ptr;
    int16_t s;
    int16_t t;
} Elem;

typedef struct {
    void *vt;
    uint8_t pad0[0x34 - 4];
    Elem *arr;
    uint32_t count;
    uint8_t pad1[0x54 - 0x3c];
    void *f54;
} Obj;

Obj *func_020587ac(Obj *p)
{
    Elem *e;
    Elem *end;

    p->vt = data_020b0d38;
    func_02056858(p->f54);
    e = p->arr;
    end = (Elem *)((uint8_t *)e + p->count * 8);
    if (e != end) {
        do {
            if (e->s != 0) {
                func_02056858(e->ptr);
            }
            e++;
        } while (e != (Elem *)((uint8_t *)p->arr + p->count * 8));
    }
    func_02058eb0(&p->arr);
    return p;
}
