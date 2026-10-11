#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
} Pair;

typedef struct {
    char pad[0x1c];
    int32_t x;
    int32_t y;
} Inner;

typedef struct {
    char pad[0x20];
    Inner *inner;
    int32_t idx;
    int32_t p;
    int32_t q;
} Outer;

extern Pair data_ov002_021d4c0c[];

void func_ov002_0219d018(Pair *out, Outer *s)
{
    Inner *in = s->inner;
    if (in != 0) {
        Pair *d = &data_ov002_021d4c0c[s->idx];
        int32_t b = d->b - in->y;
        out->a = d->a - in->x;
        out->b = b;
    } else {
        *out = *(Pair*)&s->p; return;
    }
}
