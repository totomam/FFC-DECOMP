#include "ffc/types.h"

typedef void (*fn_t)(uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t);

typedef struct Sub {
    uint32_t slot;
    uint32_t flags;
} Sub;

typedef struct Obj {
    uint8_t pad0[0x0c];
    uint32_t w0c;
    uint8_t pad1[0x84 - 0x10];
    uint8_t *base;
    Sub sub;
    uint32_t a90;
    uint32_t a94;
    uint32_t a98;
    uint32_t a9c;
} Obj;

void func_02044374(Obj *self) {
    Sub *s = &self->sub;
    int32_t flags = (int32_t)s->flags;
    uint8_t *base = self->base;
    int32_t off = flags >> 1;
    fn_t fn;
    if (flags & 1) {
        uint8_t *obj = *(uint8_t **)(base + off);
        fn = *(fn_t *)(obj + s->slot);
    } else {
        fn = (fn_t)s->slot;
    }
    fn(base + off, self->a90, self->a94, self->a98, self->a9c);
    self->w0c = (self->w0c & ~0xffu) | 2;
}
