#include "ffc/types.h"

typedef struct Obj {
    void **vt;
} Obj;

typedef struct Owner {
    uint8_t pad[0x18];
    Obj **items;
    uint32_t count;
} Owner;

int func_02061adc(Owner *o) {
    Obj **p;
    for (p = o->items; p != (Obj **)((char *)o->items + (o->count << 2)); p++) {
        if (((int (*)(Obj *))(*p)->vt[8])(*p)) {
            return ((int (*)(Obj *))(*p)->vt[8])(*p);
        }
    }
    return 0;
}
