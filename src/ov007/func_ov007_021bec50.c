#include "ffc/types.h"

extern void func_02069694(void *p, void *obj, int n);
extern void func_02069600(void *p, void *obj);

typedef struct Obj {
    void (**vtbl)(struct Obj *);
} Obj;

typedef struct Self {
    uint8_t pad[0xc8];
    uint32_t *arr;
    uint32_t count;
} Self;

void func_ov007_021bec50(Self *p)
{
    uint32_t i;
    uint32_t z = 0;
    for (i = 0; i < p->count; i++) {
        Obj *o;
        func_02069694(p, (void *)p->arr[i], 2);
        func_02069694(p, (void *)p->arr[i], 3);
        func_02069694(p, (void *)p->arr[i], 1);
        func_02069600(p, (void *)p->arr[i]);
        o = (Obj *)p->arr[i];
        if (o != 0) {
            if (o != 0) {
                o->vtbl[1](o);
            }
            p->arr[i] = z;
        }
    }
}
