#include "ffc/types.h"

extern uint32_t data_0213e178[];

struct Obj {
    void **vt;
    uint32_t pad[2];
    uint32_t f0c;
};

typedef void (*Method)(struct Obj *);

void func_0206e9f4(uint8_t *p) {
    struct Obj *o;
    Method fn;
    if (p[0x25] != 0) {
        if (p[0x24] != 0) {
            fn = (Method)((struct Obj *)*(void **)(p + 0x1c))->vt[11];
        } else {
            fn = (Method)((struct Obj *)*(void **)(p + 0x1c))->vt[10];
        }
    } else {
        if (data_0213e178[1] != 0) {
            *(uint32_t *)(p + 0x28) = 10;
        }
        if (*(uint32_t *)(p + 0x28) != 0) {
            *(uint32_t *)(p + 0x28) = *(uint32_t *)(p + 0x28) - 1;
        }
        if (p[0x24] != 0 || *(uint32_t *)(p + 0x28) == 0) {
            fn = (Method)((struct Obj *)*(void **)(p + 0x1c))->vt[11];
        } else {
            fn = (Method)((struct Obj *)*(void **)(p + 0x1c))->vt[10];
        }
    }
    o = *(struct Obj **)(p + 0x1c);
    fn(o);
    o = *(struct Obj **)(p + 0x1c);
    if ((int8_t)o->f0c == 0) {
        ((Method)o->vt[2])(o);
    }
    o = *(struct Obj **)(p + 0x20);
    if ((int8_t)o->f0c == 0) {
        ((Method)o->vt[2])(o);
    }
}
