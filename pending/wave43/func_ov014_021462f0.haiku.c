/* cflags: -nothumb */
#include "ffc/types.h"

#define FLD(p, o, t) (*(t *)((uint8_t *)(p) + (o)))

int func_ov014_021462f0(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *sp;
    uint8_t *op;
    int32_t old;
    int32_t ns;
    int32_t i;
    uint32_t v;
    uint32_t ret;
    void *obj;
    uint32_t *dst;
    uint32_t *a;

    if (FLD(p, 0x98, uint32_t) == FLD(p, 0xc, uint32_t)) {
        return 0;
    }
    old = FLD(p, 0x90, int32_t);
    ns = (old + 1) % 2;
    FLD(p, 0x98, uint32_t) = FLD(p, 0x98, uint32_t) + 1;
    FLD(p, 0x90, int32_t) = ns;

    obj = FLD(p, 0, void *);
    ((void (*)(void *))(*(void ***)obj)[5])(obj);

    ns = FLD(p, 0x90, int32_t);
    sp = p + ns * 4;
    v = *(uint32_t *)(FLD(sp, 0x70, uint8_t *) + (FLD(sp, 0x80, uint32_t) + FLD(sp, 0x78, uint32_t)));
    op = p + old * 4;
    FLD(op, 0x78, uint32_t) = v >> 14;
    FLD(op, 0x88, uint32_t) = v & 0x3fff;

    ns = FLD(p, 0x90, int32_t);
    sp = p + ns * 4;
    *FLD(p, 0x34, uint32_t *) = (uint32_t)FLD(sp, 0x70, uint8_t *) + FLD(sp, 0x80, uint32_t);

    if (FLD(p, 0x98, uint32_t) < FLD(p, 0xc, uint32_t)) {
        obj = FLD(p, 0, void *);
        ret = ((uint32_t (*)(void *, uint32_t, uint32_t))(*(void ***)obj)[4])(
            obj,
            FLD(op, 0x70, uint32_t),
            FLD(op, 0x78, uint32_t) + 4);
        FLD(op, 0x80, uint32_t) = ret;
    }

    for (i = 0; i < 6; i++) {
        a = FLD(p, 0x5c, uint32_t *);
        dst = FLD(p, 0x34, uint32_t *);
        dst[i + 3] = a[FLD(p, 0xac + i * 4, uint32_t)];
        a = FLD(p, 0x60, uint32_t *);
        dst = FLD(p, 0x34, uint32_t *);
        dst[i + 9] = a[FLD(p, 0xac + i * 4, uint32_t)];
    }

    ns = FLD(p, 0x90, int32_t);
    sp = p + ns * 4;
    FLD(p, 0xc8, uint32_t) = FLD(p, 0x1e, uint16_t) * FLD(sp, 0x88, uint32_t);
    return 1;
}
