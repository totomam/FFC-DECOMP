#include "ffc/types.h"

typedef struct { uint32_t lo; uint32_t hi; } S8;
typedef struct { S8 x; uint32_t w; } R;
typedef struct { uint32_t w; uint8_t f; } S5;
typedef struct O O;
struct O { int32_t (**vt)(O *); uint8_t pad[0x36]; uint8_t ok; };

void func_020987f8(R *out, O *self, S8 x, S5 s) {
    uint8_t ok = self->ok;
    uint32_t w = s.w;
    int32_t z;
    if (ok == 0 || (uint8_t)(s.f & 0x18) == 0) {
        out->x.lo = -1; out->x.hi = -1; out->w = 0;
        return;
    }
    if (((int32_t (*)(O *))((void **)self->vt)[5])(self) < 0) {
        out->x.lo = -1; out->x.hi = -1; out->w = 0;
        return;
    }
    z = 0;
    if (((int64_t (*)(O *, uint32_t, uint32_t, int32_t))((void **)self->vt)[15])(self, x.lo, x.hi, z) < z) {
        out->x.lo = z - 1; out->x.hi = z - 1; out->w = z;
        return;
    }
    out->x = x;
    out->w = w;
}
