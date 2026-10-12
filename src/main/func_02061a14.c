#include "ffc/types.h"

typedef struct Obj { int (**vtbl)(void *, void *); } Obj;

typedef struct Holder {
    uint8_t pad[0x18];
    Obj **items;
    uint32_t count;
} Holder;

int func_02061a14(Holder *h, void *arg)
{
    Obj **p = h->items;
    Obj **end = (Obj **)((char *)h->items + h->count * 4);
    while (p != end) {
        if ((*p)->vtbl[4](*p, arg)) {
            return 1;
        }
        p++;
        end = (Obj **)((char *)h->items + h->count * 4);
    }
    return 0;
}
