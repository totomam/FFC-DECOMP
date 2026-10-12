#include "ffc/types.h"

typedef struct { uint32_t lo; uint32_t hi; } S8;
typedef struct { S8 x; uint32_t w; } R;
typedef struct { uint32_t w; uint8_t f; } S5;

void func_020987f8(R *out, void *self, S8 x, S5 s) {
    if (*((uint8_t *)self + 0x3a) == 0 || (s.f & 0x18) == 0) {
        goto fail;
    }
    if (((int32_t (*)(void *))(*(void ***)self)[5])(self) < 0) {
        goto fail;
    }
    if (((int64_t (*)(void *, S8, int32_t))(*(void ***)self)[15])(self, x, 0) < 0) {
        goto fail;
    }
    out->x = x;
    out->w = s.w;
    return;
fail:
    out->x.lo = 0xffffffffu;
    out->x.hi = 0xffffffffu;
    out->w = 0;
}
