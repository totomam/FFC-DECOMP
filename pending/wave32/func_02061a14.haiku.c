#include "ffc/types.h"

typedef int (*VFn)(void *, void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

typedef struct Holder {
    uint8_t pad[0x18];
    Obj **items;
    uint32_t count;
} Holder;

int func_02061a14(Holder *h, void *arg)
{
    Obj **p = h->items;
    Obj **end = &h->items[h->count];
    if (p == end) {
        return 0;
    }
    do {
        if ((*p)->vtbl[4]((*p), arg)) {
            return 1;
        }
        p++;
    } while (p != &h->items[h->count]);
    return 0;
}
