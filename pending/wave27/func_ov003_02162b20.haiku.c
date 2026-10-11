#include "ffc/types.h"

typedef void (*fn_t)(void *, uint32_t, uint32_t, uint16_t);

typedef struct {
    uint32_t fn;
    int32_t flags;
} Slot;

void func_ov003_02162b20(uint8_t *p) {
    Slot *s = (Slot *)(p + 0x88);
    int32_t flags = s->flags;
    uint8_t *obj = *(uint8_t **)(p + 0x84);
    int32_t off = flags >> 1;
    fn_t fn;
    if (flags & 1) {
        uint8_t *vt = *(uint8_t **)(obj + off);
        fn = *(fn_t *)(vt + s->fn);
    } else {
        fn = (fn_t)s->fn;
    }
    fn(obj + off, *(uint32_t *)(p + 0x90), *(uint32_t *)(p + 0x94), *(uint16_t *)(p + 0x98));
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
