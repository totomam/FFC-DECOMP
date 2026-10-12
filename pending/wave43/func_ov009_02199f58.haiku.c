#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

typedef void (*VFn1)(void *, void *);
typedef void (*VCall)(void *, Pair);

#define F32(off) (*(uint32_t *)(self + (off)))
#define FP(off) (*(void **)(self + (off)))

void func_ov009_02199f58(uint8_t *self, Pair s) {
    uint32_t out;
    uint32_t u8;
    uint32_t v;
    void *obj;
    Pair p1;
    Pair p2;

    F32(0xa4) = s.x;
    F32(0xa8) = s.y;

    obj = FP(0x80);
    ((VFn1)((*(void ***)obj)[1]))(&out, obj);

    if (F32(0xa4) < out) {
        F32(0xa4) = out;
    }

    u8 = *(uint8_t *)(self + 0xa0);
    v = F32(0xa4) + u8 * out + 0x10;
    if (v > (0x100 - out)) {
        F32(0xa4) = (uint32_t)((-1 - (int)u8) * (int)out) + 0xf0;
    }

    if (FP(0x90) != 0) {
        obj = FP(0x90);
        p1.x = F32(0xa4) + 0x10;
        p1.y = F32(0xa8);
        ((VCall)((*(void ***)obj)[3]))(obj, p1);
    }

    if (FP(0x88) != 0) {
        obj = FP(0x88);
        p2.x = F32(0xa4) + 8;
        p2.y = F32(0xa8) + 6;
        ((VCall)((*(void ***)obj)[3]))(obj, p2);
    }
}
