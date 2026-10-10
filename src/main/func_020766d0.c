#include "ffc/types.h"

typedef void (*VFunc)(void *);

typedef struct Obj {
    VFunc *vtbl;
    char pad[0x80];
    int32_t count;
} Obj;

void func_020766d0(Obj *self) {
    if (self->count == 0) {
        self->count = self->count + 1;
        self->vtbl[4](self);
    } else {
        self->vtbl[5](self);
    }
}
