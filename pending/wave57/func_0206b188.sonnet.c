#include "ffc/types.h"

typedef struct {
    int32_t v0;
    int32_t v1;
    int32_t v2;
    int32_t v3;
} Ent;

typedef struct {
    int32_t a;
    int32_t b;
} Pair;

void func_0206b188(uint8_t *ctx, int32_t x, int32_t y, int32_t idx) {
    Ent *e;
    Pair *src;
    uint8_t *out;

    if (x >= y) {
        return;
    }
    e = *(Ent **)(ctx + 0x44) + idx;
    src = (Pair *)&e->v2;
    out = *(uint8_t **)(ctx + 0x38) + idx * 4;

loop:
    if (e->v0 == 0 && e->v1 == 0) {
        goto end;
    }
    if (x <= e->v1 && y >= e->v0) {
        *(Pair *)e = *src;
        e->v2 = 0;
        e->v3 = 0;
        goto loop;
    }
    if (x > e->v1 && y < e->v0) {
        e->v2 = e->v0;
        e->v0 = x;
        e->v3 = y;
        goto end;
    }
    if (x <= e->v1 && y > e->v1) {
        e->v1 = y;
    } else if (x < e->v0 && y >= e->v0) {
        e->v0 = x;
    }
    if (e->v0 == 0 && e->v1 == 0) {
        goto end;
    }
    if (x > e->v3 || y <= e->v3) {
        if (x <= e->v3 && y >= e->v2) {
            e->v2 = 0;
            e->v3 = 0;
            goto end;
        }
        if (x < e->v2 && y >= e->v2) {
            e->v2 = x;
        }
        goto end;
    }
    e->v3 = y;

end:
    if (e->v0 == 0x100 && e->v1 == 0) {
        out[1] = 0;
        out[0] = 0x80;
        out[3] = 0x80;
        out[2] = 0;
    } else {
        out[0] = (uint8_t)e->v0;
        out[1] = (uint8_t)e->v1;
        out[2] = (uint8_t)e->v2;
        out[3] = (uint8_t)e->v3;
    }
}
