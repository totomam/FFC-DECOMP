#include "ffc/types.h"
typedef void (*fn_t)(void *, uint32_t, uint32_t, uint16_t);
typedef struct { uint32_t fn; int32_t flags; } Slot;
typedef struct {
    uint8_t pad0[0xc]; uint32_t w;
    uint8_t pad1[0x84-0x10];
    uint8_t *obj; Slot s; uint32_t a; uint32_t b; uint16_t c;
} T;
void func_ov003_02162b20(T *p) {
    Slot *s = &p->s;
    int32_t flags = s->flags;
    uint8_t *obj = p->obj + (flags >> 1);
    fn_t fn;
    if (flags & 1) {
        fn = *(fn_t *)(*(uint8_t **)obj + s->fn);
    } else {
        fn = (fn_t)s->fn;
    }
    fn(obj, p->a, p->b, p->c);
    p->w = (p->w & ~0xffu) | 2;
}
