#include "ffc/types.h"

typedef struct {
    uint32_t v[6];
} Rec;

void func_0201ecbc(uint8_t *ctx, int idx, uint32_t *out) {
    Rec *tbl = *(Rec **)(ctx + 0x4c);
    Rec *r = &tbl[idx];
    out[0] = r->v[0];
    out[1] = r->v[1];
    out[2] = r->v[2];
    out[3] = r->v[3];
    out[4] = r->v[4];
    out[5] = r->v[5];
}
