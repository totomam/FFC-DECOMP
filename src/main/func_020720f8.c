#include "ffc/types.h"

extern uint32_t data_020b24f8[];
extern void func_02056858(void *p);
extern void func_02056844(void *p);

typedef struct Obj {
    void *vtbl;
    uint32_t pad04;
    uint32_t count;
    void *buf0c;
    void **arr;
} Obj;

Obj *func_020720f8(Obj *p)
{
    uint32_t i;

    p->vtbl = data_020b24f8;
    for (i = 0; i < p->count; i++) {
        void *item = p->arr[i];
        if (item != 0) {
            void (*fn)(void *) = (void (*)(void *))((void **)(*(void **)item))[1];
            fn(item);
        }
        p->arr[i] = 0;
    }
    func_02056858(p->arr);
    p->arr = 0;
    func_02056858(p->buf0c);
    p->buf0c = 0;
    func_02056844(p);
    return p;
}
