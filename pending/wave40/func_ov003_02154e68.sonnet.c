#include "ffc/types.h"

extern int32_t func_0201c00c(int32_t a, int32_t b);
extern int32_t data_020b93b8;

typedef struct {
    int32_t a;
    int32_t lo1;
    int32_t lo2;
    int32_t hi1;
    int32_t hi2;
} Elem;

typedef struct { uint8_t pad[0x110]; Elem items[10]; uint32_t count; } Self;

typedef struct {
    int32_t x;
    int32_t y;
} Pt;

int32_t func_ov003_02154e68(Self *self, Pt pos, int32_t *out) {
    int32_t n = 0;
    uint32_t i;

    for (i = 0; i < self->count; i++) {
        Elem *e = &self->items[i];
        if (func_0201c00c(data_020b93b8, e->a) != 0) continue;
        if (pos.x < e->lo1) continue;
        if (pos.x > e->hi1) continue;
        if (pos.y < e->lo2) continue;
        if (pos.y > e->hi2) continue;
        out[n] = (int32_t)i;
        n++;
    }
    return n;
}
