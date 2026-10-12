/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Ent;

uint32_t func_ov014_02146428(uint8_t *self, int idx)
{
    uint32_t v;
    uint32_t ip;
    void *obj;

    if (idx < 0 || (uint32_t)idx >= *(uint32_t *)(self + 0x30)) {
        return 0;
    }

    obj = *(void **)self;
    if (!((int (*)(void *, void *))(*(void ***)obj)[2])(obj,
            *(uint8_t **)(self + 0xd4) + ((Ent *)(*(void **)(self + 0x94)))[idx].b)) {
        return 0;
    }

    *(uint32_t *)(self + 0x98) = ((Ent *)(*(void **)(self + 0x94)))[idx].a;
    obj = *(void **)self;
    ((void (*)(void *))(*(void ***)obj)[5])(obj);

    *(int *)(self + 0x90) = 1;
    obj = *(void **)self;
    ((void (*)(void *, uint32_t *, uint32_t))(*(void ***)obj)[3])(obj, &v, 4);

    ip = v >> 14;
    *(uint32_t *)(self + 0x78) = ip;
    *(uint32_t *)(self + 0x88) = v & 0x3fff;
    *(uint32_t *)(self + 0x80) = 0;

    obj = *(void **)self;
    ((void (*)(void *, void *, uint32_t))(*(void ***)obj)[3])(obj,
            *(void **)(self + 0x70), ip + 4);
    return 1;
}
